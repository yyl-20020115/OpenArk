/****************************************************************************
**
** Copyright (C) 2019 BlackINT3
** Contact: https://github.com/BlackINT3/OpenArk
**
** GNU Lesser General Public License Usage (LGPL)
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
****************************************************************************/
#include "kernel.h"
#include "driver/driver.h"
#include "../common/common.h"
#include "../common/utils/disassembly/disassembly.h"
#include "../openark/openark.h"
#include "wingui/wingui.h"
#include "../../../OpenArkDrv/arkdrv-api/arkdrv-api.h"

struct {
	int s = 0;
	int addr = s++;
	int type = s++;
	int path = s++;
	int desc = s++;
	int ver = s++;
	int corp = s++;
} NOTIFY;

bool NotifySortFilterProxyModel::lessThan(const QModelIndex &left, const QModelIndex &right) const {
	bool ok;
	auto s1 = sourceModel()->data(left); auto s2 = sourceModel()->data(right);
	auto column = left.column();
	if ((column == NOTIFY.addr))
		return s1.toString().toULongLong(&ok, 16) < s2.toString().toULongLong(&ok, 16);
	return QString::compare(s1.toString(), s2.toString(), Qt::CaseInsensitive) < 0;
}

bool HotkeySortFilterProxyModel::lessThan(const QModelIndex &left, const QModelIndex &right) const {
	auto s1 = sourceModel()->data(left); auto s2 = sourceModel()->data(right);
	return QString::compare(s1.toString(), s2.toString(), Qt::CaseInsensitive) < 0;
}

Kernel::Kernel(QWidget *parent, int tabid) :
	CommonMainTabObject::CommonMainTabObject((OpenArk*)parent)
{
	ui.setupUi(this);
	setAcceptDrops(true);
	network_ = nullptr;
	storage_ = nullptr;
	memory_ = nullptr;
	driver_ = nullptr;
	object_ = nullptr;

	network_ = new KernelNetwork(); network_->ModuleInit(&ui, this);
	storage_ = new KernelStorage(); storage_->ModuleInit(&ui, this);
	object_ = new KernelObject(); object_->ModuleInit(&ui, this);
	memory_ = new KernelMemory(); memory_->ModuleInit(&ui, this);
	driver_ = new KernelDriver(); driver_->ModuleInit(&ui, this);

	InitKernelEntryView();
	InitNotifyView();
	InitHotkeyView();

	CommonMainTabObject::Init(ui.tabWidget, tabid);

	connect(this, SIGNAL(signalOpen(QString)), parent_, SLOT(onOpen(QString)));
}

Kernel::~Kernel()
{
}

bool Kernel::eventFilter(QObject *obj, QEvent *e)
{
	bool filtered = false;
	if (e->type() == QEvent::ContextMenu) {
		QMenu *menu = nullptr;
		if (obj == ui.notifyView->viewport()) menu = notify_menu_;
		else if (obj == ui.hotkeyView->viewport()) menu = hotkey_menu_;
		QContextMenuEvent *ctxevt = dynamic_cast<QContextMenuEvent*>(e);
		if (ctxevt && menu) {
			menu->move(ctxevt->globalPos());
			menu->show();
		}
	} else if (e->type() == QEvent::MouseMove) {
		QMouseEvent *mouse = static_cast<QMouseEvent *>(e);
		if (obj == ui.hkFilterEdit) {
			if (ui.hkFilterEdit->text().isEmpty()) {
				QString tips(tr("Tips:If you not found the hotkeys,please check the shortcut keys of IME software.(eg:Microsoft/Sogou/Google IME, etc.)"));
				QToolTip::showText(mouse->globalPos(), tips);
				return true;
			}
		}
	}

	if (network_) network_->eventFilter(obj, e);
	if (driver_) driver_->eventFilter(obj, e);

	if (filtered) {
		dynamic_cast<QKeyEvent*>(e)->ignore();
		return true;
	}
	return QWidget::eventFilter(obj, e);
}

