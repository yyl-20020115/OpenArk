/********************************************************************************
** Form generated from reading UI file 'process-selection.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESS_2D_SELECTION_H
#define UI_PROCESS_2D_SELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_ProcessSelection
{
public:
    QDialogButtonBox *okBtn;
    QGroupBox *groupBox;
    QLineEdit *pidEdit;
    QRadioButton *decRadio;
    QRadioButton *hexRadio;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *nameEdit;
    QLineEdit *pathEdit;

    void setupUi(QDialog *ProcessSelection)
    {
        if (ProcessSelection->objectName().isEmpty())
            ProcessSelection->setObjectName(QString::fromUtf8("ProcessSelection"));
        ProcessSelection->resize(320, 172);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProcessSelection->sizePolicy().hasHeightForWidth());
        ProcessSelection->setSizePolicy(sizePolicy);
        okBtn = new QDialogButtonBox(ProcessSelection);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        okBtn->setGeometry(QRect(150, 140, 161, 32));
        okBtn->setOrientation(Qt::Horizontal);
        okBtn->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(ProcessSelection);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(10, 10, 301, 131));
        groupBox->setInputMethodHints(Qt::ImhNone);
        pidEdit = new QLineEdit(groupBox);
        pidEdit->setObjectName(QString::fromUtf8("pidEdit"));
        pidEdit->setGeometry(QRect(60, 20, 131, 20));
        pidEdit->setInputMethodHints(Qt::ImhNone);
        decRadio = new QRadioButton(groupBox);
        decRadio->setObjectName(QString::fromUtf8("decRadio"));
        decRadio->setGeometry(QRect(60, 50, 71, 16));
        hexRadio = new QRadioButton(groupBox);
        hexRadio->setObjectName(QString::fromUtf8("hexRadio"));
        hexRadio->setGeometry(QRect(140, 50, 71, 16));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 41, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 41, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 41, 21));
        nameEdit = new QLineEdit(groupBox);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setEnabled(true);
        nameEdit->setGeometry(QRect(60, 70, 131, 20));
        nameEdit->setStyleSheet(QString::fromUtf8("background:transparent;"));
        pathEdit = new QLineEdit(groupBox);
        pathEdit->setObjectName(QString::fromUtf8("pathEdit"));
        pathEdit->setEnabled(true);
        pathEdit->setGeometry(QRect(60, 100, 231, 20));
        pathEdit->setStyleSheet(QString::fromUtf8("background:transparent;"));

        retranslateUi(ProcessSelection);
        QObject::connect(okBtn, SIGNAL(accepted()), ProcessSelection, SLOT(accept()));
        QObject::connect(okBtn, SIGNAL(rejected()), ProcessSelection, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProcessSelection);
    } // setupUi

    void retranslateUi(QDialog *ProcessSelection)
    {
        ProcessSelection->setWindowTitle(QCoreApplication::translate("ProcessSelection", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ProcessSelection", "Process Selection", nullptr));
        decRadio->setText(QCoreApplication::translate("ProcessSelection", "Decimal", nullptr));
        hexRadio->setText(QCoreApplication::translate("ProcessSelection", "Hex", nullptr));
        label->setText(QCoreApplication::translate("ProcessSelection", "PID:", nullptr));
        label_2->setText(QCoreApplication::translate("ProcessSelection", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("ProcessSelection", "Path:", nullptr));
        pathEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProcessSelection: public Ui_ProcessSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESS_2D_SELECTION_H
