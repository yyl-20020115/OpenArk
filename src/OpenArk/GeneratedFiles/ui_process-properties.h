/********************************************************************************
** Form generated from reading UI file 'process-properties.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESS_2D_PROPERTIES_H
#define UI_PROCESS_2D_PROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessProperties
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *imageTab;
    QGroupBox *groupBox;
    QLabel *iconLabel;
    QLabel *descLabel;
    QLabel *copyrightLabel;
    QLabel *label_4;
    QLabel *fileVerLabel;
    QLabel *label_6;
    QLabel *buildLabel;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *pathEdit;
    QLabel *label_10;
    QLineEdit *curdirEdit;
    QLabel *label_5;
    QLabel *prodVerLabel;
    QPushButton *exploreButton;
    QTextEdit *cmdlineEdit;
    QLabel *label_11;
    QLabel *parentLabel;
    QLabel *label_13;
    QLabel *userLabel;
    QLabel *label_15;
    QLabel *startLabel;
    QLabel *startLabel_2;
    QLabel *bitsLabel;
    QWidget *threadsTab;
    QVBoxLayout *verticalLayout;
    QTreeView *threadView;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *threadCountLabel;
    QSpacerItem *horizontalSpacer;
    QWidget *windowListTab;
    QVBoxLayout *verticalLayout_2;
    QTreeView *wndsView;

    void setupUi(QWidget *ProcessProperties)
    {
        if (ProcessProperties->objectName().isEmpty())
            ProcessProperties->setObjectName(QString::fromUtf8("ProcessProperties"));
        ProcessProperties->resize(826, 499);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProcessProperties->sizePolicy().hasHeightForWidth());
        ProcessProperties->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(ProcessProperties);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(ProcessProperties);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        imageTab = new QWidget();
        imageTab->setObjectName(QString::fromUtf8("imageTab"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imageTab->sizePolicy().hasHeightForWidth());
        imageTab->setSizePolicy(sizePolicy1);
        groupBox = new QGroupBox(imageTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 781, 361));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        iconLabel = new QLabel(groupBox);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setGeometry(QRect(10, 20, 48, 48));
        descLabel = new QLabel(groupBox);
        descLabel->setObjectName(QString::fromUtf8("descLabel"));
        descLabel->setGeometry(QRect(110, 20, 551, 16));
        descLabel->setCursor(QCursor(Qt::IBeamCursor));
        descLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        copyrightLabel = new QLabel(groupBox);
        copyrightLabel->setObjectName(QString::fromUtf8("copyrightLabel"));
        copyrightLabel->setGeometry(QRect(110, 50, 551, 16));
        copyrightLabel->setCursor(QCursor(Qt::IBeamCursor));
        copyrightLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 80, 81, 16));
        fileVerLabel = new QLabel(groupBox);
        fileVerLabel->setObjectName(QString::fromUtf8("fileVerLabel"));
        fileVerLabel->setGeometry(QRect(110, 80, 121, 16));
        fileVerLabel->setCursor(QCursor(Qt::IBeamCursor));
        fileVerLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 120, 71, 16));
        buildLabel = new QLabel(groupBox);
        buildLabel->setObjectName(QString::fromUtf8("buildLabel"));
        buildLabel->setGeometry(QRect(110, 120, 121, 16));
        buildLabel->setCursor(QCursor(Qt::IBeamCursor));
        buildLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 140, 71, 16));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 190, 111, 16));
        pathEdit = new QLineEdit(groupBox);
        pathEdit->setObjectName(QString::fromUtf8("pathEdit"));
        pathEdit->setGeometry(QRect(10, 160, 691, 20));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 310, 111, 16));
        curdirEdit = new QLineEdit(groupBox);
        curdirEdit->setObjectName(QString::fromUtf8("curdirEdit"));
        curdirEdit->setGeometry(QRect(10, 330, 761, 20));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 100, 101, 16));
        prodVerLabel = new QLabel(groupBox);
        prodVerLabel->setObjectName(QString::fromUtf8("prodVerLabel"));
        prodVerLabel->setGeometry(QRect(110, 100, 121, 16));
        prodVerLabel->setCursor(QCursor(Qt::IBeamCursor));
        prodVerLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        exploreButton = new QPushButton(groupBox);
        exploreButton->setObjectName(QString::fromUtf8("exploreButton"));
        exploreButton->setGeometry(QRect(710, 160, 61, 23));
        cmdlineEdit = new QTextEdit(groupBox);
        cmdlineEdit->setObjectName(QString::fromUtf8("cmdlineEdit"));
        cmdlineEdit->setGeometry(QRect(10, 210, 761, 91));
        label_11 = new QLabel(imageTab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 380, 51, 16));
        parentLabel = new QLabel(imageTab);
        parentLabel->setObjectName(QString::fromUtf8("parentLabel"));
        parentLabel->setGeometry(QRect(90, 380, 691, 16));
        parentLabel->setCursor(QCursor(Qt::IBeamCursor));
        parentLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        label_13 = new QLabel(imageTab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 400, 51, 16));
        userLabel = new QLabel(imageTab);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        userLabel->setGeometry(QRect(90, 400, 351, 16));
        userLabel->setCursor(QCursor(Qt::IBeamCursor));
        userLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        label_15 = new QLabel(imageTab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 420, 51, 16));
        startLabel = new QLabel(imageTab);
        startLabel->setObjectName(QString::fromUtf8("startLabel"));
        startLabel->setGeometry(QRect(90, 420, 141, 16));
        startLabel->setCursor(QCursor(Qt::IBeamCursor));
        startLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        startLabel_2 = new QLabel(imageTab);
        startLabel_2->setObjectName(QString::fromUtf8("startLabel_2"));
        startLabel_2->setGeometry(QRect(260, 420, 41, 16));
        bitsLabel = new QLabel(imageTab);
        bitsLabel->setObjectName(QString::fromUtf8("bitsLabel"));
        bitsLabel->setGeometry(QRect(310, 420, 41, 16));
        bitsLabel->setCursor(QCursor(Qt::IBeamCursor));
        bitsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        tabWidget->addTab(imageTab, QString());
        threadsTab = new QWidget();
        threadsTab->setObjectName(QString::fromUtf8("threadsTab"));
        verticalLayout = new QVBoxLayout(threadsTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        threadView = new QTreeView(threadsTab);
        threadView->setObjectName(QString::fromUtf8("threadView"));
        threadView->setIndentation(5);

        verticalLayout->addWidget(threadView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(threadsTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        threadCountLabel = new QLabel(threadsTab);
        threadCountLabel->setObjectName(QString::fromUtf8("threadCountLabel"));

        horizontalLayout_2->addWidget(threadCountLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget->addTab(threadsTab, QString());
        windowListTab = new QWidget();
        windowListTab->setObjectName(QString::fromUtf8("windowListTab"));
        verticalLayout_2 = new QVBoxLayout(windowListTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        wndsView = new QTreeView(windowListTab);
        wndsView->setObjectName(QString::fromUtf8("wndsView"));
        wndsView->setIndentation(5);

        verticalLayout_2->addWidget(wndsView);

        tabWidget->addTab(windowListTab, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(ProcessProperties);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ProcessProperties);
    } // setupUi

    void retranslateUi(QWidget *ProcessProperties)
    {
        ProcessProperties->setWindowTitle(QCoreApplication::translate("ProcessProperties", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ProcessProperties", "Image File", nullptr));
        iconLabel->setText(QCoreApplication::translate("ProcessProperties", "ICON", nullptr));
        descLabel->setText(QCoreApplication::translate("ProcessProperties", "N/A", nullptr));
        copyrightLabel->setText(QCoreApplication::translate("ProcessProperties", "N/A", nullptr));
        label_4->setText(QCoreApplication::translate("ProcessProperties", "File Version:", nullptr));
        fileVerLabel->setText(QCoreApplication::translate("ProcessProperties", "N/A", nullptr));
        label_6->setText(QCoreApplication::translate("ProcessProperties", "Build Time:", nullptr));
        buildLabel->setText(QCoreApplication::translate("ProcessProperties", "N/A", nullptr));
        label_8->setText(QCoreApplication::translate("ProcessProperties", "Path:", nullptr));
        label_9->setText(QCoreApplication::translate("ProcessProperties", "Command line:", nullptr));
        label_10->setText(QCoreApplication::translate("ProcessProperties", "Current directory:", nullptr));
        label_5->setText(QCoreApplication::translate("ProcessProperties", "Product Version:", nullptr));
        prodVerLabel->setText(QCoreApplication::translate("ProcessProperties", "N/A", nullptr));
        exploreButton->setText(QCoreApplication::translate("ProcessProperties", "Explore", nullptr));
        label_11->setText(QCoreApplication::translate("ProcessProperties", "Parent:", nullptr));
        parentLabel->setText(QCoreApplication::translate("ProcessProperties", "N/A", nullptr));
        label_13->setText(QCoreApplication::translate("ProcessProperties", "User:", nullptr));
        userLabel->setText(QCoreApplication::translate("ProcessProperties", "N/A", nullptr));
        label_15->setText(QCoreApplication::translate("ProcessProperties", "Start:", nullptr));
        startLabel->setText(QCoreApplication::translate("ProcessProperties", "N/A", nullptr));
        startLabel_2->setText(QCoreApplication::translate("ProcessProperties", "Image:", nullptr));
        bitsLabel->setText(QCoreApplication::translate("ProcessProperties", "N/A", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(imageTab), QCoreApplication::translate("ProcessProperties", "Image", nullptr));
        label_2->setText(QCoreApplication::translate("ProcessProperties", "Count:", nullptr));
        threadCountLabel->setText(QCoreApplication::translate("ProcessProperties", "N/A", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(threadsTab), QCoreApplication::translate("ProcessProperties", "Threads", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(windowListTab), QCoreApplication::translate("ProcessProperties", "WindowList", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcessProperties: public Ui_ProcessProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESS_2D_PROPERTIES_H