void Kernel::dragEnterEvent(QDragEnterEvent *event)
{
	if (event->mimeData()->hasFormat("text/uri-list"))
		event->acceptProposedAction();
}

void Kernel::dropEvent(QDropEvent *event)
{
	if (!event->mimeData()->hasUrls())
		return;
	QString path = event->mimeData()->urls()[0].toLocalFile();
	onOpenFile(path);
}

void Kernel::onClickKernelMode()
{
	QString &&drvname = UNONE::OsIs64() ? "OpenArkDrv64.sys" : "OpenArkDrv32.sys";
	QString &&srvname = WStrToQ(UNONE::FsPathToPureNameW(drvname.toStdWString()));
	if (!arkdrv_conn_) {
		QString drvpath;
		drvpath = WStrToQ(UNONE::OsEnvironmentW(QToWStr(L"%Temp%\\" + drvname)));
		DeleteFileW(QToWChars(drvpath));
		ExtractResource(":/OpenArk/driver/" + drvname, drvpath);
		bool installed;
		if (UNONE::OsMajorVer() <= 6) {
			SignExpiredDriver(drvpath);
			RECOVER_SIGN_TIME();
			installed = driver_->InstallDriver(drvpath, srvname);
		} else {
			installed = driver_->InstallDriver(drvpath, srvname);
		}
		if (!installed) {
			QERR_W("InstallDriver %s err", QToWChars(drvpath));
			return;
		}
		if (!ArkDrvApi::ConnectDriver()) {
			ERR("ConnectDriver err");
			return;
		}
		ui.kernelModeBtn->setText(tr("Exit KernelMode"));
		INFO("Enter KernelMode ok");
	} else {
		if (!ArkDrvApi::DisconnectDriver()) {
			ERR("DisconnectDriver err");
			return;
		}
		if (!driver_->UninstallDriver(srvname)) {
			QERR_W("UninstallDriver %s err", QToWChars(srvname));
			return;
		}
		ui.kernelModeBtn->setText(tr("Enter KernelMode"));
		INFO("Exit KernelMode ok");
	}
	onRefreshKernelMode();
}

void Kernel::onRefreshKernelMode()
{
	bool conn = ArkDrvApi::HeartBeatPulse();
	if (conn && !arkdrv_conn_) {
		ui.kernelModeStatus->setText(tr("[KernelMode] Enter successfully..."));
		ui.kernelModeStatus->setStyleSheet("color:green");
		ui.kernelModeBtn->setText(tr("Exit KernelMode"));
		arkdrv_conn_ = true;
		onTabChanged(ui.tabWidget->currentIndex());
	}
	if (!conn && arkdrv_conn_) {
		ui.kernelModeStatus->setText(tr("[KernelMode] Exit successfully..."));
		ui.kernelModeStatus->setStyleSheet("color:red");
		ui.kernelModeBtn->setText(tr("Enter KernelMode"));
		arkdrv_conn_ = false;
	}
}

void Kernel::onOpenFile(QString path)
{
	if (!UNONE::FsIsFileW(path.toStdWString()))
		return;
	path = WStrToQ(UNONE::FsPathStandardW(path.toStdWString()));
	ui.driverFileEdit->setText(path);
	auto &&name = UNONE::FsPathToPureNameW(path.toStdWString());
	ui.serviceEdit->setText(WStrToQ(name));
}

void Kernel::onTabChanged(int index)
{
	if (parent_->GetActiveTab() != TAB_KERNEL) return;
	switch (index) {
	case TAB_KERNEL_NOTIFY:
		ShowSystemNotify();
		break;
	case TAB_KERNEL_HOTKEY:
		ShowSystemHotkey();
		break;
	default:
		break;
	}
	CommonMainTabObject::onTabChanged(index);
}

