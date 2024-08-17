/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QGroupBox *groupBox_2;
    QCheckBox *ctxmenuBox;
    QWidget *tabConsole;
    QVBoxLayout *verticalLayout_2;
    QTableView *consoleView;
    QWidget *tabCleanConfig;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QListWidget *listWidget_path;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edit_file_suffix;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_path_btn;
    QPushButton *del_path_btn;
    QPushButton *save_btn;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(831, 464);
        verticalLayout = new QVBoxLayout(Settings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(Settings);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        groupBox_2 = new QGroupBox(tabGeneral);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 781, 211));
        ctxmenuBox = new QCheckBox(groupBox_2);
        ctxmenuBox->setObjectName(QString::fromUtf8("ctxmenuBox"));
        ctxmenuBox->setGeometry(QRect(20, 20, 141, 16));
        tabWidget->addTab(tabGeneral, QString());
        tabConsole = new QWidget();
        tabConsole->setObjectName(QString::fromUtf8("tabConsole"));
        verticalLayout_2 = new QVBoxLayout(tabConsole);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        consoleView = new QTableView(tabConsole);
        consoleView->setObjectName(QString::fromUtf8("consoleView"));

        verticalLayout_2->addWidget(consoleView);

        tabWidget->addTab(tabConsole, QString());
        tabCleanConfig = new QWidget();
        tabCleanConfig->setObjectName(QString::fromUtf8("tabCleanConfig"));
        verticalLayout_3 = new QVBoxLayout(tabCleanConfig);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(tabCleanConfig);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_4);

        listWidget_path = new QListWidget(groupBox);
        listWidget_path->setObjectName(QString::fromUtf8("listWidget_path"));

        horizontalLayout_4->addWidget(listWidget_path);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        edit_file_suffix = new QLineEdit(groupBox);
        edit_file_suffix->setObjectName(QString::fromUtf8("edit_file_suffix"));

        horizontalLayout_2->addWidget(edit_file_suffix);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        add_path_btn = new QPushButton(groupBox);
        add_path_btn->setObjectName(QString::fromUtf8("add_path_btn"));

        horizontalLayout_3->addWidget(add_path_btn);

        del_path_btn = new QPushButton(groupBox);
        del_path_btn->setObjectName(QString::fromUtf8("del_path_btn"));

        horizontalLayout_3->addWidget(del_path_btn);

        save_btn = new QPushButton(groupBox);
        save_btn->setObjectName(QString::fromUtf8("save_btn"));

        horizontalLayout_3->addWidget(save_btn);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_3->addWidget(groupBox);

        tabWidget->addTab(tabCleanConfig, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Settings);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Settings", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Settings", "Core", nullptr));
        ctxmenuBox->setText(QCoreApplication::translate("Settings", "Enable Context Menu", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QCoreApplication::translate("Settings", "General", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabConsole), QCoreApplication::translate("Settings", "Console", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Settings", "Clean Path", nullptr));
        label_2->setText(QCoreApplication::translate("Settings", "File Suffx", nullptr));
        add_path_btn->setText(QCoreApplication::translate("Settings", "Add Path", nullptr));
        del_path_btn->setText(QCoreApplication::translate("Settings", "Del Path", nullptr));
        save_btn->setText(QCoreApplication::translate("Settings", "Save", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCleanConfig), QCoreApplication::translate("Settings", "Cleaner", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
