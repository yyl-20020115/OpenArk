/********************************************************************************
** Form generated from reading UI file 'kernel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KERNEL_H
#define UI_KERNEL_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kernel
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabKernelEntry;
    QHBoxLayout *horizontalLayout_8;
    QTableView *kernelInfoView;
    QWidget *widget;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_12;
    QTabWidget *tabDriver;
    QWidget *tabDrivers;
    QVBoxLayout *verticalLayout_14;
    QTreeView *driverView;
    QWidget *tabDriverKit;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *driverFileEdit;
    QPushButton *browseBtn;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLineEdit *serviceEdit;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *installBtn;
    QPushButton *writeRegBtn;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_6;
    QLabel *infoLabel;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *uninstallBtn;
    QPushButton *cleanRegBtn;
    QGroupBox *groupWDF;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabNotify;
    QVBoxLayout *verticalLayout_8;
    QTreeView *notifyView;
    QWidget *tabHotkey;
    QVBoxLayout *verticalLayout_3;
    QTreeView *hotkeyView;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_3;
    QLineEdit *hkFilterEdit;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_7;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabObject;
    QWidget *tabObjectTypes;
    QHBoxLayout *horizontalLayout_2;
    QTreeView *objectTypesView;
    QWidget *tabObjectSections;
    QVBoxLayout *verticalLayout_6;
    QTreeView *objectSectionsView;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_10;
    QTabWidget *tabMemory;
    QWidget *tabMemoryView;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_19;
    QTabWidget *tabStorage;
    QWidget *tabFileUnlock;
    QVBoxLayout *verticalLayout_15;
    QTreeView *unlockView;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *inputPathEdit;
    QPushButton *showHoldBtn;
    QSpacerItem *horizontalSpacer;
    QFrame *line_2;
    QPushButton *unlockFileBtn;
    QPushButton *unlockFileAllBtn;
    QPushButton *killProcessBtn;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabNetwork;
    QWidget *tabPort;
    QVBoxLayout *verticalLayout_16;
    QTreeView *portView;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *locaIPv4Btn;
    QPushButton *locaIPv6Btn;
    QFrame *line_3;
    QLabel *label;
    QLineEdit *portFilterEdit;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *ipv4CheckBox;
    QCheckBox *ipv6CheckBox;
    QFrame *line;
    QCheckBox *tcpListenCheckBox;
    QCheckBox *tcpConnCheckBox;
    QCheckBox *udpListenCheckBox;
    QWidget *tabHosts;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_11;
    QListWidget *hostsFileListWidget;
    QTextEdit *hostsDataEdit;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *hostsDirBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *hostsSaveBtn;
    QPushButton *hostsClearBtn;
    QPushButton *hostsBackupBtn;
    QPushButton *hostsRefreshBtn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *kernelModeStatus;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *kernelModeBtn;

    void setupUi(QWidget *Kernel)
    {
        if (Kernel->objectName().isEmpty())
            Kernel->setObjectName(QString::fromUtf8("Kernel"));
        Kernel->resize(1057, 736);
        verticalLayout_2 = new QVBoxLayout(Kernel);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
        tabWidget = new QTabWidget(Kernel);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        tabWidget->setTabPosition(QTabWidget::West);
        tabKernelEntry = new QWidget();
        tabKernelEntry->setObjectName(QString::fromUtf8("tabKernelEntry"));
        horizontalLayout_8 = new QHBoxLayout(tabKernelEntry);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        kernelInfoView = new QTableView(tabKernelEntry);
        kernelInfoView->setObjectName(QString::fromUtf8("kernelInfoView"));

        horizontalLayout_8->addWidget(kernelInfoView);

        widget = new QWidget(tabKernelEntry);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout_8->addWidget(widget);

        tabWidget->addTab(tabKernelEntry, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_12 = new QVBoxLayout(tab_4);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        tabDriver = new QTabWidget(tab_4);
        tabDriver->setObjectName(QString::fromUtf8("tabDriver"));
        tabDrivers = new QWidget();
        tabDrivers->setObjectName(QString::fromUtf8("tabDrivers"));
        verticalLayout_14 = new QVBoxLayout(tabDrivers);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        driverView = new QTreeView(tabDrivers);
        driverView->setObjectName(QString::fromUtf8("driverView"));
        driverView->setEnabled(true);
        QFont font;
        font.setKerning(true);
        driverView->setFont(font);
        driverView->setIndentation(5);
        driverView->setItemsExpandable(true);

        verticalLayout_14->addWidget(driverView);

        tabDriver->addTab(tabDrivers, QString());
        tabDriverKit = new QWidget();
        tabDriverKit->setObjectName(QString::fromUtf8("tabDriverKit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabDriverKit->sizePolicy().hasHeightForWidth());
        tabDriverKit->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(tabDriverKit);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_9 = new QGroupBox(tabDriverKit);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy1);
        groupBox_9->setMinimumSize(QSize(150, 0));
        groupBox_9->setAcceptDrops(true);
        verticalLayout_4 = new QVBoxLayout(groupBox_9);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(groupBox_9);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMinimumSize(QSize(80, 0));

        horizontalLayout_7->addWidget(label_4);

        driverFileEdit = new QLineEdit(groupBox_9);
        driverFileEdit->setObjectName(QString::fromUtf8("driverFileEdit"));

        horizontalLayout_7->addWidget(driverFileEdit);

        browseBtn = new QPushButton(groupBox_9);
        browseBtn->setObjectName(QString::fromUtf8("browseBtn"));

        horizontalLayout_7->addWidget(browseBtn);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_5 = new QLabel(groupBox_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(80, 0));

        horizontalLayout_9->addWidget(label_5);

        serviceEdit = new QLineEdit(groupBox_9);
        serviceEdit->setObjectName(QString::fromUtf8("serviceEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(serviceEdit->sizePolicy().hasHeightForWidth());
        serviceEdit->setSizePolicy(sizePolicy3);
        serviceEdit->setMinimumSize(QSize(150, 0));

        horizontalLayout_9->addWidget(serviceEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        installBtn = new QPushButton(groupBox_9);
        installBtn->setObjectName(QString::fromUtf8("installBtn"));
        sizePolicy3.setHeightForWidth(installBtn->sizePolicy().hasHeightForWidth());
        installBtn->setSizePolicy(sizePolicy3);
        installBtn->setMinimumSize(QSize(100, 0));

        horizontalLayout_9->addWidget(installBtn);

        writeRegBtn = new QPushButton(groupBox_9);
        writeRegBtn->setObjectName(QString::fromUtf8("writeRegBtn"));
        sizePolicy3.setHeightForWidth(writeRegBtn->sizePolicy().hasHeightForWidth());
        writeRegBtn->setSizePolicy(sizePolicy3);
        writeRegBtn->setMinimumSize(QSize(100, 0));

        horizontalLayout_9->addWidget(writeRegBtn);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_6 = new QLabel(groupBox_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(80, 0));

        horizontalLayout_10->addWidget(label_6);

        infoLabel = new QLabel(groupBox_9);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));

        horizontalLayout_10->addWidget(infoLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        uninstallBtn = new QPushButton(groupBox_9);
        uninstallBtn->setObjectName(QString::fromUtf8("uninstallBtn"));
        sizePolicy3.setHeightForWidth(uninstallBtn->sizePolicy().hasHeightForWidth());
        uninstallBtn->setSizePolicy(sizePolicy3);
        uninstallBtn->setMinimumSize(QSize(100, 0));

        horizontalLayout_10->addWidget(uninstallBtn);

        cleanRegBtn = new QPushButton(groupBox_9);
        cleanRegBtn->setObjectName(QString::fromUtf8("cleanRegBtn"));
        sizePolicy3.setHeightForWidth(cleanRegBtn->sizePolicy().hasHeightForWidth());
        cleanRegBtn->setSizePolicy(sizePolicy3);
        cleanRegBtn->setMinimumSize(QSize(100, 0));

        horizontalLayout_10->addWidget(cleanRegBtn);


        verticalLayout_4->addLayout(horizontalLayout_10);


        verticalLayout->addWidget(groupBox_9);

        groupWDF = new QGroupBox(tabDriverKit);
        groupWDF->setObjectName(QString::fromUtf8("groupWDF"));
        groupWDF->setEnabled(true);
        sizePolicy1.setHeightForWidth(groupWDF->sizePolicy().hasHeightForWidth());
        groupWDF->setSizePolicy(sizePolicy1);
        groupWDF->setMinimumSize(QSize(0, 0));
        groupWDF->setAcceptDrops(true);
        groupWDF->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_11 = new QVBoxLayout(groupWDF);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_11 = new QLabel(groupWDF);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setMinimumSize(QSize(0, 0));

        verticalLayout_11->addWidget(label_11);


        verticalLayout->addWidget(groupWDF);

        verticalSpacer_2 = new QSpacerItem(20, 379, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        tabDriver->addTab(tabDriverKit, QString());

        verticalLayout_12->addWidget(tabDriver);

        tabWidget->addTab(tab_4, QString());
        tabNotify = new QWidget();
        tabNotify->setObjectName(QString::fromUtf8("tabNotify"));
        verticalLayout_8 = new QVBoxLayout(tabNotify);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        notifyView = new QTreeView(tabNotify);
        notifyView->setObjectName(QString::fromUtf8("notifyView"));
        QFont font1;
        font1.setPointSize(9);
        notifyView->setFont(font1);
        notifyView->setIndentation(5);

        verticalLayout_8->addWidget(notifyView);

        tabWidget->addTab(tabNotify, QString());
        tabHotkey = new QWidget();
        tabHotkey->setObjectName(QString::fromUtf8("tabHotkey"));
        verticalLayout_3 = new QVBoxLayout(tabHotkey);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        hotkeyView = new QTreeView(tabHotkey);
        hotkeyView->setObjectName(QString::fromUtf8("hotkeyView"));
        hotkeyView->setFont(font1);
        hotkeyView->setIndentation(5);

        verticalLayout_3->addWidget(hotkeyView);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(5, -1, -1, -1);
        label_3 = new QLabel(tabHotkey);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_13->addWidget(label_3);

        hkFilterEdit = new QLineEdit(tabHotkey);
        hkFilterEdit->setObjectName(QString::fromUtf8("hkFilterEdit"));
        hkFilterEdit->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_13->addWidget(hkFilterEdit);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_7);

        label_7 = new QLabel(tabHotkey);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_13->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_13);

        tabWidget->addTab(tabHotkey, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        verticalLayout_5 = new QVBoxLayout(tab_6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tabObject = new QTabWidget(tab_6);
        tabObject->setObjectName(QString::fromUtf8("tabObject"));
        tabObjectTypes = new QWidget();
        tabObjectTypes->setObjectName(QString::fromUtf8("tabObjectTypes"));
        sizePolicy.setHeightForWidth(tabObjectTypes->sizePolicy().hasHeightForWidth());
        tabObjectTypes->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(tabObjectTypes);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        objectTypesView = new QTreeView(tabObjectTypes);
        objectTypesView->setObjectName(QString::fromUtf8("objectTypesView"));
        objectTypesView->setIndentation(5);

        horizontalLayout_2->addWidget(objectTypesView);

        tabObject->addTab(tabObjectTypes, QString());
        tabObjectSections = new QWidget();
        tabObjectSections->setObjectName(QString::fromUtf8("tabObjectSections"));
        sizePolicy.setHeightForWidth(tabObjectSections->sizePolicy().hasHeightForWidth());
        tabObjectSections->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(tabObjectSections);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        objectSectionsView = new QTreeView(tabObjectSections);
        objectSectionsView->setObjectName(QString::fromUtf8("objectSectionsView"));
        objectSectionsView->setIndentation(5);

        verticalLayout_6->addWidget(objectSectionsView);

        tabObject->addTab(tabObjectSections, QString());

        verticalLayout_5->addWidget(tabObject);

        tabWidget->addTab(tab_6, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_10 = new QVBoxLayout(tab_2);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        tabMemory = new QTabWidget(tab_2);
        tabMemory->setObjectName(QString::fromUtf8("tabMemory"));
        tabMemoryView = new QWidget();
        tabMemoryView->setObjectName(QString::fromUtf8("tabMemoryView"));
        sizePolicy.setHeightForWidth(tabMemoryView->sizePolicy().hasHeightForWidth());
        tabMemoryView->setSizePolicy(sizePolicy);
        horizontalLayout_6 = new QHBoxLayout(tabMemoryView);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));

        horizontalLayout_6->addLayout(verticalLayout_7);

        tabMemory->addTab(tabMemoryView, QString());

        verticalLayout_10->addWidget(tabMemory);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_19 = new QVBoxLayout(tab_3);
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        tabStorage = new QTabWidget(tab_3);
        tabStorage->setObjectName(QString::fromUtf8("tabStorage"));
        tabFileUnlock = new QWidget();
        tabFileUnlock->setObjectName(QString::fromUtf8("tabFileUnlock"));
        verticalLayout_15 = new QVBoxLayout(tabFileUnlock);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        unlockView = new QTreeView(tabFileUnlock);
        unlockView->setObjectName(QString::fromUtf8("unlockView"));
        unlockView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        unlockView->setIndentation(5);
        unlockView->header()->setMinimumSectionSize(25);

        verticalLayout_15->addWidget(unlockView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, -1, -1, -1);
        label_2 = new QLabel(tabFileUnlock);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        inputPathEdit = new QLineEdit(tabFileUnlock);
        inputPathEdit->setObjectName(QString::fromUtf8("inputPathEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(inputPathEdit->sizePolicy().hasHeightForWidth());
        inputPathEdit->setSizePolicy(sizePolicy4);
        inputPathEdit->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(inputPathEdit);

        showHoldBtn = new QPushButton(tabFileUnlock);
        showHoldBtn->setObjectName(QString::fromUtf8("showHoldBtn"));

        horizontalLayout->addWidget(showHoldBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        line_2 = new QFrame(tabFileUnlock);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        unlockFileBtn = new QPushButton(tabFileUnlock);
        unlockFileBtn->setObjectName(QString::fromUtf8("unlockFileBtn"));

        horizontalLayout->addWidget(unlockFileBtn);

        unlockFileAllBtn = new QPushButton(tabFileUnlock);
        unlockFileAllBtn->setObjectName(QString::fromUtf8("unlockFileAllBtn"));

        horizontalLayout->addWidget(unlockFileAllBtn);

        killProcessBtn = new QPushButton(tabFileUnlock);
        killProcessBtn->setObjectName(QString::fromUtf8("killProcessBtn"));

        horizontalLayout->addWidget(killProcessBtn);


        verticalLayout_15->addLayout(horizontalLayout);

        tabStorage->addTab(tabFileUnlock, QString());

        verticalLayout_19->addWidget(tabStorage);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_3 = new QHBoxLayout(tab);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        tabNetwork = new QTabWidget(tab);
        tabNetwork->setObjectName(QString::fromUtf8("tabNetwork"));
        tabPort = new QWidget();
        tabPort->setObjectName(QString::fromUtf8("tabPort"));
        verticalLayout_16 = new QVBoxLayout(tabPort);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        portView = new QTreeView(tabPort);
        portView->setObjectName(QString::fromUtf8("portView"));
        portView->setIndentation(5);

        verticalLayout_16->addWidget(portView);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        locaIPv4Btn = new QPushButton(tabPort);
        locaIPv4Btn->setObjectName(QString::fromUtf8("locaIPv4Btn"));

        horizontalLayout_12->addWidget(locaIPv4Btn);

        locaIPv6Btn = new QPushButton(tabPort);
        locaIPv6Btn->setObjectName(QString::fromUtf8("locaIPv6Btn"));

        horizontalLayout_12->addWidget(locaIPv6Btn);

        line_3 = new QFrame(tabPort);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_12->addWidget(line_3);

        label = new QLabel(tabPort);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_12->addWidget(label);

        portFilterEdit = new QLineEdit(tabPort);
        portFilterEdit->setObjectName(QString::fromUtf8("portFilterEdit"));

        horizontalLayout_12->addWidget(portFilterEdit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_6);

        ipv4CheckBox = new QCheckBox(tabPort);
        ipv4CheckBox->setObjectName(QString::fromUtf8("ipv4CheckBox"));

        horizontalLayout_12->addWidget(ipv4CheckBox);

        ipv6CheckBox = new QCheckBox(tabPort);
        ipv6CheckBox->setObjectName(QString::fromUtf8("ipv6CheckBox"));

        horizontalLayout_12->addWidget(ipv6CheckBox);

        line = new QFrame(tabPort);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_12->addWidget(line);

        tcpListenCheckBox = new QCheckBox(tabPort);
        tcpListenCheckBox->setObjectName(QString::fromUtf8("tcpListenCheckBox"));

        horizontalLayout_12->addWidget(tcpListenCheckBox);

        tcpConnCheckBox = new QCheckBox(tabPort);
        tcpConnCheckBox->setObjectName(QString::fromUtf8("tcpConnCheckBox"));

        horizontalLayout_12->addWidget(tcpConnCheckBox);

        udpListenCheckBox = new QCheckBox(tabPort);
        udpListenCheckBox->setObjectName(QString::fromUtf8("udpListenCheckBox"));

        horizontalLayout_12->addWidget(udpListenCheckBox);


        verticalLayout_16->addLayout(horizontalLayout_12);

        tabNetwork->addTab(tabPort, QString());
        tabHosts = new QWidget();
        tabHosts->setObjectName(QString::fromUtf8("tabHosts"));
        verticalLayout_13 = new QVBoxLayout(tabHosts);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        hostsFileListWidget = new QListWidget(tabHosts);
        hostsFileListWidget->setObjectName(QString::fromUtf8("hostsFileListWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(hostsFileListWidget->sizePolicy().hasHeightForWidth());
        hostsFileListWidget->setSizePolicy(sizePolicy5);
        hostsFileListWidget->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_11->addWidget(hostsFileListWidget);

        hostsDataEdit = new QTextEdit(tabHosts);
        hostsDataEdit->setObjectName(QString::fromUtf8("hostsDataEdit"));
        hostsDataEdit->setAcceptRichText(false);

        horizontalLayout_11->addWidget(hostsDataEdit);


        verticalLayout_13->addLayout(horizontalLayout_11);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        hostsDirBtn = new QPushButton(tabHosts);
        hostsDirBtn->setObjectName(QString::fromUtf8("hostsDirBtn"));

        horizontalLayout_5->addWidget(hostsDirBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        hostsSaveBtn = new QPushButton(tabHosts);
        hostsSaveBtn->setObjectName(QString::fromUtf8("hostsSaveBtn"));

        horizontalLayout_5->addWidget(hostsSaveBtn);

        hostsClearBtn = new QPushButton(tabHosts);
        hostsClearBtn->setObjectName(QString::fromUtf8("hostsClearBtn"));

        horizontalLayout_5->addWidget(hostsClearBtn);

        hostsBackupBtn = new QPushButton(tabHosts);
        hostsBackupBtn->setObjectName(QString::fromUtf8("hostsBackupBtn"));

        horizontalLayout_5->addWidget(hostsBackupBtn);

        hostsRefreshBtn = new QPushButton(tabHosts);
        hostsRefreshBtn->setObjectName(QString::fromUtf8("hostsRefreshBtn"));

        horizontalLayout_5->addWidget(hostsRefreshBtn);


        verticalLayout_13->addLayout(horizontalLayout_5);

        tabNetwork->addTab(tabHosts, QString());

        horizontalLayout_3->addWidget(tabNetwork);

        tabWidget->addTab(tab, QString());

        verticalLayout_2->addWidget(tabWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(140, -1, -1, -1);
        kernelModeStatus = new QLabel(Kernel);
        kernelModeStatus->setObjectName(QString::fromUtf8("kernelModeStatus"));

        horizontalLayout_4->addWidget(kernelModeStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        kernelModeBtn = new QPushButton(Kernel);
        kernelModeBtn->setObjectName(QString::fromUtf8("kernelModeBtn"));

        horizontalLayout_4->addWidget(kernelModeBtn);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(Kernel);

        tabWidget->setCurrentIndex(7);
        tabDriver->setCurrentIndex(0);
        tabObject->setCurrentIndex(0);
        tabMemory->setCurrentIndex(0);
        tabStorage->setCurrentIndex(0);
        tabNetwork->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Kernel);
    } // setupUi

    void retranslateUi(QWidget *Kernel)
    {
        Kernel->setWindowTitle(QCoreApplication::translate("Kernel", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabKernelEntry), QCoreApplication::translate("Kernel", "Kernel Entry", nullptr));
        tabDriver->setTabText(tabDriver->indexOf(tabDrivers), QCoreApplication::translate("Kernel", "Drivers", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("Kernel", "NT Driver Installer", nullptr));
        label_4->setText(QCoreApplication::translate("Kernel", "DriverFile:", nullptr));
        browseBtn->setText(QCoreApplication::translate("Kernel", "Browse...", nullptr));
        label_5->setText(QCoreApplication::translate("Kernel", "ServiceName:", nullptr));
        installBtn->setText(QCoreApplication::translate("Kernel", "Install", nullptr));
        writeRegBtn->setText(QCoreApplication::translate("Kernel", "Write Registry", nullptr));
        label_6->setText(QCoreApplication::translate("Kernel", "Information:", nullptr));
        infoLabel->setText(QCoreApplication::translate("Kernel", "You can drag driver file to here...", nullptr));
        uninstallBtn->setText(QCoreApplication::translate("Kernel", "Uninstall", nullptr));
        cleanRegBtn->setText(QCoreApplication::translate("Kernel", "Clean Registry", nullptr));
        groupWDF->setTitle(QCoreApplication::translate("Kernel", "WDF Driver Installer", nullptr));
        label_11->setText(QCoreApplication::translate("Kernel", "Wait for sonn...", nullptr));
        tabDriver->setTabText(tabDriver->indexOf(tabDriverKit), QCoreApplication::translate("Kernel", "DriverKit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Kernel", "Kernel Driver", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabNotify), QCoreApplication::translate("Kernel", "SystemNotify", nullptr));
        label_3->setText(QCoreApplication::translate("Kernel", "Filter:", nullptr));
        label_7->setText(QCoreApplication::translate("Kernel", "<html><head/><body><p><a href=\"https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes\"><span style=\" text-decoration: underline; color:#0000ff;\">Virtual-Key Codes</span></a></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabHotkey), QCoreApplication::translate("Kernel", "System Hotkey", nullptr));
        tabObject->setTabText(tabObject->indexOf(tabObjectTypes), QCoreApplication::translate("Kernel", "ObjectTypes", nullptr));
        tabObject->setTabText(tabObject->indexOf(tabObjectSections), QCoreApplication::translate("Kernel", "ObjectSections", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("Kernel", "Kernel Object", nullptr));
        tabMemory->setTabText(tabMemory->indexOf(tabMemoryView), QCoreApplication::translate("Kernel", "MemoryReadWrite", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Kernel", "Kernel Memory", nullptr));
        label_2->setText(QCoreApplication::translate("Kernel", "Path:", nullptr));
        inputPathEdit->setText(QString());
        showHoldBtn->setText(QCoreApplication::translate("Kernel", "&ShowHold", nullptr));
        unlockFileBtn->setText(QCoreApplication::translate("Kernel", "&Unlock", nullptr));
        unlockFileAllBtn->setText(QCoreApplication::translate("Kernel", "Unlock &All", nullptr));
        killProcessBtn->setText(QCoreApplication::translate("Kernel", "&Kill Process", nullptr));
        tabStorage->setTabText(tabStorage->indexOf(tabFileUnlock), QCoreApplication::translate("Kernel", "FileUnlock", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Kernel", "Kernel Storage", nullptr));
        locaIPv4Btn->setText(QCoreApplication::translate("Kernel", "Local IPV4", nullptr));
        locaIPv6Btn->setText(QCoreApplication::translate("Kernel", "Local IPV6", nullptr));
        label->setText(QCoreApplication::translate("Kernel", "Filter:", nullptr));
        ipv4CheckBox->setText(QCoreApplication::translate("Kernel", "IPV4", nullptr));
        ipv6CheckBox->setText(QCoreApplication::translate("Kernel", "IPV6", nullptr));
        tcpListenCheckBox->setText(QCoreApplication::translate("Kernel", "TCP Listen", nullptr));
        tcpConnCheckBox->setText(QCoreApplication::translate("Kernel", "TCP Connection", nullptr));
        udpListenCheckBox->setText(QCoreApplication::translate("Kernel", "UDP Listen", nullptr));
        tabNetwork->setTabText(tabNetwork->indexOf(tabPort), QCoreApplication::translate("Kernel", "Port", nullptr));
        hostsDirBtn->setText(QCoreApplication::translate("Kernel", "&HostsDirectory", nullptr));
        hostsSaveBtn->setText(QCoreApplication::translate("Kernel", "&Save", nullptr));
        hostsClearBtn->setText(QCoreApplication::translate("Kernel", "&Clear", nullptr));
        hostsBackupBtn->setText(QCoreApplication::translate("Kernel", "&Backup", nullptr));
        hostsRefreshBtn->setText(QCoreApplication::translate("Kernel", "&Refresh", nullptr));
        tabNetwork->setTabText(tabNetwork->indexOf(tabHosts), QCoreApplication::translate("Kernel", "Hosts", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Kernel", "Kernel Network", nullptr));
        kernelModeStatus->setText(QCoreApplication::translate("Kernel", "[KernelMode] not initialized...", nullptr));
        kernelModeBtn->setText(QCoreApplication::translate("Kernel", "Enter KernelMode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kernel: public Ui_Kernel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KERNEL_H