void Kernel::InitKernelEntryView()
{
	kerninfo_model_ = new QStandardItemModel;
	SetDefaultTableViewStyle(ui.kernelInfoView, kerninfo_model_);
	ui.kernelModeStatus->setText(tr("[KernelMode] Enter kernel mode needed before using the features(Hotkey/Notify/Memory...)"));
	ui.kernelModeStatus->setStyleSheet("color:red");
	kerninfo_model_->setHorizontalHeaderLabels(QStringList() << tr("Name") << tr("Value"));
	ui.kernelInfoView->setColumnWidth(0, 120);

	int up_seq = 0;
	auto AddSummaryUpItem = [&](QString name, QString value) {
		kerninfo_model_->setItem(up_seq, 0, new QStandardItem(name));
		kerninfo_model_->setItem(up_seq, 1, new QStandardItem(value));
		up_seq++;
	};

	SYSTEM_INFO sys;
	GetSystemInfo(&sys);
	sys.dwNumberOfProcessors;

	OSVERSIONINFOEXW info;
	info.dwOSVersionInfoSize = sizeof(info);
	GetVersionExW((LPOSVERSIONINFOW)&info);

	PERFORMANCE_INFORMATION perf = { 0 };
	GetPerformanceInfo(&perf, sizeof(perf));
	double gb = round((double)(perf.PhysicalTotal*perf.PageSize) / 1024 / 1024 / 1024);

	AddSummaryUpItem(tr("OperateSystem"), StrToQ(OsWinVersionInfo()));
	auto major = UNONE::OsMajorVer();
	AddSummaryUpItem(tr("MajorVersion"), DWordToDecQ(major));
	AddSummaryUpItem(tr("MiniorVersion"), DWordToDecQ(UNONE::OsMinorVer()));
	if (major >= 10) AddSummaryUpItem(tr("ReleaseNumber"), StrToQ(OsReleaseNumber()));
	AddSummaryUpItem(tr("BuildNumber"), DWordToDecQ(UNONE::OsBuildNumber()));
	AddSummaryUpItem(tr("MajorServicePack"), DWordToDecQ(info.wServicePackMajor));
	AddSummaryUpItem(tr("MiniorServicePack"), DWordToDecQ(info.wServicePackMinor));

	auto range = ArkDrvApi::Memory::MemoryRange();
	AddSummaryUpItem(tr("R3 AddressRange"), StrToQ(UNONE::StrFormatA("0x%llX - 0x%llX", range.r3start, range.r3end)));
	AddSummaryUpItem(tr("R0 AddressRange"), StrToQ(UNONE::StrFormatA("0x%llX - 0x%llX", range.r0start, range.r0end)));
	AddSummaryUpItem(tr("Page Size"), StrToQ(UNONE::StrFormatA("%d KB", sys.dwPageSize / 1024)));
	AddSummaryUpItem(tr("Physical Memory"), StrToQ(UNONE::StrFormatA("%d GB", (int)gb)));
	AddSummaryUpItem(tr("CPU Count"), DWordToDecQ(sys.dwNumberOfProcessors));
	AddSummaryUpItem(tr("SystemRoot"), WStrToQ(UNONE::OsWinDirW()));

	connect(ui.kernelModeBtn, SIGNAL(clicked()), this, SLOT(onClickKernelMode()));
	connect(ui.kernelInfoView, &QTableView::doubleClicked, [&](QModelIndex idx) {
		//FIXED: should not be QString&
		QString txt = idx.data().toString();
		if (txt == tr("ReleaseNumber") || txt == tr("BuildNumber")) {
			ShellOpenUrl("https://docs.microsoft.com/en-us/windows/release-health/release-information");
		}
	});

	arkdrv_conn_ = false;
	auto timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(onRefreshKernelMode()));
	timer->setInterval(1000);
	timer->start();
}

