/********************************************************************************
** Form generated from reading UI file 'coderkit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODERKIT_H
#define UI_CODERKIT_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoderKit
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tabCodePoints;
    QFormLayout *formLayout;
    QLabel *label_23;
    QTextEdit *textEdit;
    QLabel *label_3;
    QLineEdit *defaultEdit;
    QLabel *label_2;
    QLineEdit *asciiEdit;
    QLabel *label_4;
    QLineEdit *unicodeEdit;
    QLabel *label_5;
    QLineEdit *utf7Edit;
    QLabel *label_6;
    QLineEdit *utf8Edit;
    QLabel *label_7;
    QLineEdit *utf16Edit;
    QLabel *label_8;
    QLineEdit *butf16Edit;
    QLabel *label_9;
    QLineEdit *utf32Edit;
    QLabel *label_10;
    QLineEdit *butf32Edit;
    QLabel *label_11;
    QLineEdit *gbkEdit;
    QLabel *label_12;
    QLineEdit *big5Edit;
    QLabel *label_13;
    QLineEdit *cp866Edit;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *nullRadio_2;
    QRadioButton *slashxRadio_2;
    QRadioButton *spaceRadio_2;
    QRadioButton *assembleRadio;
    QRadioButton *byteRadio;
    QRadioButton *twoBytesRadio;
    QRadioButton *fourBytesRadio;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QWidget *tabConstants;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLineEdit *doserrEdit;
    QLineEdit *ntstatusEdit;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *hresultEdit;
    QLabel *label_16;
    QTextEdit *msgEdit;
    QLabel *label_17;
    QGroupBox *groupBox_2;
    QPushButton *msgidBtn;
    QWidget *tabAlgorithms;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_20;
    QRadioButton *base64Radio;
    QRadioButton *crc32Radio;
    QRadioButton *md5Radio;
    QRadioButton *sha1Radio;
    QRadioButton *urlencodeRadio;
    QRadioButton *urldecodeRadio;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_18;
    QTextEdit *plainEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *keyLabel;
    QTextEdit *keyEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_19;
    QTextEdit *cipherEdit;
    QWidget *tabAsmTools;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *asmBtn;
    QPushButton *disasmBtn;
    QLabel *label_21;
    QComboBox *platformBox;
    QLabel *label_24;
    QComboBox *byteorderBox;
    QLabel *label_22;
    QRadioButton *nullRadio;
    QRadioButton *spaceRadio;
    QRadioButton *slashxRadio;
    QSpacerItem *horizontalSpacer_2;
    QSplitter *splitter;
    QTextEdit *asmEdit;
    QTextEdit *disasmEdit;

    void setupUi(QWidget *CoderKit)
    {
        if (CoderKit->objectName().isEmpty())
            CoderKit->setObjectName(QString::fromUtf8("CoderKit"));
        CoderKit->resize(1391, 873);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CoderKit->sizePolicy().hasHeightForWidth());
        CoderKit->setSizePolicy(sizePolicy);
        CoderKit->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        horizontalLayout = new QHBoxLayout(CoderKit);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        tabWidget = new QTabWidget(CoderKit);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        tabWidget->setTabPosition(QTabWidget::West);
        tabCodePoints = new QWidget();
        tabCodePoints->setObjectName(QString::fromUtf8("tabCodePoints"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabCodePoints->sizePolicy().hasHeightForWidth());
        tabCodePoints->setSizePolicy(sizePolicy1);
        tabCodePoints->setStyleSheet(QString::fromUtf8(""));
        formLayout = new QFormLayout(tabCodePoints);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_23 = new QLabel(tabCodePoints);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_23->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_23);

        textEdit = new QTextEdit(tabCodePoints);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMaximumSize(QSize(16777215, 130));
        textEdit->setAcceptRichText(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, textEdit);

        label_3 = new QLabel(tabCodePoints);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        defaultEdit = new QLineEdit(tabCodePoints);
        defaultEdit->setObjectName(QString::fromUtf8("defaultEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, defaultEdit);

        label_2 = new QLabel(tabCodePoints);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_2);

        asciiEdit = new QLineEdit(tabCodePoints);
        asciiEdit->setObjectName(QString::fromUtf8("asciiEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, asciiEdit);

        label_4 = new QLabel(tabCodePoints);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        unicodeEdit = new QLineEdit(tabCodePoints);
        unicodeEdit->setObjectName(QString::fromUtf8("unicodeEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, unicodeEdit);

        label_5 = new QLabel(tabCodePoints);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_5);

        utf7Edit = new QLineEdit(tabCodePoints);
        utf7Edit->setObjectName(QString::fromUtf8("utf7Edit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, utf7Edit);

        label_6 = new QLabel(tabCodePoints);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_6);

        utf8Edit = new QLineEdit(tabCodePoints);
        utf8Edit->setObjectName(QString::fromUtf8("utf8Edit"));

        formLayout->setWidget(8, QFormLayout::FieldRole, utf8Edit);

        label_7 = new QLabel(tabCodePoints);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(9, QFormLayout::LabelRole, label_7);

        utf16Edit = new QLineEdit(tabCodePoints);
        utf16Edit->setObjectName(QString::fromUtf8("utf16Edit"));

        formLayout->setWidget(9, QFormLayout::FieldRole, utf16Edit);

        label_8 = new QLabel(tabCodePoints);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(11, QFormLayout::LabelRole, label_8);

        butf16Edit = new QLineEdit(tabCodePoints);
        butf16Edit->setObjectName(QString::fromUtf8("butf16Edit"));

        formLayout->setWidget(11, QFormLayout::FieldRole, butf16Edit);

        label_9 = new QLabel(tabCodePoints);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(12, QFormLayout::LabelRole, label_9);

        utf32Edit = new QLineEdit(tabCodePoints);
        utf32Edit->setObjectName(QString::fromUtf8("utf32Edit"));

        formLayout->setWidget(12, QFormLayout::FieldRole, utf32Edit);

        label_10 = new QLabel(tabCodePoints);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(13, QFormLayout::LabelRole, label_10);

        butf32Edit = new QLineEdit(tabCodePoints);
        butf32Edit->setObjectName(QString::fromUtf8("butf32Edit"));

        formLayout->setWidget(13, QFormLayout::FieldRole, butf32Edit);

        label_11 = new QLabel(tabCodePoints);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(14, QFormLayout::LabelRole, label_11);

        gbkEdit = new QLineEdit(tabCodePoints);
        gbkEdit->setObjectName(QString::fromUtf8("gbkEdit"));

        formLayout->setWidget(14, QFormLayout::FieldRole, gbkEdit);

        label_12 = new QLabel(tabCodePoints);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(15, QFormLayout::LabelRole, label_12);

        big5Edit = new QLineEdit(tabCodePoints);
        big5Edit->setObjectName(QString::fromUtf8("big5Edit"));

        formLayout->setWidget(15, QFormLayout::FieldRole, big5Edit);

        label_13 = new QLabel(tabCodePoints);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(18, QFormLayout::LabelRole, label_13);

        cp866Edit = new QLineEdit(tabCodePoints);
        cp866Edit->setObjectName(QString::fromUtf8("cp866Edit"));

        formLayout->setWidget(18, QFormLayout::FieldRole, cp866Edit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        nullRadio_2 = new QRadioButton(tabCodePoints);
        nullRadio_2->setObjectName(QString::fromUtf8("nullRadio_2"));

        horizontalLayout_4->addWidget(nullRadio_2);

        slashxRadio_2 = new QRadioButton(tabCodePoints);
        slashxRadio_2->setObjectName(QString::fromUtf8("slashxRadio_2"));

        horizontalLayout_4->addWidget(slashxRadio_2);

        spaceRadio_2 = new QRadioButton(tabCodePoints);
        spaceRadio_2->setObjectName(QString::fromUtf8("spaceRadio_2"));

        horizontalLayout_4->addWidget(spaceRadio_2);

        assembleRadio = new QRadioButton(tabCodePoints);
        assembleRadio->setObjectName(QString::fromUtf8("assembleRadio"));

        horizontalLayout_4->addWidget(assembleRadio);

        byteRadio = new QRadioButton(tabCodePoints);
        byteRadio->setObjectName(QString::fromUtf8("byteRadio"));

        horizontalLayout_4->addWidget(byteRadio);

        twoBytesRadio = new QRadioButton(tabCodePoints);
        twoBytesRadio->setObjectName(QString::fromUtf8("twoBytesRadio"));

        horizontalLayout_4->addWidget(twoBytesRadio);

        fourBytesRadio = new QRadioButton(tabCodePoints);
        fourBytesRadio->setObjectName(QString::fromUtf8("fourBytesRadio"));

        horizontalLayout_4->addWidget(fourBytesRadio);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_4);

        label = new QLabel(tabCodePoints);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        tabWidget->addTab(tabCodePoints, QString());
        tabConstants = new QWidget();
        tabConstants->setObjectName(QString::fromUtf8("tabConstants"));
        verticalLayout = new QVBoxLayout(tabConstants);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(tabConstants);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        doserrEdit = new QLineEdit(groupBox);
        doserrEdit->setObjectName(QString::fromUtf8("doserrEdit"));
        doserrEdit->setGeometry(QRect(90, 20, 113, 20));
        ntstatusEdit = new QLineEdit(groupBox);
        ntstatusEdit->setObjectName(QString::fromUtf8("ntstatusEdit"));
        ntstatusEdit->setGeometry(QRect(290, 20, 113, 20));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 20, 61, 21));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(220, 20, 61, 21));
        hresultEdit = new QLineEdit(groupBox);
        hresultEdit->setObjectName(QString::fromUtf8("hresultEdit"));
        hresultEdit->setGeometry(QRect(490, 20, 113, 20));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(420, 20, 61, 21));
        msgEdit = new QTextEdit(groupBox);
        msgEdit->setObjectName(QString::fromUtf8("msgEdit"));
        msgEdit->setGeometry(QRect(90, 60, 511, 61));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 80, 61, 21));

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tabConstants);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        msgidBtn = new QPushButton(groupBox_2);
        msgidBtn->setObjectName(QString::fromUtf8("msgidBtn"));
        msgidBtn->setGeometry(QRect(20, 20, 75, 23));

        verticalLayout->addWidget(groupBox_2);

        tabWidget->addTab(tabConstants, QString());
        tabAlgorithms = new QWidget();
        tabAlgorithms->setObjectName(QString::fromUtf8("tabAlgorithms"));
        verticalLayout_6 = new QVBoxLayout(tabAlgorithms);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_3 = new QGroupBox(tabAlgorithms);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_2->addWidget(label_20);

        base64Radio = new QRadioButton(groupBox_3);
        base64Radio->setObjectName(QString::fromUtf8("base64Radio"));

        horizontalLayout_2->addWidget(base64Radio);

        crc32Radio = new QRadioButton(groupBox_3);
        crc32Radio->setObjectName(QString::fromUtf8("crc32Radio"));

        horizontalLayout_2->addWidget(crc32Radio);

        md5Radio = new QRadioButton(groupBox_3);
        md5Radio->setObjectName(QString::fromUtf8("md5Radio"));

        horizontalLayout_2->addWidget(md5Radio);

        sha1Radio = new QRadioButton(groupBox_3);
        sha1Radio->setObjectName(QString::fromUtf8("sha1Radio"));

        horizontalLayout_2->addWidget(sha1Radio);

        urlencodeRadio = new QRadioButton(groupBox_3);
        urlencodeRadio->setObjectName(QString::fromUtf8("urlencodeRadio"));

        horizontalLayout_2->addWidget(urlencodeRadio);

        urldecodeRadio = new QRadioButton(groupBox_3);
        urldecodeRadio->setObjectName(QString::fromUtf8("urldecodeRadio"));

        horizontalLayout_2->addWidget(urldecodeRadio);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_3->addWidget(label_18);

        plainEdit = new QTextEdit(groupBox_3);
        plainEdit->setObjectName(QString::fromUtf8("plainEdit"));

        verticalLayout_3->addWidget(plainEdit);


        verticalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        keyLabel = new QLabel(groupBox_3);
        keyLabel->setObjectName(QString::fromUtf8("keyLabel"));

        verticalLayout_5->addWidget(keyLabel);

        keyEdit = new QTextEdit(groupBox_3);
        keyEdit->setObjectName(QString::fromUtf8("keyEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(keyEdit->sizePolicy().hasHeightForWidth());
        keyEdit->setSizePolicy(sizePolicy2);
        keyEdit->setMaximumSize(QSize(16777215, 50));

        verticalLayout_5->addWidget(keyEdit);


        verticalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_4->addWidget(label_19);

        cipherEdit = new QTextEdit(groupBox_3);
        cipherEdit->setObjectName(QString::fromUtf8("cipherEdit"));

        verticalLayout_4->addWidget(cipherEdit);


        verticalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_6->addWidget(groupBox_3);

        tabWidget->addTab(tabAlgorithms, QString());
        tabAsmTools = new QWidget();
        tabAsmTools->setObjectName(QString::fromUtf8("tabAsmTools"));
        verticalLayout_7 = new QVBoxLayout(tabAsmTools);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        asmBtn = new QPushButton(tabAsmTools);
        asmBtn->setObjectName(QString::fromUtf8("asmBtn"));

        horizontalLayout_3->addWidget(asmBtn);

        disasmBtn = new QPushButton(tabAsmTools);
        disasmBtn->setObjectName(QString::fromUtf8("disasmBtn"));

        horizontalLayout_3->addWidget(disasmBtn);

        label_21 = new QLabel(tabAsmTools);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_3->addWidget(label_21);

        platformBox = new QComboBox(tabAsmTools);
        platformBox->addItem(QString());
        platformBox->addItem(QString());
        platformBox->addItem(QString());
        platformBox->addItem(QString());
        platformBox->addItem(QString());
        platformBox->addItem(QString());
        platformBox->addItem(QString());
        platformBox->addItem(QString());
        platformBox->addItem(QString());
        platformBox->setObjectName(QString::fromUtf8("platformBox"));

        horizontalLayout_3->addWidget(platformBox);

        label_24 = new QLabel(tabAsmTools);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_3->addWidget(label_24);

        byteorderBox = new QComboBox(tabAsmTools);
        byteorderBox->addItem(QString());
        byteorderBox->addItem(QString());
        byteorderBox->setObjectName(QString::fromUtf8("byteorderBox"));

        horizontalLayout_3->addWidget(byteorderBox);

        label_22 = new QLabel(tabAsmTools);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_3->addWidget(label_22);

        nullRadio = new QRadioButton(tabAsmTools);
        nullRadio->setObjectName(QString::fromUtf8("nullRadio"));

        horizontalLayout_3->addWidget(nullRadio);

        spaceRadio = new QRadioButton(tabAsmTools);
        spaceRadio->setObjectName(QString::fromUtf8("spaceRadio"));

        horizontalLayout_3->addWidget(spaceRadio);

        slashxRadio = new QRadioButton(tabAsmTools);
        slashxRadio->setObjectName(QString::fromUtf8("slashxRadio"));

        horizontalLayout_3->addWidget(slashxRadio);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_3);

        splitter = new QSplitter(tabAsmTools);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        asmEdit = new QTextEdit(splitter);
        asmEdit->setObjectName(QString::fromUtf8("asmEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        asmEdit->setFont(font1);
        asmEdit->setAcceptRichText(false);
        splitter->addWidget(asmEdit);
        disasmEdit = new QTextEdit(splitter);
        disasmEdit->setObjectName(QString::fromUtf8("disasmEdit"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(9);
        disasmEdit->setFont(font2);
        disasmEdit->setAcceptRichText(false);
        splitter->addWidget(disasmEdit);

        verticalLayout_7->addWidget(splitter);

        tabWidget->addTab(tabAsmTools, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(CoderKit);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CoderKit);
    } // setupUi

    void retranslateUi(QWidget *CoderKit)
    {
        CoderKit->setWindowTitle(QCoreApplication::translate("CoderKit", "Form", nullptr));
        label_23->setText(QCoreApplication::translate("CoderKit", "Format:", nullptr));
        label_3->setText(QCoreApplication::translate("CoderKit", "Default:", nullptr));
        label_2->setText(QCoreApplication::translate("CoderKit", "ASCII:", nullptr));
        label_4->setText(QCoreApplication::translate("CoderKit", "UNICODE:", nullptr));
        label_5->setText(QCoreApplication::translate("CoderKit", "UTF-7:", nullptr));
        label_6->setText(QCoreApplication::translate("CoderKit", "UTF-8:", nullptr));
        label_7->setText(QCoreApplication::translate("CoderKit", "UTF-16:", nullptr));
        label_8->setText(QCoreApplication::translate("CoderKit", "UTF-16BE:", nullptr));
        label_9->setText(QCoreApplication::translate("CoderKit", "UTF-32:", nullptr));
        label_10->setText(QCoreApplication::translate("CoderKit", "UTF-32BE:", nullptr));
        label_11->setText(QCoreApplication::translate("CoderKit", "GBK:", nullptr));
        label_12->setText(QCoreApplication::translate("CoderKit", "BIG5:", nullptr));
        label_13->setText(QCoreApplication::translate("CoderKit", "CP866:", nullptr));
        nullRadio_2->setText(QCoreApplication::translate("CoderKit", "null", nullptr));
        slashxRadio_2->setText(QCoreApplication::translate("CoderKit", "\\x", nullptr));
        spaceRadio_2->setText(QCoreApplication::translate("CoderKit", "space", nullptr));
        assembleRadio->setText(QCoreApplication::translate("CoderKit", "assemble", nullptr));
        byteRadio->setText(QCoreApplication::translate("CoderKit", "1 byte", nullptr));
        twoBytesRadio->setText(QCoreApplication::translate("CoderKit", "2 bytes", nullptr));
        fourBytesRadio->setText(QCoreApplication::translate("CoderKit", "4 bytes", nullptr));
        label->setText(QCoreApplication::translate("CoderKit", "Text:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCodePoints), QCoreApplication::translate("CoderKit", "CodePoints", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CoderKit", "Windows Error", nullptr));
        label_14->setText(QCoreApplication::translate("CoderKit", "DosError:", nullptr));
        label_15->setText(QCoreApplication::translate("CoderKit", "NTSTATUS:", nullptr));
        label_16->setText(QCoreApplication::translate("CoderKit", "HRESULT:", nullptr));
        label_17->setText(QCoreApplication::translate("CoderKit", "Message:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CoderKit", "Windows GUI", nullptr));
        msgidBtn->setText(QCoreApplication::translate("CoderKit", "Message ID", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabConstants), QCoreApplication::translate("CoderKit", "Constants", nullptr));
        groupBox_3->setTitle(QString());
        label_20->setText(QCoreApplication::translate("CoderKit", "Type:", nullptr));
        base64Radio->setText(QCoreApplication::translate("CoderKit", "Base64", nullptr));
        crc32Radio->setText(QCoreApplication::translate("CoderKit", "CRC32", nullptr));
        md5Radio->setText(QCoreApplication::translate("CoderKit", "MD5", nullptr));
        sha1Radio->setText(QCoreApplication::translate("CoderKit", "SHA1", nullptr));
        urlencodeRadio->setText(QCoreApplication::translate("CoderKit", "URL-Encode", nullptr));
        urldecodeRadio->setText(QCoreApplication::translate("CoderKit", "URL-Decode", nullptr));
        label_18->setText(QCoreApplication::translate("CoderKit", "PlainText:", nullptr));
        keyLabel->setText(QCoreApplication::translate("CoderKit", "Key:", nullptr));
        label_19->setText(QCoreApplication::translate("CoderKit", "CipherText:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAlgorithms), QCoreApplication::translate("CoderKit", "Algorithms", nullptr));
        asmBtn->setText(QCoreApplication::translate("CoderKit", "Assemble", nullptr));
        disasmBtn->setText(QCoreApplication::translate("CoderKit", "Disassemble", nullptr));
        label_21->setText(QCoreApplication::translate("CoderKit", "Platform:", nullptr));
        platformBox->setItemText(0, QCoreApplication::translate("CoderKit", "x64", nullptr));
        platformBox->setItemText(1, QCoreApplication::translate("CoderKit", "x86", nullptr));
        platformBox->setItemText(2, QCoreApplication::translate("CoderKit", "x86-16", nullptr));
        platformBox->setItemText(3, QCoreApplication::translate("CoderKit", "arm64", nullptr));
        platformBox->setItemText(4, QCoreApplication::translate("CoderKit", "arm32", nullptr));
        platformBox->setItemText(5, QCoreApplication::translate("CoderKit", "arm16", nullptr));
        platformBox->setItemText(6, QCoreApplication::translate("CoderKit", "mips64", nullptr));
        platformBox->setItemText(7, QCoreApplication::translate("CoderKit", "mips32", nullptr));
        platformBox->setItemText(8, QCoreApplication::translate("CoderKit", "mips16", nullptr));

        label_24->setText(QCoreApplication::translate("CoderKit", "ByteOrder:", nullptr));
        byteorderBox->setItemText(0, QCoreApplication::translate("CoderKit", "little-endian", nullptr));
        byteorderBox->setItemText(1, QCoreApplication::translate("CoderKit", "big-endian", nullptr));

        label_22->setText(QCoreApplication::translate("CoderKit", "Format:", nullptr));
        nullRadio->setText(QCoreApplication::translate("CoderKit", "null", nullptr));
        spaceRadio->setText(QCoreApplication::translate("CoderKit", "space", nullptr));
        slashxRadio->setText(QCoreApplication::translate("CoderKit", "\\x", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAsmTools), QCoreApplication::translate("CoderKit", "AsmTools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoderKit: public Ui_CoderKit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODERKIT_H
