/********************************************************************************
** Form generated from reading UI file 'reverse.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVERSE_H
#define UI_REVERSE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reverse
{
public:
    QVBoxLayout *verticalLayout_8;
    QTabWidget *tabWidget;
    QWidget *tabWindows;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *windowsBox;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout;
    QPushButton *pchunternewBtn;
    QPushButton *sysinternalsBtn;
    QPushButton *procmonBtn;
    QPushButton *winobjBtn;
    QPushButton *pchunterBtn;
    QPushButton *nirsoftBtn;
    QPushButton *apimonitor64Btn;
    QPushButton *dbgviewBtn;
    QPushButton *procexpBtn;
    QPushButton *windbg32;
    QPushButton *calcfpuBtn;
    QPushButton *x64dbg64;
    QPushButton *ollydbgBtn;
    QPushButton *calcBtn;
    QPushButton *wkeBtn;
    QPushButton *ollyiceBtn;
    QPushButton *reshackerBtn;
    QPushButton *pebearBtn;
    QPushButton *hddogBtn;
    QPushButton *loadtestBtn;
    QPushButton *x64dbg32;
    QPushButton *ida32Btn;
    QPushButton *aida64Btn;
    QPushButton *cffexplorerBtn;
    QPushButton *as_ssdBtn;
    QPushButton *rapideeBtn;
    QPushButton *instdrvBtn;
    QPushButton *dieBtn;
    QPushButton *cheatengineBtn;
    QPushButton *exeinfopeBtn;
    QPushButton *windbg64;
    QPushButton *ida64Btn;
    QPushButton *ghidraBtn;
    QPushButton *dnspyBtn;
    QPushButton *apimonitor32Btn;
    QPushButton *od52pjBtn;
    QPushButton *radareBtn;
    QPushButton *hcdBtn;
    QPushButton *pygtoolsBtn;
    QPushButton *pdbripperBtn;
    QPushButton *editor010Btn;
    QPushButton *windowBtn;
    QPushButton *curlBtn;
    QPushButton *winhexBtn;
    QPushButton *poolmonxBtn;
    QPushButton *vscodeBtn;
    QPushButton *anydeskBtn;
    QPushButton *diskgeniusBtn;
    QPushButton *x7zBtn;
    QPushButton *winrarBtn;
    QPushButton *spyxx32Btn;
    QPushButton *hxdBtn;
    QPushButton *keygenerBtn;
    QPushButton *nmapBtn;
    QPushButton *tcpdumpBtn;
    QPushButton *fiddler2Btn;
    QPushButton *fiddler4Btn;
    QPushButton *charlesBtn;
    QPushButton *wiresharkv1Btn;
    QPushButton *wiresharkv3Btn;
    QPushButton *wiztreeBtn;
    QPushButton *sunloginBtn;
    QPushButton *winspyBtn;
    QPushButton *spyxx64Btn;
    QPushButton *notepad2Btn;
    QPushButton *teamviewerBtn;
    QPushButton *everythingBtn;
    QPushButton *chrome49Btn;
    QPushButton *notepadxxBtn;
    QPushButton *chrome85Btn;
    QPushButton *firefoxBtn;
    QPushButton *cpuzBtn;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QWidget *tabLinux;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *linuxBox;
    QPushButton *cygwin64Btn;
    QPushButton *redistoolBtn;
    QPushButton *puttyBtn;
    QPushButton *ssh_winBtn;
    QPushButton *mobaxtermBtn;
    QPushButton *robo3tBtn;
    QPushButton *sqlitestudioBtn;
    QWidget *tabAndroid;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *androidBox;
    QPushButton *adbBtn;
    QPushButton *gdaBtn;
    QPushButton *jadxBtn;
    QPushButton *apkstudioBtn;
    QPushButton *androidkillerBtn;
    QPushButton *uleb128Btn;
    QPushButton *xelfviewerBtn;
    QPushButton *jebBtn;
    QPushButton *scrcpyBtn;
    QPushButton *aaptBtn;
    QLabel *label;
    QPushButton *jd_guiBtn;
    QPushButton *jdk8Btn;
    QWidget *tabWinDevKits;
    QVBoxLayout *verticalLayout;
    QGroupBox *devkitsBox;
    QPushButton *vc2005x86Btn;
    QPushButton *torgitBtn;
    QPushButton *torsvnBtn;
    QPushButton *gitBtn;
    QPushButton *vc2008x86Btn;
    QPushButton *vc2010x86Btn;
    QPushButton *vc2012x86Btn;
    QPushButton *vc2013x86Btn;
    QPushButton *vc2015x86Btn;
    QPushButton *vc1519x86Btn;
    QPushButton *vc1519x64Btn;
    QPushButton *vc2015x64Btn;
    QPushButton *vc2010x64Btn;
    QPushButton *vc2012x64Btn;
    QPushButton *vc2008x64Btn;
    QPushButton *vc2013x64Btn;
    QPushButton *vc2005x64Btn;
    QPushButton *jdkBtn;
    QPushButton *pythonBtn;
    QPushButton *golangBtn;
    QPushButton *androidstudioBtn;
    QPushButton *visualstudioBtn;
    QPushButton *dotnet4Btn;
    QPushButton *jdk11Btn;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QPushButton *toolsfolderBtn;

    void setupUi(QWidget *Reverse)
    {
        if (Reverse->objectName().isEmpty())
            Reverse->setObjectName(QString::fromUtf8("Reverse"));
        Reverse->resize(1520, 803);
        Reverse->setStyleSheet(QString::fromUtf8("#tabWindows {\n"
"background-color: rgb(240,240,240);\n"
"}\n"
"#tabLinux{\n"
"background-color: rgb(240,240,240);\n"
"}\n"
"#tabAndroid {\n"
"background-color: rgb(240,240,240);\n"
"}\n"
"#tabWinDevKits {\n"
"background-color: rgb(240,240,240);\n"
"}"));
        verticalLayout_8 = new QVBoxLayout(Reverse);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        tabWidget = new QTabWidget(Reverse);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setMovable(true);
        tabWindows = new QWidget();
        tabWindows->setObjectName(QString::fromUtf8("tabWindows"));
        tabWindows->setAutoFillBackground(false);
        verticalLayout_2 = new QVBoxLayout(tabWindows);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        windowsBox = new QGroupBox(tabWindows);
        windowsBox->setObjectName(QString::fromUtf8("windowsBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(windowsBox->sizePolicy().hasHeightForWidth());
        windowsBox->setSizePolicy(sizePolicy);
        windowsBox->setMaximumSize(QSize(16777215, 16777215));
        windowsBox->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_4 = new QHBoxLayout(windowsBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        pchunternewBtn = new QPushButton(windowsBox);
        pchunternewBtn->setObjectName(QString::fromUtf8("pchunternewBtn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/OpenArk/revtools/pchunter.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pchunternewBtn->setIcon(icon);

        gridLayout->addWidget(pchunternewBtn, 9, 0, 1, 1);

        sysinternalsBtn = new QPushButton(windowsBox);
        sysinternalsBtn->setObjectName(QString::fromUtf8("sysinternalsBtn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/OpenArk/revtools/sysinternals.ico"), QSize(), QIcon::Normal, QIcon::Off);
        sysinternalsBtn->setIcon(icon1);

        gridLayout->addWidget(sysinternalsBtn, 7, 0, 1, 1);

        procmonBtn = new QPushButton(windowsBox);
        procmonBtn->setObjectName(QString::fromUtf8("procmonBtn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/OpenArk/revtools/procmon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        procmonBtn->setIcon(icon2);

        gridLayout->addWidget(procmonBtn, 1, 0, 1, 1);

        winobjBtn = new QPushButton(windowsBox);
        winobjBtn->setObjectName(QString::fromUtf8("winobjBtn"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/OpenArk/revtools/winobj.ico"), QSize(), QIcon::Normal, QIcon::Off);
        winobjBtn->setIcon(icon3);

        gridLayout->addWidget(winobjBtn, 2, 0, 1, 1);

        pchunterBtn = new QPushButton(windowsBox);
        pchunterBtn->setObjectName(QString::fromUtf8("pchunterBtn"));
        pchunterBtn->setIcon(icon);

        gridLayout->addWidget(pchunterBtn, 8, 0, 1, 1);

        nirsoftBtn = new QPushButton(windowsBox);
        nirsoftBtn->setObjectName(QString::fromUtf8("nirsoftBtn"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/OpenArk/revtools/nirsoft.ico"), QSize(), QIcon::Normal, QIcon::Off);
        nirsoftBtn->setIcon(icon4);

        gridLayout->addWidget(nirsoftBtn, 4, 0, 1, 1);

        apimonitor64Btn = new QPushButton(windowsBox);
        apimonitor64Btn->setObjectName(QString::fromUtf8("apimonitor64Btn"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/OpenArk/revtools/apimon64.ico"), QSize(), QIcon::Normal, QIcon::Off);
        apimonitor64Btn->setIcon(icon5);

        gridLayout->addWidget(apimonitor64Btn, 6, 0, 1, 1);

        dbgviewBtn = new QPushButton(windowsBox);
        dbgviewBtn->setObjectName(QString::fromUtf8("dbgviewBtn"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/OpenArk/revtools/dbgview.ico"), QSize(), QIcon::Normal, QIcon::Off);
        dbgviewBtn->setIcon(icon6);

        gridLayout->addWidget(dbgviewBtn, 3, 0, 1, 1);

        procexpBtn = new QPushButton(windowsBox);
        procexpBtn->setObjectName(QString::fromUtf8("procexpBtn"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/OpenArk/revtools/procexp.ico"), QSize(), QIcon::Normal, QIcon::Off);
        procexpBtn->setIcon(icon7);

        gridLayout->addWidget(procexpBtn, 0, 0, 1, 1);

        windbg32 = new QPushButton(windowsBox);
        windbg32->setObjectName(QString::fromUtf8("windbg32"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/OpenArk/revtools/windbg.ico"), QSize(), QIcon::Normal, QIcon::Off);
        windbg32->setIcon(icon8);

        gridLayout->addWidget(windbg32, 0, 1, 1, 1);

        calcfpuBtn = new QPushButton(windowsBox);
        calcfpuBtn->setObjectName(QString::fromUtf8("calcfpuBtn"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/OpenArk/revtools/calcfpu.ico"), QSize(), QIcon::Normal, QIcon::Off);
        calcfpuBtn->setIcon(icon9);

        gridLayout->addWidget(calcfpuBtn, 11, 3, 1, 1);

        x64dbg64 = new QPushButton(windowsBox);
        x64dbg64->setObjectName(QString::fromUtf8("x64dbg64"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/OpenArk/revtools/x64dbg.ico"), QSize(), QIcon::Normal, QIcon::Off);
        x64dbg64->setIcon(icon10);

        gridLayout->addWidget(x64dbg64, 3, 1, 1, 1);

        ollydbgBtn = new QPushButton(windowsBox);
        ollydbgBtn->setObjectName(QString::fromUtf8("ollydbgBtn"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/OpenArk/revtools/ollydbg.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ollydbgBtn->setIcon(icon11);

        gridLayout->addWidget(ollydbgBtn, 7, 1, 1, 1);

        calcBtn = new QPushButton(windowsBox);
        calcBtn->setObjectName(QString::fromUtf8("calcBtn"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/OpenArk/revtools/calc.ico"), QSize(), QIcon::Normal, QIcon::Off);
        calcBtn->setIcon(icon12);

        gridLayout->addWidget(calcBtn, 10, 3, 1, 1);

        wkeBtn = new QPushButton(windowsBox);
        wkeBtn->setObjectName(QString::fromUtf8("wkeBtn"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/OpenArk/revtools/wke.ico"), QSize(), QIcon::Normal, QIcon::Off);
        wkeBtn->setIcon(icon13);

        gridLayout->addWidget(wkeBtn, 10, 0, 1, 1);

        ollyiceBtn = new QPushButton(windowsBox);
        ollyiceBtn->setObjectName(QString::fromUtf8("ollyiceBtn"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/OpenArk/revtools/ollyice.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ollyiceBtn->setIcon(icon14);

        gridLayout->addWidget(ollyiceBtn, 8, 1, 1, 1);

        reshackerBtn = new QPushButton(windowsBox);
        reshackerBtn->setObjectName(QString::fromUtf8("reshackerBtn"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/OpenArk/revtools/reshacker.ico"), QSize(), QIcon::Normal, QIcon::Off);
        reshackerBtn->setIcon(icon15);

        gridLayout->addWidget(reshackerBtn, 3, 2, 1, 1);

        pebearBtn = new QPushButton(windowsBox);
        pebearBtn->setObjectName(QString::fromUtf8("pebearBtn"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/OpenArk/revtools/pebear.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pebearBtn->setIcon(icon16);

        gridLayout->addWidget(pebearBtn, 5, 2, 1, 1);

        hddogBtn = new QPushButton(windowsBox);
        hddogBtn->setObjectName(QString::fromUtf8("hddogBtn"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/OpenArk/revtools/hddog.ico"), QSize(), QIcon::Normal, QIcon::Off);
        hddogBtn->setIcon(icon17);

        gridLayout->addWidget(hddogBtn, 10, 6, 1, 1);

        loadtestBtn = new QPushButton(windowsBox);
        loadtestBtn->setObjectName(QString::fromUtf8("loadtestBtn"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/OpenArk/revtools/loadtest.ico"), QSize(), QIcon::Normal, QIcon::Off);
        loadtestBtn->setIcon(icon18);

        gridLayout->addWidget(loadtestBtn, 11, 2, 1, 1);

        x64dbg32 = new QPushButton(windowsBox);
        x64dbg32->setObjectName(QString::fromUtf8("x64dbg32"));
        x64dbg32->setIcon(icon10);

        gridLayout->addWidget(x64dbg32, 2, 1, 1, 1);

        ida32Btn = new QPushButton(windowsBox);
        ida32Btn->setObjectName(QString::fromUtf8("ida32Btn"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/OpenArk/revtools/ida32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ida32Btn->setIcon(icon19);

        gridLayout->addWidget(ida32Btn, 4, 1, 1, 1);

        aida64Btn = new QPushButton(windowsBox);
        aida64Btn->setObjectName(QString::fromUtf8("aida64Btn"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/OpenArk/revtools/aida64.ico"), QSize(), QIcon::Normal, QIcon::Off);
        aida64Btn->setIcon(icon20);

        gridLayout->addWidget(aida64Btn, 11, 6, 1, 1);

        cffexplorerBtn = new QPushButton(windowsBox);
        cffexplorerBtn->setObjectName(QString::fromUtf8("cffexplorerBtn"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/OpenArk/revtools/cffexplorer.ico"), QSize(), QIcon::Normal, QIcon::Off);
        cffexplorerBtn->setIcon(icon21);

        gridLayout->addWidget(cffexplorerBtn, 4, 2, 1, 1);

        as_ssdBtn = new QPushButton(windowsBox);
        as_ssdBtn->setObjectName(QString::fromUtf8("as_ssdBtn"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/OpenArk/revtools/as_ssd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        as_ssdBtn->setIcon(icon22);

        gridLayout->addWidget(as_ssdBtn, 11, 5, 1, 1);

        rapideeBtn = new QPushButton(windowsBox);
        rapideeBtn->setObjectName(QString::fromUtf8("rapideeBtn"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/OpenArk/revtools/rapidee.ico"), QSize(), QIcon::Normal, QIcon::Off);
        rapideeBtn->setIcon(icon23);

        gridLayout->addWidget(rapideeBtn, 10, 5, 1, 1);

        instdrvBtn = new QPushButton(windowsBox);
        instdrvBtn->setObjectName(QString::fromUtf8("instdrvBtn"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/OpenArk/revtools/instdrv.ico"), QSize(), QIcon::Normal, QIcon::Off);
        instdrvBtn->setIcon(icon24);

        gridLayout->addWidget(instdrvBtn, 6, 2, 1, 1);

        dieBtn = new QPushButton(windowsBox);
        dieBtn->setObjectName(QString::fromUtf8("dieBtn"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/OpenArk/revtools/die.ico"), QSize(), QIcon::Normal, QIcon::Off);
        dieBtn->setIcon(icon25);

        gridLayout->addWidget(dieBtn, 0, 2, 1, 1);

        cheatengineBtn = new QPushButton(windowsBox);
        cheatengineBtn->setObjectName(QString::fromUtf8("cheatengineBtn"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/OpenArk/revtools/cheatengine.ico"), QSize(), QIcon::Normal, QIcon::Off);
        cheatengineBtn->setIcon(icon26);

        gridLayout->addWidget(cheatengineBtn, 11, 0, 1, 1);

        exeinfopeBtn = new QPushButton(windowsBox);
        exeinfopeBtn->setObjectName(QString::fromUtf8("exeinfopeBtn"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/OpenArk/revtools/exeinfope.ico"), QSize(), QIcon::Normal, QIcon::Off);
        exeinfopeBtn->setIcon(icon27);

        gridLayout->addWidget(exeinfopeBtn, 1, 2, 1, 1);

        windbg64 = new QPushButton(windowsBox);
        windbg64->setObjectName(QString::fromUtf8("windbg64"));
        windbg64->setIcon(icon8);

        gridLayout->addWidget(windbg64, 1, 1, 1, 1);

        ida64Btn = new QPushButton(windowsBox);
        ida64Btn->setObjectName(QString::fromUtf8("ida64Btn"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/OpenArk/revtools/ida64.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ida64Btn->setIcon(icon28);

        gridLayout->addWidget(ida64Btn, 5, 1, 1, 1);

        ghidraBtn = new QPushButton(windowsBox);
        ghidraBtn->setObjectName(QString::fromUtf8("ghidraBtn"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/OpenArk/revtools/ghidra.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ghidraBtn->setIcon(icon29);

        gridLayout->addWidget(ghidraBtn, 6, 1, 1, 1);

        dnspyBtn = new QPushButton(windowsBox);
        dnspyBtn->setObjectName(QString::fromUtf8("dnspyBtn"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/OpenArk/revtools/dnspy.ico"), QSize(), QIcon::Normal, QIcon::Off);
        dnspyBtn->setIcon(icon30);

        gridLayout->addWidget(dnspyBtn, 11, 1, 1, 1);

        apimonitor32Btn = new QPushButton(windowsBox);
        apimonitor32Btn->setObjectName(QString::fromUtf8("apimonitor32Btn"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/OpenArk/revtools/apimon32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        apimonitor32Btn->setIcon(icon31);

        gridLayout->addWidget(apimonitor32Btn, 5, 0, 1, 1);

        od52pjBtn = new QPushButton(windowsBox);
        od52pjBtn->setObjectName(QString::fromUtf8("od52pjBtn"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/OpenArk/revtools/od52pj.ico"), QSize(), QIcon::Normal, QIcon::Off);
        od52pjBtn->setIcon(icon32);

        gridLayout->addWidget(od52pjBtn, 9, 1, 1, 1);

        radareBtn = new QPushButton(windowsBox);
        radareBtn->setObjectName(QString::fromUtf8("radareBtn"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/OpenArk/revtools/default.ico"), QSize(), QIcon::Normal, QIcon::Off);
        radareBtn->setIcon(icon33);

        gridLayout->addWidget(radareBtn, 10, 1, 1, 1);

        hcdBtn = new QPushButton(windowsBox);
        hcdBtn->setObjectName(QString::fromUtf8("hcdBtn"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/OpenArk/revtools/hcd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        hcdBtn->setIcon(icon34);

        gridLayout->addWidget(hcdBtn, 2, 2, 1, 1);

        pygtoolsBtn = new QPushButton(windowsBox);
        pygtoolsBtn->setObjectName(QString::fromUtf8("pygtoolsBtn"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/OpenArk/revtools/pygtools.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pygtoolsBtn->setIcon(icon35);

        gridLayout->addWidget(pygtoolsBtn, 7, 2, 1, 1);

        pdbripperBtn = new QPushButton(windowsBox);
        pdbripperBtn->setObjectName(QString::fromUtf8("pdbripperBtn"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/OpenArk/revtools/pdbripper.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pdbripperBtn->setIcon(icon36);

        gridLayout->addWidget(pdbripperBtn, 10, 2, 1, 1);

        editor010Btn = new QPushButton(windowsBox);
        editor010Btn->setObjectName(QString::fromUtf8("editor010Btn"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/OpenArk/revtools/editor010.ico"), QSize(), QIcon::Normal, QIcon::Off);
        editor010Btn->setIcon(icon37);

        gridLayout->addWidget(editor010Btn, 2, 3, 1, 1);

        windowBtn = new QPushButton(windowsBox);
        windowBtn->setObjectName(QString::fromUtf8("windowBtn"));
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/OpenArk/revtools/window.ico"), QSize(), QIcon::Normal, QIcon::Off);
        windowBtn->setIcon(icon38);

        gridLayout->addWidget(windowBtn, 7, 3, 1, 1);

        curlBtn = new QPushButton(windowsBox);
        curlBtn->setObjectName(QString::fromUtf8("curlBtn"));
        curlBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/OpenArk/revtools/curl.ico"), QSize(), QIcon::Normal, QIcon::Off);
        curlBtn->setIcon(icon39);

        gridLayout->addWidget(curlBtn, 1, 5, 1, 1);

        winhexBtn = new QPushButton(windowsBox);
        winhexBtn->setObjectName(QString::fromUtf8("winhexBtn"));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/OpenArk/revtools/winhex.ico"), QSize(), QIcon::Normal, QIcon::Off);
        winhexBtn->setIcon(icon40);

        gridLayout->addWidget(winhexBtn, 1, 3, 1, 1);

        poolmonxBtn = new QPushButton(windowsBox);
        poolmonxBtn->setObjectName(QString::fromUtf8("poolmonxBtn"));
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/OpenArk/revtools/poolmonx.ico"), QSize(), QIcon::Normal, QIcon::Off);
        poolmonxBtn->setIcon(icon41);

        gridLayout->addWidget(poolmonxBtn, 9, 2, 1, 1);

        vscodeBtn = new QPushButton(windowsBox);
        vscodeBtn->setObjectName(QString::fromUtf8("vscodeBtn"));
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/OpenArk/revtools/vscode.ico"), QSize(), QIcon::Normal, QIcon::Off);
        vscodeBtn->setIcon(icon42);

        gridLayout->addWidget(vscodeBtn, 5, 3, 1, 1);

        anydeskBtn = new QPushButton(windowsBox);
        anydeskBtn->setObjectName(QString::fromUtf8("anydeskBtn"));
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/OpenArk/revtools/anydesk.ico"), QSize(), QIcon::Normal, QIcon::Off);
        anydeskBtn->setIcon(icon43);

        gridLayout->addWidget(anydeskBtn, 1, 6, 1, 1);

        diskgeniusBtn = new QPushButton(windowsBox);
        diskgeniusBtn->setObjectName(QString::fromUtf8("diskgeniusBtn"));
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/OpenArk/revtools/diskgenius.ico"), QSize(), QIcon::Normal, QIcon::Off);
        diskgeniusBtn->setIcon(icon44);

        gridLayout->addWidget(diskgeniusBtn, 0, 5, 1, 1);

        x7zBtn = new QPushButton(windowsBox);
        x7zBtn->setObjectName(QString::fromUtf8("x7zBtn"));
        QIcon icon45;
        icon45.addFile(QString::fromUtf8(":/OpenArk/revtools/7z.ico"), QSize(), QIcon::Normal, QIcon::Off);
        x7zBtn->setIcon(icon45);

        gridLayout->addWidget(x7zBtn, 4, 6, 1, 1);

        winrarBtn = new QPushButton(windowsBox);
        winrarBtn->setObjectName(QString::fromUtf8("winrarBtn"));
        QIcon icon46;
        icon46.addFile(QString::fromUtf8(":/OpenArk/revtools/winrar.ico"), QSize(), QIcon::Normal, QIcon::Off);
        winrarBtn->setIcon(icon46);

        gridLayout->addWidget(winrarBtn, 5, 6, 1, 1);

        spyxx32Btn = new QPushButton(windowsBox);
        spyxx32Btn->setObjectName(QString::fromUtf8("spyxx32Btn"));
        QIcon icon47;
        icon47.addFile(QString::fromUtf8(":/OpenArk/revtools/spyxx.ico"), QSize(), QIcon::Normal, QIcon::Off);
        spyxx32Btn->setIcon(icon47);

        gridLayout->addWidget(spyxx32Btn, 8, 3, 1, 1);

        hxdBtn = new QPushButton(windowsBox);
        hxdBtn->setObjectName(QString::fromUtf8("hxdBtn"));
        QIcon icon48;
        icon48.addFile(QString::fromUtf8(":/OpenArk/revtools/hxd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        hxdBtn->setIcon(icon48);

        gridLayout->addWidget(hxdBtn, 0, 3, 1, 1);

        keygenerBtn = new QPushButton(windowsBox);
        keygenerBtn->setObjectName(QString::fromUtf8("keygenerBtn"));
        QIcon icon49;
        icon49.addFile(QString::fromUtf8(":/OpenArk/revtools/keygener.ico"), QSize(), QIcon::Normal, QIcon::Off);
        keygenerBtn->setIcon(icon49);

        gridLayout->addWidget(keygenerBtn, 8, 2, 1, 1);

        nmapBtn = new QPushButton(windowsBox);
        nmapBtn->setObjectName(QString::fromUtf8("nmapBtn"));
        nmapBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        QIcon icon50;
        icon50.addFile(QString::fromUtf8(":/OpenArk/revtools/nmap.ico"), QSize(), QIcon::Normal, QIcon::Off);
        nmapBtn->setIcon(icon50);

        gridLayout->addWidget(nmapBtn, 2, 5, 1, 1);

        tcpdumpBtn = new QPushButton(windowsBox);
        tcpdumpBtn->setObjectName(QString::fromUtf8("tcpdumpBtn"));
        tcpdumpBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        tcpdumpBtn->setIcon(icon33);

        gridLayout->addWidget(tcpdumpBtn, 3, 5, 1, 1);

        fiddler2Btn = new QPushButton(windowsBox);
        fiddler2Btn->setObjectName(QString::fromUtf8("fiddler2Btn"));
        QIcon icon51;
        icon51.addFile(QString::fromUtf8(":/OpenArk/revtools/fiddler.ico"), QSize(), QIcon::Normal, QIcon::Off);
        fiddler2Btn->setIcon(icon51);

        gridLayout->addWidget(fiddler2Btn, 4, 5, 1, 1);

        fiddler4Btn = new QPushButton(windowsBox);
        fiddler4Btn->setObjectName(QString::fromUtf8("fiddler4Btn"));
        fiddler4Btn->setIcon(icon51);

        gridLayout->addWidget(fiddler4Btn, 5, 5, 1, 1);

        charlesBtn = new QPushButton(windowsBox);
        charlesBtn->setObjectName(QString::fromUtf8("charlesBtn"));
        QIcon icon52;
        icon52.addFile(QString::fromUtf8(":/OpenArk/revtools/charles.ico"), QSize(), QIcon::Normal, QIcon::Off);
        charlesBtn->setIcon(icon52);

        gridLayout->addWidget(charlesBtn, 6, 5, 1, 1);

        wiresharkv1Btn = new QPushButton(windowsBox);
        wiresharkv1Btn->setObjectName(QString::fromUtf8("wiresharkv1Btn"));
        QIcon icon53;
        icon53.addFile(QString::fromUtf8(":/OpenArk/revtools/wireshark.ico"), QSize(), QIcon::Normal, QIcon::Off);
        wiresharkv1Btn->setIcon(icon53);

        gridLayout->addWidget(wiresharkv1Btn, 7, 5, 1, 1);

        wiresharkv3Btn = new QPushButton(windowsBox);
        wiresharkv3Btn->setObjectName(QString::fromUtf8("wiresharkv3Btn"));
        wiresharkv3Btn->setIcon(icon53);

        gridLayout->addWidget(wiresharkv3Btn, 8, 5, 1, 1);

        wiztreeBtn = new QPushButton(windowsBox);
        wiztreeBtn->setObjectName(QString::fromUtf8("wiztreeBtn"));
        QIcon icon54;
        icon54.addFile(QString::fromUtf8(":/OpenArk/revtools/wiztree.ico"), QSize(), QIcon::Normal, QIcon::Off);
        wiztreeBtn->setIcon(icon54);

        gridLayout->addWidget(wiztreeBtn, 9, 5, 1, 1);

        sunloginBtn = new QPushButton(windowsBox);
        sunloginBtn->setObjectName(QString::fromUtf8("sunloginBtn"));
        QIcon icon55;
        icon55.addFile(QString::fromUtf8(":/OpenArk/revtools/sunlogin.ico"), QSize(), QIcon::Normal, QIcon::Off);
        sunloginBtn->setIcon(icon55);

        gridLayout->addWidget(sunloginBtn, 0, 6, 1, 1);

        winspyBtn = new QPushButton(windowsBox);
        winspyBtn->setObjectName(QString::fromUtf8("winspyBtn"));
        QIcon icon56;
        icon56.addFile(QString::fromUtf8(":/OpenArk/revtools/winspy.ico"), QSize(), QIcon::Normal, QIcon::Off);
        winspyBtn->setIcon(icon56);

        gridLayout->addWidget(winspyBtn, 6, 3, 1, 1);

        spyxx64Btn = new QPushButton(windowsBox);
        spyxx64Btn->setObjectName(QString::fromUtf8("spyxx64Btn"));
        spyxx64Btn->setIcon(icon47);

        gridLayout->addWidget(spyxx64Btn, 9, 3, 1, 1);

        notepad2Btn = new QPushButton(windowsBox);
        notepad2Btn->setObjectName(QString::fromUtf8("notepad2Btn"));
        QIcon icon57;
        icon57.addFile(QString::fromUtf8(":/OpenArk/revtools/notepad2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        notepad2Btn->setIcon(icon57);

        gridLayout->addWidget(notepad2Btn, 4, 3, 1, 1);

        teamviewerBtn = new QPushButton(windowsBox);
        teamviewerBtn->setObjectName(QString::fromUtf8("teamviewerBtn"));
        QIcon icon58;
        icon58.addFile(QString::fromUtf8(":/OpenArk/revtools/teamviewer.ico"), QSize(), QIcon::Normal, QIcon::Off);
        teamviewerBtn->setIcon(icon58);

        gridLayout->addWidget(teamviewerBtn, 2, 6, 1, 1);

        everythingBtn = new QPushButton(windowsBox);
        everythingBtn->setObjectName(QString::fromUtf8("everythingBtn"));
        QIcon icon59;
        icon59.addFile(QString::fromUtf8(":/OpenArk/revtools/everything.ico"), QSize(), QIcon::Normal, QIcon::Off);
        everythingBtn->setIcon(icon59);

        gridLayout->addWidget(everythingBtn, 3, 6, 1, 1);

        chrome49Btn = new QPushButton(windowsBox);
        chrome49Btn->setObjectName(QString::fromUtf8("chrome49Btn"));
        QIcon icon60;
        icon60.addFile(QString::fromUtf8(":/OpenArk/revtools/chrome.ico"), QSize(), QIcon::Normal, QIcon::Off);
        chrome49Btn->setIcon(icon60);

        gridLayout->addWidget(chrome49Btn, 6, 6, 1, 1);

        notepadxxBtn = new QPushButton(windowsBox);
        notepadxxBtn->setObjectName(QString::fromUtf8("notepadxxBtn"));
        QIcon icon61;
        icon61.addFile(QString::fromUtf8(":/OpenArk/revtools/notepadxx.ico"), QSize(), QIcon::Normal, QIcon::Off);
        notepadxxBtn->setIcon(icon61);

        gridLayout->addWidget(notepadxxBtn, 3, 3, 1, 1);

        chrome85Btn = new QPushButton(windowsBox);
        chrome85Btn->setObjectName(QString::fromUtf8("chrome85Btn"));
        QIcon icon62;
        icon62.addFile(QString::fromUtf8(":/OpenArk/revtools/chromesetup.ico"), QSize(), QIcon::Normal, QIcon::Off);
        chrome85Btn->setIcon(icon62);

        gridLayout->addWidget(chrome85Btn, 7, 6, 1, 1);

        firefoxBtn = new QPushButton(windowsBox);
        firefoxBtn->setObjectName(QString::fromUtf8("firefoxBtn"));
        QIcon icon63;
        icon63.addFile(QString::fromUtf8(":/OpenArk/revtools/firefox.ico"), QSize(), QIcon::Normal, QIcon::Off);
        firefoxBtn->setIcon(icon63);

        gridLayout->addWidget(firefoxBtn, 8, 6, 1, 1);

        cpuzBtn = new QPushButton(windowsBox);
        cpuzBtn->setObjectName(QString::fromUtf8("cpuzBtn"));
        QIcon icon64;
        icon64.addFile(QString::fromUtf8(":/OpenArk/revtools/cpuz.ico"), QSize(), QIcon::Normal, QIcon::Off);
        cpuzBtn->setIcon(icon64);

        gridLayout->addWidget(cpuzBtn, 9, 6, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 12, 5, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(868, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(windowsBox);


        verticalLayout_2->addLayout(verticalLayout_3);

        tabWidget->addTab(tabWindows, QString());
        tabLinux = new QWidget();
        tabLinux->setObjectName(QString::fromUtf8("tabLinux"));
        horizontalLayout_3 = new QHBoxLayout(tabLinux);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        linuxBox = new QGroupBox(tabLinux);
        linuxBox->setObjectName(QString::fromUtf8("linuxBox"));
        sizePolicy.setHeightForWidth(linuxBox->sizePolicy().hasHeightForWidth());
        linuxBox->setSizePolicy(sizePolicy);
        linuxBox->setMaximumSize(QSize(16777215, 16777215));
        cygwin64Btn = new QPushButton(linuxBox);
        cygwin64Btn->setObjectName(QString::fromUtf8("cygwin64Btn"));
        cygwin64Btn->setGeometry(QRect(10, 10, 101, 24));
        cygwin64Btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon65;
        icon65.addFile(QString::fromUtf8(":/OpenArk/revtools/cygwin64.ico"), QSize(), QIcon::Normal, QIcon::Off);
        cygwin64Btn->setIcon(icon65);
        redistoolBtn = new QPushButton(linuxBox);
        redistoolBtn->setObjectName(QString::fromUtf8("redistoolBtn"));
        redistoolBtn->setGeometry(QRect(120, 40, 101, 24));
        redistoolBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        QIcon icon66;
        icon66.addFile(QString::fromUtf8(":/OpenArk/revtools/redistool.ico"), QSize(), QIcon::Normal, QIcon::Off);
        redistoolBtn->setIcon(icon66);
        puttyBtn = new QPushButton(linuxBox);
        puttyBtn->setObjectName(QString::fromUtf8("puttyBtn"));
        puttyBtn->setGeometry(QRect(10, 70, 101, 24));
        puttyBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        QIcon icon67;
        icon67.addFile(QString::fromUtf8(":/OpenArk/revtools/putty.ico"), QSize(), QIcon::Normal, QIcon::Off);
        puttyBtn->setIcon(icon67);
        ssh_winBtn = new QPushButton(linuxBox);
        ssh_winBtn->setObjectName(QString::fromUtf8("ssh_winBtn"));
        ssh_winBtn->setGeometry(QRect(10, 100, 101, 24));
        ssh_winBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        ssh_winBtn->setIcon(icon33);
        mobaxtermBtn = new QPushButton(linuxBox);
        mobaxtermBtn->setObjectName(QString::fromUtf8("mobaxtermBtn"));
        mobaxtermBtn->setGeometry(QRect(10, 40, 101, 24));
        mobaxtermBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        QIcon icon68;
        icon68.addFile(QString::fromUtf8(":/OpenArk/revtools/mobaxterm.ico"), QSize(), QIcon::Normal, QIcon::Off);
        mobaxtermBtn->setIcon(icon68);
        robo3tBtn = new QPushButton(linuxBox);
        robo3tBtn->setObjectName(QString::fromUtf8("robo3tBtn"));
        robo3tBtn->setGeometry(QRect(120, 10, 101, 24));
        robo3tBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        QIcon icon69;
        icon69.addFile(QString::fromUtf8(":/OpenArk/revtools/robo3t.ico"), QSize(), QIcon::Normal, QIcon::Off);
        robo3tBtn->setIcon(icon69);
        sqlitestudioBtn = new QPushButton(linuxBox);
        sqlitestudioBtn->setObjectName(QString::fromUtf8("sqlitestudioBtn"));
        sqlitestudioBtn->setGeometry(QRect(120, 70, 101, 24));
        sqlitestudioBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        QIcon icon70;
        icon70.addFile(QString::fromUtf8(":/OpenArk/revtools/sqlitestudio.ico"), QSize(), QIcon::Normal, QIcon::Off);
        sqlitestudioBtn->setIcon(icon70);

        horizontalLayout_3->addWidget(linuxBox);

        tabWidget->addTab(tabLinux, QString());
        tabAndroid = new QWidget();
        tabAndroid->setObjectName(QString::fromUtf8("tabAndroid"));
        horizontalLayout_2 = new QHBoxLayout(tabAndroid);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        androidBox = new QGroupBox(tabAndroid);
        androidBox->setObjectName(QString::fromUtf8("androidBox"));
        sizePolicy.setHeightForWidth(androidBox->sizePolicy().hasHeightForWidth());
        androidBox->setSizePolicy(sizePolicy);
        androidBox->setMaximumSize(QSize(16777215, 16777215));
        adbBtn = new QPushButton(androidBox);
        adbBtn->setObjectName(QString::fromUtf8("adbBtn"));
        adbBtn->setGeometry(QRect(10, 10, 91, 24));
        adbBtn->setStyleSheet(QString::fromUtf8(""));
        adbBtn->setIcon(icon33);
        gdaBtn = new QPushButton(androidBox);
        gdaBtn->setObjectName(QString::fromUtf8("gdaBtn"));
        gdaBtn->setGeometry(QRect(10, 130, 91, 24));
        gdaBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        QIcon icon71;
        icon71.addFile(QString::fromUtf8(":/OpenArk/revtools/gda.ico"), QSize(), QIcon::Normal, QIcon::Off);
        gdaBtn->setIcon(icon71);
        jadxBtn = new QPushButton(androidBox);
        jadxBtn->setObjectName(QString::fromUtf8("jadxBtn"));
        jadxBtn->setGeometry(QRect(10, 70, 91, 24));
        jadxBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon72;
        icon72.addFile(QString::fromUtf8(":/OpenArk/revtools/jadx.ico"), QSize(), QIcon::Normal, QIcon::Off);
        jadxBtn->setIcon(icon72);
        apkstudioBtn = new QPushButton(androidBox);
        apkstudioBtn->setObjectName(QString::fromUtf8("apkstudioBtn"));
        apkstudioBtn->setGeometry(QRect(110, 100, 111, 24));
        apkstudioBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        QIcon icon73;
        icon73.addFile(QString::fromUtf8(":/OpenArk/revtools/apkstudio.ico"), QSize(), QIcon::Normal, QIcon::Off);
        apkstudioBtn->setIcon(icon73);
        androidkillerBtn = new QPushButton(androidBox);
        androidkillerBtn->setObjectName(QString::fromUtf8("androidkillerBtn"));
        androidkillerBtn->setGeometry(QRect(110, 130, 111, 24));
        androidkillerBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        QIcon icon74;
        icon74.addFile(QString::fromUtf8(":/OpenArk/revtools/androidkiller.ico"), QSize(), QIcon::Normal, QIcon::Off);
        androidkillerBtn->setIcon(icon74);
        uleb128Btn = new QPushButton(androidBox);
        uleb128Btn->setObjectName(QString::fromUtf8("uleb128Btn"));
        uleb128Btn->setGeometry(QRect(110, 70, 111, 24));
        uleb128Btn->setStyleSheet(QString::fromUtf8("text-align:"));
        QIcon icon75;
        icon75.addFile(QString::fromUtf8(":/OpenArk/revtools/uleb128.ico"), QSize(), QIcon::Normal, QIcon::Off);
        uleb128Btn->setIcon(icon75);
        xelfviewerBtn = new QPushButton(androidBox);
        xelfviewerBtn->setObjectName(QString::fromUtf8("xelfviewerBtn"));
        xelfviewerBtn->setGeometry(QRect(110, 40, 111, 24));
        xelfviewerBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        QIcon icon76;
        icon76.addFile(QString::fromUtf8(":/OpenArk/revtools/xelfviewer.ico"), QSize(), QIcon::Normal, QIcon::Off);
        xelfviewerBtn->setIcon(icon76);
        jebBtn = new QPushButton(androidBox);
        jebBtn->setObjectName(QString::fromUtf8("jebBtn"));
        jebBtn->setGeometry(QRect(10, 100, 91, 24));
        jebBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        jebBtn->setIcon(icon50);
        scrcpyBtn = new QPushButton(androidBox);
        scrcpyBtn->setObjectName(QString::fromUtf8("scrcpyBtn"));
        scrcpyBtn->setGeometry(QRect(110, 10, 111, 24));
        scrcpyBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        scrcpyBtn->setIcon(icon33);
        aaptBtn = new QPushButton(androidBox);
        aaptBtn->setObjectName(QString::fromUtf8("aaptBtn"));
        aaptBtn->setGeometry(QRect(10, 40, 91, 24));
        aaptBtn->setStyleSheet(QString::fromUtf8(""));
        aaptBtn->setIcon(icon33);
        label = new QLabel(androidBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 190, 361, 16));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        jd_guiBtn = new QPushButton(androidBox);
        jd_guiBtn->setObjectName(QString::fromUtf8("jd_guiBtn"));
        jd_guiBtn->setGeometry(QRect(10, 160, 91, 24));
        jd_guiBtn->setStyleSheet(QString::fromUtf8("text-align:"));
        QIcon icon77;
        icon77.addFile(QString::fromUtf8(":/OpenArk/revtools/jdgui.ico"), QSize(), QIcon::Normal, QIcon::Off);
        jd_guiBtn->setIcon(icon77);
        jdk8Btn = new QPushButton(androidBox);
        jdk8Btn->setObjectName(QString::fromUtf8("jdk8Btn"));
        jdk8Btn->setGeometry(QRect(110, 160, 111, 23));
        QIcon icon78;
        icon78.addFile(QString::fromUtf8(":/OpenArk/devkits/jdk.ico"), QSize(), QIcon::Normal, QIcon::Off);
        jdk8Btn->setIcon(icon78);

        horizontalLayout_2->addWidget(androidBox);

        tabWidget->addTab(tabAndroid, QString());
        tabWinDevKits = new QWidget();
        tabWinDevKits->setObjectName(QString::fromUtf8("tabWinDevKits"));
        verticalLayout = new QVBoxLayout(tabWinDevKits);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        devkitsBox = new QGroupBox(tabWinDevKits);
        devkitsBox->setObjectName(QString::fromUtf8("devkitsBox"));
        sizePolicy.setHeightForWidth(devkitsBox->sizePolicy().hasHeightForWidth());
        devkitsBox->setSizePolicy(sizePolicy);
        devkitsBox->setMaximumSize(QSize(16777215, 16777215));
        vc2005x86Btn = new QPushButton(devkitsBox);
        vc2005x86Btn->setObjectName(QString::fromUtf8("vc2005x86Btn"));
        vc2005x86Btn->setGeometry(QRect(240, 190, 131, 23));
        QIcon icon79;
        icon79.addFile(QString::fromUtf8(":/OpenArk/devkits/vcredist.ico"), QSize(), QIcon::Normal, QIcon::Off);
        vc2005x86Btn->setIcon(icon79);
        torgitBtn = new QPushButton(devkitsBox);
        torgitBtn->setObjectName(QString::fromUtf8("torgitBtn"));
        torgitBtn->setGeometry(QRect(120, 100, 111, 23));
        QIcon icon80;
        icon80.addFile(QString::fromUtf8(":/OpenArk/devkits/tortoisegit.ico"), QSize(), QIcon::Normal, QIcon::Off);
        torgitBtn->setIcon(icon80);
        torsvnBtn = new QPushButton(devkitsBox);
        torsvnBtn->setObjectName(QString::fromUtf8("torsvnBtn"));
        torsvnBtn->setGeometry(QRect(120, 130, 111, 23));
        QIcon icon81;
        icon81.addFile(QString::fromUtf8(":/OpenArk/devkits/tortoisesvn.ico"), QSize(), QIcon::Normal, QIcon::Off);
        torsvnBtn->setIcon(icon81);
        gitBtn = new QPushButton(devkitsBox);
        gitBtn->setObjectName(QString::fromUtf8("gitBtn"));
        gitBtn->setGeometry(QRect(120, 70, 111, 23));
        QIcon icon82;
        icon82.addFile(QString::fromUtf8(":/OpenArk/devkits/git.ico"), QSize(), QIcon::Normal, QIcon::Off);
        gitBtn->setIcon(icon82);
        vc2008x86Btn = new QPushButton(devkitsBox);
        vc2008x86Btn->setObjectName(QString::fromUtf8("vc2008x86Btn"));
        vc2008x86Btn->setGeometry(QRect(240, 160, 131, 23));
        vc2008x86Btn->setIcon(icon79);
        vc2010x86Btn = new QPushButton(devkitsBox);
        vc2010x86Btn->setObjectName(QString::fromUtf8("vc2010x86Btn"));
        vc2010x86Btn->setGeometry(QRect(240, 130, 131, 23));
        vc2010x86Btn->setIcon(icon79);
        vc2012x86Btn = new QPushButton(devkitsBox);
        vc2012x86Btn->setObjectName(QString::fromUtf8("vc2012x86Btn"));
        vc2012x86Btn->setGeometry(QRect(240, 100, 131, 23));
        vc2012x86Btn->setIcon(icon79);
        vc2013x86Btn = new QPushButton(devkitsBox);
        vc2013x86Btn->setObjectName(QString::fromUtf8("vc2013x86Btn"));
        vc2013x86Btn->setGeometry(QRect(240, 70, 131, 23));
        vc2013x86Btn->setIcon(icon79);
        vc2015x86Btn = new QPushButton(devkitsBox);
        vc2015x86Btn->setObjectName(QString::fromUtf8("vc2015x86Btn"));
        vc2015x86Btn->setGeometry(QRect(240, 40, 131, 23));
        vc2015x86Btn->setIcon(icon79);
        vc1519x86Btn = new QPushButton(devkitsBox);
        vc1519x86Btn->setObjectName(QString::fromUtf8("vc1519x86Btn"));
        vc1519x86Btn->setGeometry(QRect(240, 10, 131, 23));
        vc1519x86Btn->setIcon(icon79);
        vc1519x64Btn = new QPushButton(devkitsBox);
        vc1519x64Btn->setObjectName(QString::fromUtf8("vc1519x64Btn"));
        vc1519x64Btn->setGeometry(QRect(380, 10, 131, 23));
        vc1519x64Btn->setIcon(icon79);
        vc2015x64Btn = new QPushButton(devkitsBox);
        vc2015x64Btn->setObjectName(QString::fromUtf8("vc2015x64Btn"));
        vc2015x64Btn->setGeometry(QRect(380, 40, 131, 23));
        vc2015x64Btn->setIcon(icon79);
        vc2010x64Btn = new QPushButton(devkitsBox);
        vc2010x64Btn->setObjectName(QString::fromUtf8("vc2010x64Btn"));
        vc2010x64Btn->setGeometry(QRect(380, 130, 131, 23));
        vc2010x64Btn->setIcon(icon79);
        vc2012x64Btn = new QPushButton(devkitsBox);
        vc2012x64Btn->setObjectName(QString::fromUtf8("vc2012x64Btn"));
        vc2012x64Btn->setGeometry(QRect(380, 100, 131, 23));
        vc2012x64Btn->setIcon(icon79);
        vc2008x64Btn = new QPushButton(devkitsBox);
        vc2008x64Btn->setObjectName(QString::fromUtf8("vc2008x64Btn"));
        vc2008x64Btn->setGeometry(QRect(380, 160, 131, 23));
        vc2008x64Btn->setIcon(icon79);
        vc2013x64Btn = new QPushButton(devkitsBox);
        vc2013x64Btn->setObjectName(QString::fromUtf8("vc2013x64Btn"));
        vc2013x64Btn->setGeometry(QRect(380, 70, 131, 23));
        vc2013x64Btn->setIcon(icon79);
        vc2005x64Btn = new QPushButton(devkitsBox);
        vc2005x64Btn->setObjectName(QString::fromUtf8("vc2005x64Btn"));
        vc2005x64Btn->setGeometry(QRect(380, 190, 131, 23));
        vc2005x64Btn->setIcon(icon79);
        jdkBtn = new QPushButton(devkitsBox);
        jdkBtn->setObjectName(QString::fromUtf8("jdkBtn"));
        jdkBtn->setGeometry(QRect(10, 10, 101, 23));
        jdkBtn->setIcon(icon78);
        pythonBtn = new QPushButton(devkitsBox);
        pythonBtn->setObjectName(QString::fromUtf8("pythonBtn"));
        pythonBtn->setGeometry(QRect(10, 70, 101, 23));
        QIcon icon83;
        icon83.addFile(QString::fromUtf8(":/OpenArk/devkits/python.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pythonBtn->setIcon(icon83);
        golangBtn = new QPushButton(devkitsBox);
        golangBtn->setObjectName(QString::fromUtf8("golangBtn"));
        golangBtn->setGeometry(QRect(10, 100, 101, 23));
        QIcon icon84;
        icon84.addFile(QString::fromUtf8(":/OpenArk/devkits/golang.ico"), QSize(), QIcon::Normal, QIcon::Off);
        golangBtn->setIcon(icon84);
        androidstudioBtn = new QPushButton(devkitsBox);
        androidstudioBtn->setObjectName(QString::fromUtf8("androidstudioBtn"));
        androidstudioBtn->setGeometry(QRect(120, 40, 111, 23));
        QIcon icon85;
        icon85.addFile(QString::fromUtf8(":/OpenArk/devkits/androidstudio.ico"), QSize(), QIcon::Normal, QIcon::Off);
        androidstudioBtn->setIcon(icon85);
        visualstudioBtn = new QPushButton(devkitsBox);
        visualstudioBtn->setObjectName(QString::fromUtf8("visualstudioBtn"));
        visualstudioBtn->setGeometry(QRect(120, 10, 111, 23));
        QIcon icon86;
        icon86.addFile(QString::fromUtf8(":/OpenArk/devkits/vs.ico"), QSize(), QIcon::Normal, QIcon::Off);
        visualstudioBtn->setIcon(icon86);
        dotnet4Btn = new QPushButton(devkitsBox);
        dotnet4Btn->setObjectName(QString::fromUtf8("dotnet4Btn"));
        dotnet4Btn->setGeometry(QRect(520, 10, 141, 23));
        dotnet4Btn->setIcon(icon79);
        jdk11Btn = new QPushButton(devkitsBox);
        jdk11Btn->setObjectName(QString::fromUtf8("jdk11Btn"));
        jdk11Btn->setGeometry(QRect(10, 40, 101, 23));
        jdk11Btn->setIcon(icon78);

        verticalLayout->addWidget(devkitsBox);

        tabWidget->addTab(tabWinDevKits, QString());

        verticalLayout_8->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(140, -1, -1, -1);
        progressBar = new QProgressBar(Reverse);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(50);
        progressBar->setTextVisible(true);

        horizontalLayout->addWidget(progressBar);

        toolsfolderBtn = new QPushButton(Reverse);
        toolsfolderBtn->setObjectName(QString::fromUtf8("toolsfolderBtn"));

        horizontalLayout->addWidget(toolsfolderBtn);


        verticalLayout_8->addLayout(horizontalLayout);


        retranslateUi(Reverse);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Reverse);
    } // setupUi

    void retranslateUi(QWidget *Reverse)
    {
        Reverse->setWindowTitle(QCoreApplication::translate("Reverse", "Form", nullptr));
        windowsBox->setTitle(QString());
        pchunternewBtn->setText(QCoreApplication::translate("Reverse", "PCHunter+", nullptr));
        sysinternalsBtn->setText(QCoreApplication::translate("Reverse", "Sysinternals", nullptr));
        procmonBtn->setText(QCoreApplication::translate("Reverse", "Procmon", nullptr));
        winobjBtn->setText(QCoreApplication::translate("Reverse", "Winobj", nullptr));
        pchunterBtn->setText(QCoreApplication::translate("Reverse", "PCHunter", nullptr));
        nirsoftBtn->setText(QCoreApplication::translate("Reverse", "NirSoft", nullptr));
        apimonitor64Btn->setText(QCoreApplication::translate("Reverse", "APIMon64", nullptr));
        dbgviewBtn->setText(QCoreApplication::translate("Reverse", "Dbgview", nullptr));
        procexpBtn->setText(QCoreApplication::translate("Reverse", "Procexp", nullptr));
        windbg32->setText(QCoreApplication::translate("Reverse", "Windbg *32", nullptr));
        calcfpuBtn->setText(QCoreApplication::translate("Reverse", "CalcFPU", nullptr));
        x64dbg64->setText(QCoreApplication::translate("Reverse", "x64dbg *64", nullptr));
        ollydbgBtn->setText(QCoreApplication::translate("Reverse", "OllyDBG", nullptr));
        calcBtn->setText(QCoreApplication::translate("Reverse", "Calc", nullptr));
        wkeBtn->setText(QCoreApplication::translate("Reverse", "WKE", nullptr));
        ollyiceBtn->setText(QCoreApplication::translate("Reverse", "OllyICE", nullptr));
        reshackerBtn->setText(QCoreApplication::translate("Reverse", "ResHacker", nullptr));
        pebearBtn->setText(QCoreApplication::translate("Reverse", "PeBear", nullptr));
        hddogBtn->setText(QCoreApplication::translate("Reverse", "HDDog", nullptr));
        loadtestBtn->setText(QCoreApplication::translate("Reverse", "LoadTest", nullptr));
        x64dbg32->setText(QCoreApplication::translate("Reverse", "x64dbg *32", nullptr));
        ida32Btn->setText(QCoreApplication::translate("Reverse", "IDA *32", nullptr));
        aida64Btn->setText(QCoreApplication::translate("Reverse", "AIDA64", nullptr));
        cffexplorerBtn->setText(QCoreApplication::translate("Reverse", "CFF Explorer", nullptr));
        as_ssdBtn->setText(QCoreApplication::translate("Reverse", "AS_SSD", nullptr));
        rapideeBtn->setText(QCoreApplication::translate("Reverse", "Rapidee", nullptr));
        instdrvBtn->setText(QCoreApplication::translate("Reverse", "InstDrv", nullptr));
        dieBtn->setText(QCoreApplication::translate("Reverse", "DIE", nullptr));
        cheatengineBtn->setText(QCoreApplication::translate("Reverse", "Cheat Engine", nullptr));
        exeinfopeBtn->setText(QCoreApplication::translate("Reverse", "ExeinfoPe", nullptr));
        windbg64->setText(QCoreApplication::translate("Reverse", "Windbg *64", nullptr));
        ida64Btn->setText(QCoreApplication::translate("Reverse", "IDA *64", nullptr));
        ghidraBtn->setText(QCoreApplication::translate("Reverse", "Ghidra", nullptr));
        dnspyBtn->setText(QCoreApplication::translate("Reverse", "DnSpy", nullptr));
        apimonitor32Btn->setText(QCoreApplication::translate("Reverse", "APIMon32", nullptr));
        od52pjBtn->setText(QCoreApplication::translate("Reverse", "OD 52PJ", nullptr));
        radareBtn->setText(QCoreApplication::translate("Reverse", "Radare", nullptr));
        hcdBtn->setText(QCoreApplication::translate("Reverse", "HCD", nullptr));
        pygtoolsBtn->setText(QCoreApplication::translate("Reverse", "PYGTools", nullptr));
        pdbripperBtn->setText(QCoreApplication::translate("Reverse", "PDBRipper", nullptr));
        editor010Btn->setText(QCoreApplication::translate("Reverse", "010Editor", nullptr));
        windowBtn->setText(QCoreApplication::translate("Reverse", "Window", nullptr));
        curlBtn->setText(QCoreApplication::translate("Reverse", "cURL", nullptr));
        winhexBtn->setText(QCoreApplication::translate("Reverse", "Winhex", nullptr));
        poolmonxBtn->setText(QCoreApplication::translate("Reverse", "PoolMonX", nullptr));
        vscodeBtn->setText(QCoreApplication::translate("Reverse", "VSCode", nullptr));
        anydeskBtn->setText(QCoreApplication::translate("Reverse", "AnyDesk", nullptr));
        diskgeniusBtn->setText(QCoreApplication::translate("Reverse", "DiskGenius", nullptr));
        x7zBtn->setText(QCoreApplication::translate("Reverse", "7-Zip", nullptr));
        winrarBtn->setText(QCoreApplication::translate("Reverse", "WinRAR", nullptr));
        spyxx32Btn->setText(QCoreApplication::translate("Reverse", "Spy++ *32", nullptr));
        hxdBtn->setText(QCoreApplication::translate("Reverse", "HxD", nullptr));
        keygenerBtn->setText(QCoreApplication::translate("Reverse", "Keygener", nullptr));
        nmapBtn->setText(QCoreApplication::translate("Reverse", "Nmap", nullptr));
        tcpdumpBtn->setText(QCoreApplication::translate("Reverse", "tcpdump", nullptr));
        fiddler2Btn->setText(QCoreApplication::translate("Reverse", "Fiddler2", nullptr));
        fiddler4Btn->setText(QCoreApplication::translate("Reverse", "Fiddler4", nullptr));
        charlesBtn->setText(QCoreApplication::translate("Reverse", "Charles", nullptr));
        wiresharkv1Btn->setText(QCoreApplication::translate("Reverse", "Wireshark1", nullptr));
        wiresharkv3Btn->setText(QCoreApplication::translate("Reverse", "Wireshark3", nullptr));
        wiztreeBtn->setText(QCoreApplication::translate("Reverse", "WizTree", nullptr));
        sunloginBtn->setText(QCoreApplication::translate("Reverse", "Sunlogin", nullptr));
        winspyBtn->setText(QCoreApplication::translate("Reverse", "WinSpy", nullptr));
        spyxx64Btn->setText(QCoreApplication::translate("Reverse", "Spy++ *64", nullptr));
        notepad2Btn->setText(QCoreApplication::translate("Reverse", "Notepad2", nullptr));
        teamviewerBtn->setText(QCoreApplication::translate("Reverse", "Teamviewer", nullptr));
        everythingBtn->setText(QCoreApplication::translate("Reverse", "Everything", nullptr));
        chrome49Btn->setText(QCoreApplication::translate("Reverse", "Chrome49", nullptr));
        notepadxxBtn->setText(QCoreApplication::translate("Reverse", "Notepad++", nullptr));
        chrome85Btn->setText(QCoreApplication::translate("Reverse", "Chrome85", nullptr));
        firefoxBtn->setText(QCoreApplication::translate("Reverse", "Firefox", nullptr));
        cpuzBtn->setText(QCoreApplication::translate("Reverse", "CPU-Z", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWindows), QCoreApplication::translate("Reverse", "Windows", nullptr));
        linuxBox->setTitle(QString());
        cygwin64Btn->setText(QCoreApplication::translate("Reverse", "Cygwin64", nullptr));
        redistoolBtn->setText(QCoreApplication::translate("Reverse", "RedisTool", nullptr));
        puttyBtn->setText(QCoreApplication::translate("Reverse", "PuTTY", nullptr));
        ssh_winBtn->setText(QCoreApplication::translate("Reverse", "ssh-win", nullptr));
        mobaxtermBtn->setText(QCoreApplication::translate("Reverse", "MobaXterm", nullptr));
        robo3tBtn->setText(QCoreApplication::translate("Reverse", "Robo3T", nullptr));
        sqlitestudioBtn->setText(QCoreApplication::translate("Reverse", "SQLiteStudio", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabLinux), QCoreApplication::translate("Reverse", "Linux", nullptr));
        androidBox->setTitle(QString());
        adbBtn->setText(QCoreApplication::translate("Reverse", "ADB", nullptr));
        gdaBtn->setText(QCoreApplication::translate("Reverse", "GDA", nullptr));
        jadxBtn->setText(QCoreApplication::translate("Reverse", "Jadx", nullptr));
        apkstudioBtn->setText(QCoreApplication::translate("Reverse", "ApkStudio", nullptr));
        androidkillerBtn->setText(QCoreApplication::translate("Reverse", "AndroidKiller", nullptr));
        uleb128Btn->setText(QCoreApplication::translate("Reverse", "ULEB128", nullptr));
        xelfviewerBtn->setText(QCoreApplication::translate("Reverse", "XELFViewer", nullptr));
        jebBtn->setText(QCoreApplication::translate("Reverse", "JEB", nullptr));
        scrcpyBtn->setText(QCoreApplication::translate("Reverse", "Scrcpy", nullptr));
        aaptBtn->setText(QCoreApplication::translate("Reverse", "AAPT", nullptr));
        label->setText(QCoreApplication::translate("Reverse", "N.B: You need to install JDK8 before using some tools!", nullptr));
        jd_guiBtn->setText(QCoreApplication::translate("Reverse", "jd-gui", nullptr));
        jdk8Btn->setText(QCoreApplication::translate("Reverse", "JDK 8", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAndroid), QCoreApplication::translate("Reverse", "Android", nullptr));
        devkitsBox->setTitle(QString());
        vc2005x86Btn->setText(QCoreApplication::translate("Reverse", "vcredist_2005_x86", nullptr));
        torgitBtn->setText(QCoreApplication::translate("Reverse", "TortoiseGit", nullptr));
        torsvnBtn->setText(QCoreApplication::translate("Reverse", "TortoiseSVN", nullptr));
        gitBtn->setText(QCoreApplication::translate("Reverse", "Git", nullptr));
        vc2008x86Btn->setText(QCoreApplication::translate("Reverse", "vcredist_2008_x86", nullptr));
        vc2010x86Btn->setText(QCoreApplication::translate("Reverse", "vcredist_2010_x86", nullptr));
        vc2012x86Btn->setText(QCoreApplication::translate("Reverse", "vcredist_2012_x86", nullptr));
        vc2013x86Btn->setText(QCoreApplication::translate("Reverse", "vcredist_2013_x86", nullptr));
        vc2015x86Btn->setText(QCoreApplication::translate("Reverse", "vcredist_2015_x86", nullptr));
        vc1519x86Btn->setText(QCoreApplication::translate("Reverse", "vcredist_15~19_x86", nullptr));
        vc1519x64Btn->setText(QCoreApplication::translate("Reverse", "vcredist_15~19_x64", nullptr));
        vc2015x64Btn->setText(QCoreApplication::translate("Reverse", "vcredist_2015_x64", nullptr));
        vc2010x64Btn->setText(QCoreApplication::translate("Reverse", "vcredist_2010_x64", nullptr));
        vc2012x64Btn->setText(QCoreApplication::translate("Reverse", "vcredist_2012_x64", nullptr));
        vc2008x64Btn->setText(QCoreApplication::translate("Reverse", "vcredist_2008_x64", nullptr));
        vc2013x64Btn->setText(QCoreApplication::translate("Reverse", "vcredist_2013_x64", nullptr));
        vc2005x64Btn->setText(QCoreApplication::translate("Reverse", "vcredist_2005_x64", nullptr));
        jdkBtn->setText(QCoreApplication::translate("Reverse", "JDK", nullptr));
        pythonBtn->setText(QCoreApplication::translate("Reverse", "Python", nullptr));
        golangBtn->setText(QCoreApplication::translate("Reverse", "Golang", nullptr));
        androidstudioBtn->setText(QCoreApplication::translate("Reverse", "AndroidStudio", nullptr));
        visualstudioBtn->setText(QCoreApplication::translate("Reverse", "VisualStudio", nullptr));
        dotnet4Btn->setText(QCoreApplication::translate("Reverse", ".NetFramework4.0", nullptr));
        jdk11Btn->setText(QCoreApplication::translate("Reverse", "JDK11", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWinDevKits), QCoreApplication::translate("Reverse", "WinDevKits", nullptr));
        toolsfolderBtn->setText(QCoreApplication::translate("Reverse", "ToolsFolder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reverse: public Ui_Reverse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVERSE_H