void Kernel::InitNotifyView()
{
	QTreeView *view = ui.notifyView;
	notify_model_ = new QStandardItemModel;
	proxy_notify_ = new NotifySortFilterProxyModel(view);
	std::vector<std::pair<int, QString>> layout = {
		{ 150, tr("Callback Entry") },
		{ 100, tr("Type") },
		{ 360, tr("Path") },
		{ 230, tr("Description") },
		{ 120, tr("Version") },
		{ 160, tr("Company") } };
	SetDefaultTreeViewStyle(view, notify_model_, proxy_notify_, layout);
	view->viewport()->installEventFilter(this);
	view->installEventFilter(this);

	notify_menu_ = new QMenu();
	notify_menu_->addAction(tr("Refresh"), this, [&] { ShowSystemNotify(); });
	notify_menu_->addSeparator();
	notify_menu_->addAction(tr("Delete Notify"), this, [&] {
		ULONG64 addr;
		addr = QHexToQWord(NotifyItemData(NOTIFY.addr));
		NOTIFY_TYPE type;
		auto &&qstr = NotifyItemData(NOTIFY.type);
		if (qstr == tr("CreateProcess")) type = CREATE_PROCESS;
		else if (qstr == tr("CreateThread")) type = CREATE_THREAD;
		else if (qstr == tr("LoadImage")) type = LOAD_IMAGE;
		else if (qstr == tr("CmpCallback")) type = CM_REGISTRY;
		ArkDrvApi::Notify::NotifyRemove(type, addr);
		ShowSystemNotify();
	});
	notify_menu_->addAction(tr("Disassemble Notify"), this, [&] {
		QString &&qstr = NotifyItemData(NOTIFY.addr);
		ULONG64 addr = QHexToQWord(qstr);
		ULONG size = 0x100;
		auto memrw = new KernelMemoryRW();
		memrw->ViewMemory(GetCurrentProcessId(), addr, size);
		memrw->OpenNewWindow(qobject_cast<QWidget*>(this->parent()), addr, size);
		//SetActiveTab(QVector<int>({ KernelTabMemory, KernelMemory::View }));
	});
	notify_menu_->addSeparator();
	notify_menu_->addAction(tr("Copy"), this, [&] {
		ClipboardCopyData(NotifyItemData(GetCurViewColumn(ui.driverView)).toStdString());
	});
	notify_menu_->addAction(tr("Sendto Scanner"), this, [&] {
		parent_->SetActiveTab(TAB_SCANNER);
		emit signalOpen(NotifyItemData(NOTIFY.path));
	});
	notify_menu_->addAction(tr("Explore File"), this, [&] {
		ExploreFile(NotifyItemData(NOTIFY.path));
	});
	notify_menu_->addAction(tr("Properties..."), this, [&]() {
		WinShowProperties(NotifyItemData(NOTIFY.path).toStdWString());
	});
}

void Kernel::InitHotkeyView()
{
	QTreeView *view = ui.hotkeyView;
	hotkey_model_ = new QStandardItemModel;
	proxy_hotkey_ = new HotkeySortFilterProxyModel(view);

	static std::vector<std::pair<int, QString>> layout = {
	{ 150, tr("Name") },
	{ 100, tr("PID.TID") },
	{ 180, tr("Hotkey") },
	{ 150, tr("HotkeyObject") },
	{ 100, tr("HotkeyID") },
	{ 100, tr("HWND") },
	{ 180, tr("Title") },
	{ 180, tr("ClassName") },
	{ 300, tr("Path") },
	{ 160, tr("Description") } };
	SetDefaultTreeViewStyle(view, hotkey_model_, proxy_hotkey_, layout);
	view->viewport()->installEventFilter(this);
	view->installEventFilter(this);
	ui.hkFilterEdit->installEventFilter(this);
	ui.hkFilterEdit->setMouseTracking(true);

	hotkey_menu_ = new QMenu();
	hotkey_menu_->addAction(tr("Refresh"), this, [&] { ShowSystemHotkey(); });
	hotkey_menu_->addSeparator();
	hotkey_menu_->addAction(tr("Delete Hotkey"), this, [&] {
		ULONG32 vkid = QHexToDWord(HotkeyItemData(LAYOUT_INDEX("HotkeyID")));
		auto arr = HotkeyItemData(LAYOUT_INDEX("PID.TID")).split(".");
		ULONG32 pid = QDecToDWord(arr[0]);
		ULONG32 tid = QDecToDWord(arr[1]);
		HOTKEY_ITEM item;
		item.id = vkid;
		item.pid = pid;
		item.tid = tid;
		if (!ArkDrvApi::WinGUI::HotkeyRemoveInfo(item)) {
			auto err = UNONE::StrFormatW(L"Remove Hotkey %d.%d id:%x err:%s",
				pid, tid, vkid, UNONE::OsDosErrorMsgW(GetLastError()).c_str());
			MsgBoxError(WStrToQ(err));
			return;
		}
		INFO(L"Remove Hotkey %d.%d id:%x ok", pid, tid, vkid);
		proxy_hotkey_->removeRows(ui.hotkeyView->currentIndex().row(), 1);
	});
	hotkey_menu_->addSeparator();
	hotkey_menu_->addAction(tr("Sendto Scanner"), this, [&] {
		parent_->SetActiveTab(TAB_SCANNER);
		emit signalOpen(HotkeyItemData(LAYOUT_INDEX("Path")));
	});
	hotkey_menu_->addAction(tr("Explore File"), this, [&] {
		ExploreFile(HotkeyItemData(LAYOUT_INDEX("Path")));
	});
	hotkey_menu_->addAction(tr("Properties..."), this, [&]() {
		WinShowProperties(HotkeyItemData(LAYOUT_INDEX("Path")).toStdWString());
	});
	connect(ui.hkFilterEdit, &QLineEdit::textChanged, [&](QString str) { ShowSystemHotkey(); });
}

