/********************************************************************************
** Form generated from reading UI file 'openark.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENARK_H
#define UI_OPENARK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenArkWindow
{
public:
    QAction *actionConsole;
    QAction *actionOpen;
    QAction *actionExport;
    QAction *actionExit;
    QAction *actionOutput;
    QAction *actionHelloCoder;
    QAction *actionGithub;
    QAction *actionAbout;
    QAction *actionCheckUpdate;
    QAction *actionGithub_2;
    QAction *actionManuals;
    QAction *actionRefresh;
    QAction *actionSave;
    QAction *actionSettings;
    QAction *actionCoderKit;
    QAction *actionScanner;
    QAction *actionCleaner;
    QAction *actionBundler;
    QAction *actionOnTop;
    QAction *actionReset;
    QAction *actionModule;
    QAction *actionHandle;
    QAction *actionMemory;
    QAction *actionEnglish;
    QAction *actionZhcn;
    QAction *actionRun;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *tabProcessMgr;
    QWidget *tabKernel;
    QWidget *tabCoderKit;
    QWidget *tabScanner;
    QWidget *tabBundler;
    QWidget *tabUtilities;
    QWidget *tabReverse;
    QWidget *consoleWidget;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *cmdOutWindow;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *cmdInput;
    QPushButton *cmdButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuOptions;
    QMenu *menuLanguage;
    QMenu *menuPlugins;
    QMenu *menuHelp;
    QMenu *menuWindow;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpenArkWindow)
    {
        if (OpenArkWindow->objectName().isEmpty())
            OpenArkWindow->setObjectName(QString::fromUtf8("OpenArkWindow"));
        OpenArkWindow->resize(873, 661);
        OpenArkWindow->setWindowTitle(QString::fromUtf8("OpenArk"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/OpenArk/OpenArk.ico"), QSize(), QIcon::Normal, QIcon::Off);
        OpenArkWindow->setWindowIcon(icon);
        actionConsole = new QAction(OpenArkWindow);
        actionConsole->setObjectName(QString::fromUtf8("actionConsole"));
        actionConsole->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/OpenArk/console.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionConsole->setIcon(icon1);
        actionOpen = new QAction(OpenArkWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/OpenArk/open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionExport = new QAction(OpenArkWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionExit = new QAction(OpenArkWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/OpenArk/exit.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionOutput = new QAction(OpenArkWindow);
        actionOutput->setObjectName(QString::fromUtf8("actionOutput"));
        actionHelloCoder = new QAction(OpenArkWindow);
        actionHelloCoder->setObjectName(QString::fromUtf8("actionHelloCoder"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setBold(true);
        font.setWeight(75);
        actionHelloCoder->setFont(font);
        actionGithub = new QAction(OpenArkWindow);
        actionGithub->setObjectName(QString::fromUtf8("actionGithub"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/OpenArk/gitub.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionGithub->setIcon(icon4);
        actionAbout = new QAction(OpenArkWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout->setIcon(icon);
        actionCheckUpdate = new QAction(OpenArkWindow);
        actionCheckUpdate->setObjectName(QString::fromUtf8("actionCheckUpdate"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/OpenArk/update.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheckUpdate->setIcon(icon5);
        actionGithub_2 = new QAction(OpenArkWindow);
        actionGithub_2->setObjectName(QString::fromUtf8("actionGithub_2"));
        actionManuals = new QAction(OpenArkWindow);
        actionManuals->setObjectName(QString::fromUtf8("actionManuals"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/OpenArk/help.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionManuals->setIcon(icon6);
        actionRefresh = new QAction(OpenArkWindow);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/OpenArk/refresh.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh->setIcon(icon7);
        actionSave = new QAction(OpenArkWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/OpenArk/save.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon8);
        actionSettings = new QAction(OpenArkWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/OpenArk/settings.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon9);
        actionCoderKit = new QAction(OpenArkWindow);
        actionCoderKit->setObjectName(QString::fromUtf8("actionCoderKit"));
        actionScanner = new QAction(OpenArkWindow);
        actionScanner->setObjectName(QString::fromUtf8("actionScanner"));
        actionCleaner = new QAction(OpenArkWindow);
        actionCleaner->setObjectName(QString::fromUtf8("actionCleaner"));
        actionBundler = new QAction(OpenArkWindow);
        actionBundler->setObjectName(QString::fromUtf8("actionBundler"));
        actionOnTop = new QAction(OpenArkWindow);
        actionOnTop->setObjectName(QString::fromUtf8("actionOnTop"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/OpenArk/ontop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionOnTop->setIcon(icon10);
        actionReset = new QAction(OpenArkWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionModule = new QAction(OpenArkWindow);
        actionModule->setObjectName(QString::fromUtf8("actionModule"));
        actionModule->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/OpenArk/module.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionModule->setIcon(icon11);
        actionHandle = new QAction(OpenArkWindow);
        actionHandle->setObjectName(QString::fromUtf8("actionHandle"));
        actionHandle->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/OpenArk/handle.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionHandle->setIcon(icon12);
        actionMemory = new QAction(OpenArkWindow);
        actionMemory->setObjectName(QString::fromUtf8("actionMemory"));
        actionMemory->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/OpenArk/memory.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionMemory->setIcon(icon13);
        actionEnglish = new QAction(OpenArkWindow);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionEnglish->setCheckable(true);
        actionZhcn = new QAction(OpenArkWindow);
        actionZhcn->setObjectName(QString::fromUtf8("actionZhcn"));
        actionZhcn->setCheckable(true);
        actionRun = new QAction(OpenArkWindow);
        actionRun->setObjectName(QString::fromUtf8("actionRun"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/OpenArk/main/run.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon14);
        centralWidget = new QWidget(OpenArkWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 0, 0);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setStyleSheet(QString::fromUtf8(""));
        splitter->setLineWidth(1);
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(0);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 20));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"	min-height:25px;\n"
"}\n"
""));
        tabProcessMgr = new QWidget();
        tabProcessMgr->setObjectName(QString::fromUtf8("tabProcessMgr"));
        tabWidget->addTab(tabProcessMgr, QString());
        tabKernel = new QWidget();
        tabKernel->setObjectName(QString::fromUtf8("tabKernel"));
        tabWidget->addTab(tabKernel, QString());
        tabCoderKit = new QWidget();
        tabCoderKit->setObjectName(QString::fromUtf8("tabCoderKit"));
        tabWidget->addTab(tabCoderKit, QString());
        tabScanner = new QWidget();
        tabScanner->setObjectName(QString::fromUtf8("tabScanner"));
        tabWidget->addTab(tabScanner, QString());
        tabBundler = new QWidget();
        tabBundler->setObjectName(QString::fromUtf8("tabBundler"));
        tabWidget->addTab(tabBundler, QString());
        tabUtilities = new QWidget();
        tabUtilities->setObjectName(QString::fromUtf8("tabUtilities"));
        tabWidget->addTab(tabUtilities, QString());
        tabReverse = new QWidget();
        tabReverse->setObjectName(QString::fromUtf8("tabReverse"));
        tabWidget->addTab(tabReverse, QString());
        splitter->addWidget(tabWidget);
        consoleWidget = new QWidget(splitter);
        consoleWidget->setObjectName(QString::fromUtf8("consoleWidget"));
        verticalLayout_2 = new QVBoxLayout(consoleWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 2, 0);
        cmdOutWindow = new QTextBrowser(consoleWidget);
        cmdOutWindow->setObjectName(QString::fromUtf8("cmdOutWindow"));
        cmdOutWindow->setStyleSheet(QString::fromUtf8("background: #293134;"));
        cmdOutWindow->setReadOnly(true);
        cmdOutWindow->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        cmdOutWindow->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(cmdOutWindow);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(consoleWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Fixedsys"));
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        cmdInput = new QLineEdit(consoleWidget);
        cmdInput->setObjectName(QString::fromUtf8("cmdInput"));

        horizontalLayout->addWidget(cmdInput);

        cmdButton = new QPushButton(consoleWidget);
        cmdButton->setObjectName(QString::fromUtf8("cmdButton"));

        horizontalLayout->addWidget(cmdButton);


        verticalLayout_2->addLayout(horizontalLayout);

        splitter->addWidget(consoleWidget);

        verticalLayout->addWidget(splitter);

        OpenArkWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OpenArkWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 873, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuLanguage = new QMenu(menuOptions);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menuPlugins = new QMenu(menuBar);
        menuPlugins->setObjectName(QString::fromUtf8("menuPlugins"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        OpenArkWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(OpenArkWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(16, 16));
        OpenArkWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(OpenArkWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusBar->sizePolicy().hasHeightForWidth());
        statusBar->setSizePolicy(sizePolicy1);
        statusBar->setSizeGripEnabled(false);
        OpenArkWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuPlugins->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionRun);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExport);
        menuFile->addAction(actionExit);
        menuView->addAction(actionConsole);
        menuView->addAction(actionRefresh);
        menuView->addAction(actionOnTop);
        menuView->addAction(actionReset);
        menuOptions->addAction(actionSettings);
        menuOptions->addAction(menuLanguage->menuAction());
        menuLanguage->addAction(actionEnglish);
        menuLanguage->addAction(actionZhcn);
        menuPlugins->addAction(actionCoderKit);
        menuPlugins->addSeparator();
        menuPlugins->addAction(actionScanner);
        menuPlugins->addAction(actionBundler);
        menuHelp->addAction(actionManuals);
        menuHelp->addSeparator();
        menuHelp->addAction(actionGithub);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCheckUpdate);
        menuHelp->addAction(actionAbout);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionSettings);
        toolBar->addAction(actionRefresh);
        toolBar->addAction(actionOnTop);
        toolBar->addSeparator();
        toolBar->addAction(actionGithub);
        toolBar->addAction(actionExit);

        retranslateUi(OpenArkWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OpenArkWindow);
    } // setupUi

    void retranslateUi(QMainWindow *OpenArkWindow)
    {
        actionConsole->setText(QCoreApplication::translate("OpenArkWindow", "&Console", nullptr));
#if QT_CONFIG(tooltip)
        actionConsole->setToolTip(QCoreApplication::translate("OpenArkWindow", "Open Console Window", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionConsole->setShortcut(QCoreApplication::translate("OpenArkWindow", "Alt+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("OpenArkWindow", "&Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("OpenArkWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExport->setText(QCoreApplication::translate("OpenArkWindow", "Ex&port", nullptr));
        actionExit->setText(QCoreApplication::translate("OpenArkWindow", "&Exit", nullptr));
        actionOutput->setText(QCoreApplication::translate("OpenArkWindow", "Output", nullptr));
        actionHelloCoder->setText(QCoreApplication::translate("OpenArkWindow", "HelloCoder", nullptr));
        actionGithub->setText(QCoreApplication::translate("OpenArkWindow", "Project on Github", nullptr));
#if QT_CONFIG(tooltip)
        actionGithub->setToolTip(QCoreApplication::translate("OpenArkWindow", "Project on Github", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAbout->setText(QCoreApplication::translate("OpenArkWindow", "About OpenArk", nullptr));
        actionCheckUpdate->setText(QCoreApplication::translate("OpenArkWindow", "Check for Updates...", nullptr));
        actionGithub_2->setText(QCoreApplication::translate("OpenArkWindow", "Project on Github", nullptr));
        actionManuals->setText(QCoreApplication::translate("OpenArkWindow", "Manuals", nullptr));
        actionRefresh->setText(QCoreApplication::translate("OpenArkWindow", "&Refresh", nullptr));
#if QT_CONFIG(shortcut)
        actionRefresh->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("OpenArkWindow", "&Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("OpenArkWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSettings->setText(QCoreApplication::translate("OpenArkWindow", "&Settings", nullptr));
        actionCoderKit->setText(QCoreApplication::translate("OpenArkWindow", "CoderKit", nullptr));
        actionScanner->setText(QCoreApplication::translate("OpenArkWindow", "Scanner", nullptr));
        actionCleaner->setText(QCoreApplication::translate("OpenArkWindow", "C&leaner", nullptr));
        actionBundler->setText(QCoreApplication::translate("OpenArkWindow", "Bundler", nullptr));
        actionOnTop->setText(QCoreApplication::translate("OpenArkWindow", "&Allways On Top", nullptr));
        actionReset->setText(QCoreApplication::translate("OpenArkWindow", "Reset", nullptr));
#if QT_CONFIG(tooltip)
        actionReset->setToolTip(QCoreApplication::translate("OpenArkWindow", "Reset Window", nullptr));
#endif // QT_CONFIG(tooltip)
        actionModule->setText(QCoreApplication::translate("OpenArkWindow", "&Module", nullptr));
#if QT_CONFIG(tooltip)
        actionModule->setToolTip(QCoreApplication::translate("OpenArkWindow", "Open Module Window", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHandle->setText(QCoreApplication::translate("OpenArkWindow", "&Handle", nullptr));
#if QT_CONFIG(tooltip)
        actionHandle->setToolTip(QCoreApplication::translate("OpenArkWindow", "Open Handle Window", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMemory->setText(QCoreApplication::translate("OpenArkWindow", "&Memory", nullptr));
#if QT_CONFIG(tooltip)
        actionMemory->setToolTip(QCoreApplication::translate("OpenArkWindow", "Open Memory Window", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEnglish->setText(QCoreApplication::translate("OpenArkWindow", "English", nullptr));
        actionZhcn->setText(QCoreApplication::translate("OpenArkWindow", "\347\256\200\344\275\223\344\270\255\346\226\207", nullptr));
        actionRun->setText(QCoreApplication::translate("OpenArkWindow", "&Run", nullptr));
#if QT_CONFIG(shortcut)
        actionRun->setShortcut(QCoreApplication::translate("OpenArkWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tabProcessMgr), QCoreApplication::translate("OpenArkWindow", "Process", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabKernel), QCoreApplication::translate("OpenArkWindow", "Kernel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCoderKit), QCoreApplication::translate("OpenArkWindow", "CoderKit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabScanner), QCoreApplication::translate("OpenArkWindow", "Scanner", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabBundler), QCoreApplication::translate("OpenArkWindow", "Bundler", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabUtilities), QCoreApplication::translate("OpenArkWindow", "Utilities", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabReverse), QCoreApplication::translate("OpenArkWindow", "Reverse", nullptr));
        cmdOutWindow->setHtml(QCoreApplication::translate("OpenArkWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei'; font-weight:600; color:#21daff;\">OpenArk Console</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei'; color:#e0e2e4;\">Copyright (C) 2019 BlackINT3 </span><a href=\"https://github.com/BlackINT3/OpenArk\"><span style=\" font-family:'Microsoft YaHei'; text-decoration: underline; color:#8ccf34;\">https://github.com/BlackINT3/OpenArk</span></a></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("OpenArkWindow", "C:\\>", nullptr));
        cmdButton->setText(QCoreApplication::translate("OpenArkWindow", "Command Help", nullptr));
        menuFile->setTitle(QCoreApplication::translate("OpenArkWindow", "&File", nullptr));
        menuView->setTitle(QCoreApplication::translate("OpenArkWindow", "&View", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("OpenArkWindow", "&Options", nullptr));
        menuLanguage->setTitle(QCoreApplication::translate("OpenArkWindow", "&Language", nullptr));
        menuPlugins->setTitle(QCoreApplication::translate("OpenArkWindow", "&Plugins", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("OpenArkWindow", "&Help", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("OpenArkWindow", "&Window", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("OpenArkWindow", "toolBar", nullptr));
        (void)OpenArkWindow;
    } // retranslateUi

};

namespace Ui {
    class OpenArkWindow: public Ui_OpenArkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENARK_H
