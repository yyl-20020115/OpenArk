/********************************************************************************
** Form generated from reading UI file 'scanner.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCANNER_H
#define UI_SCANNER_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Scanner
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabSummary;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitterSummary;
    QTableView *summaryUpView;
    QTableView *summaryDownView;
    QWidget *tabHeaders;
    QVBoxLayout *verticalLayout_5;
    QTreeView *headersView;
    QWidget *tabSections;
    QVBoxLayout *verticalLayout_4;
    QTableView *sectionsView;
    QWidget *tabImport;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QTableView *impView;
    QTableView *impFuncView;
    QWidget *tabExport;
    QVBoxLayout *verticalLayout_6;
    QSplitter *splitter_2;
    QTableView *expView;
    QTableView *expFuncView;
    QWidget *tabRelocation;
    QVBoxLayout *verticalLayout_7;
    QSplitter *splitter_3;
    QTableView *relocView;
    QTableView *relocItemView;
    QWidget *tabDebug;
    QVBoxLayout *verticalLayout_8;
    QTableView *debugView;
    QWidget *tabRVA;
    QLineEdit *baseEdit;
    QLineEdit *vaEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *rvaEdit;
    QLabel *label_5;
    QLineEdit *rawEdit;
    QLineEdit *rebaseEdit;
    QLabel *label_6;
    QLabel *label_12;
    QLineEdit *revaEdit;

    void setupUi(QWidget *Scanner)
    {
        if (Scanner->objectName().isEmpty())
            Scanner->setObjectName(QString::fromUtf8("Scanner"));
        Scanner->resize(735, 597);
        verticalLayout = new QVBoxLayout(Scanner);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        tabWidget = new QTabWidget(Scanner);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        tabWidget->setTabPosition(QTabWidget::West);
        tabSummary = new QWidget();
        tabSummary->setObjectName(QString::fromUtf8("tabSummary"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabSummary->sizePolicy().hasHeightForWidth());
        tabSummary->setSizePolicy(sizePolicy);
        tabSummary->setContextMenuPolicy(Qt::ActionsContextMenu);
        tabSummary->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(tabSummary);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitterSummary = new QSplitter(tabSummary);
        splitterSummary->setObjectName(QString::fromUtf8("splitterSummary"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitterSummary->sizePolicy().hasHeightForWidth());
        splitterSummary->setSizePolicy(sizePolicy1);
        splitterSummary->setLineWidth(1);
        splitterSummary->setOrientation(Qt::Vertical);
        splitterSummary->setOpaqueResize(true);
        splitterSummary->setHandleWidth(5);
        summaryUpView = new QTableView(splitterSummary);
        summaryUpView->setObjectName(QString::fromUtf8("summaryUpView"));
        summaryUpView->setAlternatingRowColors(true);
        splitterSummary->addWidget(summaryUpView);
        summaryDownView = new QTableView(splitterSummary);
        summaryDownView->setObjectName(QString::fromUtf8("summaryDownView"));
        summaryDownView->setAlternatingRowColors(true);
        splitterSummary->addWidget(summaryDownView);

        verticalLayout_2->addWidget(splitterSummary);

        tabWidget->addTab(tabSummary, QString());
        tabHeaders = new QWidget();
        tabHeaders->setObjectName(QString::fromUtf8("tabHeaders"));
        verticalLayout_5 = new QVBoxLayout(tabHeaders);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        headersView = new QTreeView(tabHeaders);
        headersView->setObjectName(QString::fromUtf8("headersView"));
        headersView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));

        verticalLayout_5->addWidget(headersView);

        tabWidget->addTab(tabHeaders, QString());
        tabSections = new QWidget();
        tabSections->setObjectName(QString::fromUtf8("tabSections"));
        verticalLayout_4 = new QVBoxLayout(tabSections);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        sectionsView = new QTableView(tabSections);
        sectionsView->setObjectName(QString::fromUtf8("sectionsView"));
        sectionsView->setAlternatingRowColors(true);

        verticalLayout_4->addWidget(sectionsView);

        tabWidget->addTab(tabSections, QString());
        tabImport = new QWidget();
        tabImport->setObjectName(QString::fromUtf8("tabImport"));
        verticalLayout_3 = new QVBoxLayout(tabImport);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(tabImport);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setLineWidth(1);
        splitter->setOrientation(Qt::Vertical);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(5);
        impView = new QTableView(splitter);
        impView->setObjectName(QString::fromUtf8("impView"));
        impView->setAlternatingRowColors(true);
        splitter->addWidget(impView);
        impFuncView = new QTableView(splitter);
        impFuncView->setObjectName(QString::fromUtf8("impFuncView"));
        impFuncView->setAlternatingRowColors(true);
        splitter->addWidget(impFuncView);

        verticalLayout_3->addWidget(splitter);

        tabWidget->addTab(tabImport, QString());
        tabExport = new QWidget();
        tabExport->setObjectName(QString::fromUtf8("tabExport"));
        verticalLayout_6 = new QVBoxLayout(tabExport);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(tabExport);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        sizePolicy1.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy1);
        splitter_2->setLineWidth(1);
        splitter_2->setOrientation(Qt::Vertical);
        splitter_2->setOpaqueResize(true);
        splitter_2->setHandleWidth(5);
        expView = new QTableView(splitter_2);
        expView->setObjectName(QString::fromUtf8("expView"));
        expView->setAlternatingRowColors(true);
        splitter_2->addWidget(expView);
        expFuncView = new QTableView(splitter_2);
        expFuncView->setObjectName(QString::fromUtf8("expFuncView"));
        expFuncView->setAlternatingRowColors(true);
        splitter_2->addWidget(expFuncView);

        verticalLayout_6->addWidget(splitter_2);

        tabWidget->addTab(tabExport, QString());
        tabRelocation = new QWidget();
        tabRelocation->setObjectName(QString::fromUtf8("tabRelocation"));
        verticalLayout_7 = new QVBoxLayout(tabRelocation);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        splitter_3 = new QSplitter(tabRelocation);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        relocView = new QTableView(splitter_3);
        relocView->setObjectName(QString::fromUtf8("relocView"));
        relocView->setAlternatingRowColors(true);
        splitter_3->addWidget(relocView);
        relocItemView = new QTableView(splitter_3);
        relocItemView->setObjectName(QString::fromUtf8("relocItemView"));
        relocItemView->setAlternatingRowColors(true);
        splitter_3->addWidget(relocItemView);

        verticalLayout_7->addWidget(splitter_3);

        tabWidget->addTab(tabRelocation, QString());
        tabDebug = new QWidget();
        tabDebug->setObjectName(QString::fromUtf8("tabDebug"));
        verticalLayout_8 = new QVBoxLayout(tabDebug);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        debugView = new QTableView(tabDebug);
        debugView->setObjectName(QString::fromUtf8("debugView"));
        debugView->setAlternatingRowColors(true);

        verticalLayout_8->addWidget(debugView);

        tabWidget->addTab(tabDebug, QString());
        tabRVA = new QWidget();
        tabRVA->setObjectName(QString::fromUtf8("tabRVA"));
        baseEdit = new QLineEdit(tabRVA);
        baseEdit->setObjectName(QString::fromUtf8("baseEdit"));
        baseEdit->setGeometry(QRect(130, 22, 131, 20));
        vaEdit = new QLineEdit(tabRVA);
        vaEdit->setObjectName(QString::fromUtf8("vaEdit"));
        vaEdit->setGeometry(QRect(130, 48, 131, 20));
        label_2 = new QLabel(tabRVA);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(52, 48, 51, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(tabRVA);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(52, 22, 51, 20));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(tabRVA);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(52, 74, 51, 20));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rvaEdit = new QLineEdit(tabRVA);
        rvaEdit->setObjectName(QString::fromUtf8("rvaEdit"));
        rvaEdit->setGeometry(QRect(130, 74, 131, 20));
        label_5 = new QLabel(tabRVA);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(52, 100, 51, 20));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rawEdit = new QLineEdit(tabRVA);
        rawEdit->setObjectName(QString::fromUtf8("rawEdit"));
        rawEdit->setGeometry(QRect(130, 100, 131, 20));
        rebaseEdit = new QLineEdit(tabRVA);
        rebaseEdit->setObjectName(QString::fromUtf8("rebaseEdit"));
        rebaseEdit->setGeometry(QRect(400, 22, 131, 20));
        label_6 = new QLabel(tabRVA);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(300, 22, 71, 20));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_12 = new QLabel(tabRVA);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(322, 50, 51, 20));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        revaEdit = new QLineEdit(tabRVA);
        revaEdit->setObjectName(QString::fromUtf8("revaEdit"));
        revaEdit->setGeometry(QRect(400, 50, 131, 20));
        tabWidget->addTab(tabRVA, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Scanner);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Scanner);
    } // setupUi

    void retranslateUi(QWidget *Scanner)
    {
        Scanner->setWindowTitle(QCoreApplication::translate("Scanner", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSummary), QCoreApplication::translate("Scanner", "Summary", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabHeaders), QCoreApplication::translate("Scanner", "Headers", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSections), QCoreApplication::translate("Scanner", "Sections", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabImport), QCoreApplication::translate("Scanner", "Import", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabExport), QCoreApplication::translate("Scanner", "Export", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRelocation), QCoreApplication::translate("Scanner", "Relocation", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDebug), QCoreApplication::translate("Scanner", "Debug", nullptr));
        label_2->setText(QCoreApplication::translate("Scanner", "VA:", nullptr));
        label_3->setText(QCoreApplication::translate("Scanner", "Base:", nullptr));
        label_4->setText(QCoreApplication::translate("Scanner", "RVA:", nullptr));
        label_5->setText(QCoreApplication::translate("Scanner", "Raw:", nullptr));
        label_6->setText(QCoreApplication::translate("Scanner", "ReBase:", nullptr));
        label_12->setText(QCoreApplication::translate("Scanner", "ReVA:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRVA), QCoreApplication::translate("Scanner", "RVA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Scanner: public Ui_Scanner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCANNER_H