void Kernel::ShowSystemNotify()
{
	DISABLE_RECOVER();
	ClearItemModelData(notify_model_, 0);
	
	std::vector<DRIVER_ITEM> infos;
	ArkDrvApi::Driver::DriverEnumInfo(infos);
	
	auto OutputNotify = [&](std::vector<ULONG64> &routines, QString type) {
		for (auto routine : routines) {
			QString path;
			for (auto info : infos) {
				if (IN_RANGE(routine, info.base, info.size)) {
					path = WStrToQ(ParseDriverPath(info.path));
					break;
				}
			}
			bool microsoft = true;
			bool existed = true;
			auto info = CacheGetFileBaseInfo(path);
			if (info.desc.isEmpty()) {
				if (!UNONE::FsIsExistedW(info.path.toStdWString())) {
					info.desc = tr("[-] Driver file not existed!");
					existed = false;
				}
			}
			if (!info.corp.contains("Microsoft", Qt::CaseInsensitive)) { microsoft = false; }
			QStandardItem *addr_item = new QStandardItem(WStrToQ(UNONE::StrFormatW(L"0x%llX", routine)));
			QStandardItem *type_item = new QStandardItem(type);
			QStandardItem *path_item = new QStandardItem(path);
			QStandardItem *desc_item = new QStandardItem(info.desc);
			QStandardItem *ver_item = new QStandardItem(info.ver);
			QStandardItem *corp_item = new QStandardItem(info.corp);
			auto count = notify_model_->rowCount();
			notify_model_->setItem(count, NOTIFY.addr, addr_item);
			notify_model_->setItem(count, NOTIFY.type, type_item);
			notify_model_->setItem(count, NOTIFY.path, path_item);
			notify_model_->setItem(count, NOTIFY.desc, desc_item);
			notify_model_->setItem(count, NOTIFY.ver, ver_item);
			notify_model_->setItem(count, NOTIFY.corp, corp_item);
			if (!existed) SetLineBgColor(notify_model_, count, Qt::red);
			else if (!microsoft) SetLineBgColor(notify_model_, count, QBrush(0xffffaa));
		}
	};

	std::vector<ULONG64> routines;
	if (!ArkDrvApi::Notify::NotifyEnumProcess(routines)) QERR_W("NotifyEnumProcess err");
	OutputNotify(routines, tr("CreateProcess"));

	if (!ArkDrvApi::Notify::NotifyEnumThread(routines)) QERR_W("NotifyEnumThread err");
	OutputNotify(routines, tr("CreateThread"));

	if (!ArkDrvApi::Notify::NotifyEnumImage(routines)) QERR_W("NotifyEnumImage err");
	OutputNotify(routines, tr("LoadImage"));

	if (!ArkDrvApi::Notify::NotifyEnumRegistry(routines)) QERR_W("NotifyEnumRegistry err");
	OutputNotify(routines, tr("CmpCallback"));
}

