/********************************************************************************
** Form generated from reading UI file 'memory-rw.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMORY_2D_RW_H
#define UI_MEMORY_2D_RW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemoryRW
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *writeAddrEdit;
    QLabel *label_10;
    QLineEdit *writeDataEdit;
    QPushButton *writeMemBtn;
    QPushButton *writeStringBtn;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *readAddrEdit;
    QLabel *label_5;
    QLineEdit *readSizeEdit;
    QLabel *label_6;
    QLabel *regionLabel;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *readMemBtn;
    QPushButton *dumpToFileBtn;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QTextEdit *hexEdit;
    QTextEdit *disasmEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLineEdit *pidEdit;
    QFrame *line_2;
    QLabel *pnameLabel_2;
    QLabel *iconLabel;
    QLabel *pnameLabel;
    QFrame *line;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MemoryRW)
    {
        if (MemoryRW->objectName().isEmpty())
            MemoryRW->setObjectName(QString::fromUtf8("MemoryRW"));
        MemoryRW->resize(1087, 628);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MemoryRW->sizePolicy().hasHeightForWidth());
        MemoryRW->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(MemoryRW);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(MemoryRW);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);

        writeAddrEdit = new QLineEdit(MemoryRW);
        writeAddrEdit->setObjectName(QString::fromUtf8("writeAddrEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(writeAddrEdit->sizePolicy().hasHeightForWidth());
        writeAddrEdit->setSizePolicy(sizePolicy1);
        writeAddrEdit->setMinimumSize(QSize(170, 0));

        horizontalLayout_9->addWidget(writeAddrEdit);

        label_10 = new QLabel(MemoryRW);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        writeDataEdit = new QLineEdit(MemoryRW);
        writeDataEdit->setObjectName(QString::fromUtf8("writeDataEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(writeDataEdit->sizePolicy().hasHeightForWidth());
        writeDataEdit->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(writeDataEdit);

        writeMemBtn = new QPushButton(MemoryRW);
        writeMemBtn->setObjectName(QString::fromUtf8("writeMemBtn"));

        horizontalLayout_9->addWidget(writeMemBtn);

        writeStringBtn = new QPushButton(MemoryRW);
        writeStringBtn->setObjectName(QString::fromUtf8("writeStringBtn"));

        horizontalLayout_9->addWidget(writeStringBtn);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_4 = new QLabel(MemoryRW);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        readAddrEdit = new QLineEdit(MemoryRW);
        readAddrEdit->setObjectName(QString::fromUtf8("readAddrEdit"));
        sizePolicy1.setHeightForWidth(readAddrEdit->sizePolicy().hasHeightForWidth());
        readAddrEdit->setSizePolicy(sizePolicy1);
        readAddrEdit->setMinimumSize(QSize(170, 0));

        horizontalLayout_6->addWidget(readAddrEdit);

        label_5 = new QLabel(MemoryRW);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        readSizeEdit = new QLineEdit(MemoryRW);
        readSizeEdit->setObjectName(QString::fromUtf8("readSizeEdit"));
        sizePolicy1.setHeightForWidth(readSizeEdit->sizePolicy().hasHeightForWidth());
        readSizeEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(readSizeEdit);

        label_6 = new QLabel(MemoryRW);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(label_6);

        regionLabel = new QLabel(MemoryRW);
        regionLabel->setObjectName(QString::fromUtf8("regionLabel"));
        sizePolicy2.setHeightForWidth(regionLabel->sizePolicy().hasHeightForWidth());
        regionLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(regionLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        readMemBtn = new QPushButton(MemoryRW);
        readMemBtn->setObjectName(QString::fromUtf8("readMemBtn"));

        horizontalLayout_6->addWidget(readMemBtn);

        dumpToFileBtn = new QPushButton(MemoryRW);
        dumpToFileBtn->setObjectName(QString::fromUtf8("dumpToFileBtn"));

        horizontalLayout_6->addWidget(dumpToFileBtn);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        splitter = new QSplitter(MemoryRW);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        hexEdit = new QTextEdit(splitter);
        hexEdit->setObjectName(QString::fromUtf8("hexEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(hexEdit->sizePolicy().hasHeightForWidth());
        hexEdit->setSizePolicy(sizePolicy4);
        hexEdit->setMinimumSize(QSize(610, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setKerning(false);
        hexEdit->setFont(font);
        hexEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        hexEdit->setAcceptRichText(false);
        splitter->addWidget(hexEdit);
        disasmEdit = new QTextEdit(splitter);
        disasmEdit->setObjectName(QString::fromUtf8("disasmEdit"));
        disasmEdit->setMinimumSize(QSize(0, 0));
        disasmEdit->setFont(font);
        disasmEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        disasmEdit->setAcceptRichText(false);
        splitter->addWidget(disasmEdit);

        horizontalLayout_2->addWidget(splitter);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_9 = new QLabel(MemoryRW);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        pidEdit = new QLineEdit(MemoryRW);
        pidEdit->setObjectName(QString::fromUtf8("pidEdit"));
        pidEdit->setEnabled(true);
        sizePolicy1.setHeightForWidth(pidEdit->sizePolicy().hasHeightForWidth());
        pidEdit->setSizePolicy(sizePolicy1);
        pidEdit->setMinimumSize(QSize(50, 0));
        pidEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(pidEdit);

        line_2 = new QFrame(MemoryRW);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        pnameLabel_2 = new QLabel(MemoryRW);
        pnameLabel_2->setObjectName(QString::fromUtf8("pnameLabel_2"));

        horizontalLayout->addWidget(pnameLabel_2);

        iconLabel = new QLabel(MemoryRW);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        sizePolicy1.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy1);
        iconLabel->setMinimumSize(QSize(16, 0));
        iconLabel->setMaximumSize(QSize(24, 24));

        horizontalLayout->addWidget(iconLabel);

        pnameLabel = new QLabel(MemoryRW);
        pnameLabel->setObjectName(QString::fromUtf8("pnameLabel"));

        horizontalLayout->addWidget(pnameLabel);

        line = new QFrame(MemoryRW);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        statusLabel = new QLabel(MemoryRW);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        horizontalLayout->addWidget(statusLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MemoryRW);

        QMetaObject::connectSlotsByName(MemoryRW);
    } // setupUi

    void retranslateUi(QWidget *MemoryRW)
    {
        MemoryRW->setWindowTitle(QCoreApplication::translate("MemoryRW", "Form", nullptr));
        label_8->setText(QCoreApplication::translate("MemoryRW", "Address:", nullptr));
        writeAddrEdit->setText(QCoreApplication::translate("MemoryRW", "0xFFFFF78000000000", nullptr));
        label_10->setText(QCoreApplication::translate("MemoryRW", "Data:", nullptr));
        writeDataEdit->setText(QCoreApplication::translate("MemoryRW", "90 90 90 90 90", nullptr));
        writeMemBtn->setText(QCoreApplication::translate("MemoryRW", "WriteMemory", nullptr));
        writeStringBtn->setText(QCoreApplication::translate("MemoryRW", "WriteString", nullptr));
        label_4->setText(QCoreApplication::translate("MemoryRW", "Address:", nullptr));
        readAddrEdit->setText(QCoreApplication::translate("MemoryRW", "0xFFFFF78000000000", nullptr));
        label_5->setText(QCoreApplication::translate("MemoryRW", "Size:", nullptr));
        readSizeEdit->setText(QCoreApplication::translate("MemoryRW", "0x200", nullptr));
        label_6->setText(QCoreApplication::translate("MemoryRW", "Region:", nullptr));
#if QT_CONFIG(tooltip)
        regionLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        regionLabel->setText(QCoreApplication::translate("MemoryRW", "Unknown...", nullptr));
        readMemBtn->setText(QCoreApplication::translate("MemoryRW", "ReadMemory", nullptr));
        dumpToFileBtn->setText(QCoreApplication::translate("MemoryRW", "DumpToFile", nullptr));
        label_9->setText(QCoreApplication::translate("MemoryRW", "PID:", nullptr));
        pidEdit->setText(QCoreApplication::translate("MemoryRW", "4", nullptr));
        pnameLabel_2->setText(QCoreApplication::translate("MemoryRW", "ProcessName:", nullptr));
        iconLabel->setText(QString());
        pnameLabel->setText(QCoreApplication::translate("MemoryRW", "SYSTEM", nullptr));
        statusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MemoryRW: public Ui_MemoryRW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMORY_2D_RW_H