void Kernel::ShowSystemHotkey()
{
	DISABLE_RECOVER();
	ClearItemModelData(hotkey_model_, 0);

	auto flt = ui.hkFilterEdit->text();

	std::vector<HOTKEY_ITEM> infos;
	ArkDrvApi::WinGUI::HotkeyEnumInfo(infos);
	for (auto item : infos) {
		auto pid = item.pid;

		ProcInfo cache;
		CacheGetProcInfo(pid, cache);
		auto &&path = QToWStr(cache.path);
		auto &&name = UNONE::FsPathToNameW(path);
		if (name.empty()) name = UNONE::StrToW((char*)item.name);
		auto info = CacheGetFileBaseInfo(WStrToQ(path));
		auto name_str = WStrToQ(name);
		auto wnd_str = WStrToQ(UNONE::StrFormatW(L"0x%X", item.wnd));
		auto title_str = WStrToQ(UNONE::PsGetWndTextW((HWND)item.wnd));
		auto class_str = WStrToQ(UNONE::PsGetWndClassNameW((HWND)item.wnd));
		auto hk_str = WStrToQ(UNONE::StrFormatW(L"0x%p", item.hkobj));
		auto ptid_str = WStrToQ(UNONE::StrFormatW(L"%d.%d", item.pid, item.tid));
		auto vk_str = StrToQ(HotkeyVkToString(item.vk, item.mod1, item.mod2));
		auto vkid_str = WStrToQ(UNONE::StrFormatW(L"0x%X", item.id));
		auto path_str = WStrToQ(path);
		auto desc_str = info.desc;
		if (!flt.isEmpty()) {
			if (!name_str.contains(flt, Qt::CaseInsensitive) &&
				!wnd_str.contains(flt, Qt::CaseInsensitive) &&
				!title_str.contains(flt, Qt::CaseInsensitive) &&
				!class_str.contains(flt, Qt::CaseInsensitive) &&
				!hk_str.contains(flt, Qt::CaseInsensitive) &&
				!vk_str.contains(flt, Qt::CaseInsensitive) &&
				!ptid_str.contains(flt, Qt::CaseInsensitive) &&
				!path_str.contains(flt, Qt::CaseInsensitive) &&
				!desc_str.contains(flt, Qt::CaseInsensitive)
				) continue;
		}

		auto name_item = new QStandardItem(LoadIcon(WStrToQ(path)), name_str);
		auto wnd_item = new QStandardItem(wnd_str);
		auto title_item = new QStandardItem(title_str);
		auto class_item = new QStandardItem(class_str);
		auto hk_item = new QStandardItem(hk_str);
		auto ptid_item = new QStandardItem(ptid_str);
		auto vk_item = new QStandardItem(vk_str);
		auto vkid_item = new QStandardItem(vkid_str);
		auto path_item = new QStandardItem(path_str);
		auto desc_item = new QStandardItem(desc_str);

		auto count = hotkey_model_->rowCount();
		int i = 0;
		hotkey_model_->setItem(count, i++, name_item);
		hotkey_model_->setItem(count, i++, ptid_item);
		hotkey_model_->setItem(count, i++, vk_item);
		hotkey_model_->setItem(count, i++, hk_item);
		hotkey_model_->setItem(count, i++, vkid_item);
		hotkey_model_->setItem(count, i++, wnd_item);
		hotkey_model_->setItem(count, i++, title_item);
		hotkey_model_->setItem(count, i++, class_item);
		hotkey_model_->setItem(count, i++, path_item);
		hotkey_model_->setItem(count, i++, desc_item);
	}
}

QString Kernel::NotifyItemData(int column)
{
	return GetCurItemViewData(ui.notifyView, column);
}

QString Kernel::HotkeyItemData(int column)
{
	return GetCurItemViewData(ui.hotkeyView, column);
}