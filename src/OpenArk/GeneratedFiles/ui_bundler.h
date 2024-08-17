/********************************************************************************
** Form generated from reading UI file 'bundler.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUNDLER_H
#define UI_BUNDLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bundler
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *folderLabel;
    QPushButton *openBtn;
    QSplitter *splitter;
    QTableView *filesView;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *scriptEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *iconLabel;
    QPushButton *selectIconBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveBtn;

    void setupUi(QWidget *Bundler)
    {
        if (Bundler->objectName().isEmpty())
            Bundler->setObjectName(QString::fromUtf8("Bundler"));
        Bundler->resize(844, 647);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Bundler->sizePolicy().hasHeightForWidth());
        Bundler->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(Bundler);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Bundler);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_3);

        folderLabel = new QLabel(Bundler);
        folderLabel->setObjectName(QString::fromUtf8("folderLabel"));
        folderLabel->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(folderLabel);

        openBtn = new QPushButton(Bundler);
        openBtn->setObjectName(QString::fromUtf8("openBtn"));
        openBtn->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(openBtn);


        verticalLayout_2->addLayout(horizontalLayout_3);

        splitter = new QSplitter(Bundler);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        filesView = new QTableView(splitter);
        filesView->setObjectName(QString::fromUtf8("filesView"));
        splitter->addWidget(filesView);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        scriptEdit = new QTextEdit(frame);
        scriptEdit->setObjectName(QString::fromUtf8("scriptEdit"));

        verticalLayout->addWidget(scriptEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        iconLabel = new QLabel(frame);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setMaximumSize(QSize(24, 24));
        iconLabel->setStyleSheet(QString::fromUtf8("border:1px solid black;"));

        horizontalLayout_2->addWidget(iconLabel);

        selectIconBtn = new QPushButton(frame);
        selectIconBtn->setObjectName(QString::fromUtf8("selectIconBtn"));

        horizontalLayout_2->addWidget(selectIconBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        saveBtn = new QPushButton(frame);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        saveBtn->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(saveBtn);


        verticalLayout->addLayout(horizontalLayout_2);

        splitter->addWidget(frame);

        verticalLayout_2->addWidget(splitter);


        retranslateUi(Bundler);

        QMetaObject::connectSlotsByName(Bundler);
    } // setupUi

    void retranslateUi(QWidget *Bundler)
    {
        Bundler->setWindowTitle(QCoreApplication::translate("Bundler", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("Bundler", "Folder:", nullptr));
        folderLabel->setText(QString());
        openBtn->setText(QCoreApplication::translate("Bundler", "Open Folde&r", nullptr));
        label_2->setText(QCoreApplication::translate("Bundler", "Launch Script:", nullptr));
        scriptEdit->setHtml(QCoreApplication::translate("Bundler", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei';\">;</span><span style=\" font-family:'Microsoft YaHei'; font-weight:600; color:#00aa00;\">Bundler script manual</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei';\">;</span><span style=\" font-family:'Microsoft YaHei'; font-weight:600; color:#aa0000;\">start</span><span style=\" font-family:'Microsoft YaHei';\"> file param - aysnc execute file</span></p>\n"
"<p style=\" margin-top:0px; margi"
                        "n-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei';\">;</span><span style=\" font-family:'Microsoft YaHei'; font-weight:600; color:#aa0000;\">call</span><span style=\" font-family:'Microsoft YaHei';\"> file param - sync execute file until exited</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei';\">;</span><span style=\" font-family:'Microsoft YaHei'; font-weight:600; color:#aa0000;\">cmd</span><span style=\" font-family:'Microsoft YaHei';\"> param - execute cmd</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei';\">;</span><span style=\" font-family:'Microsoft YaHei'; font-weight:600; color:#aa0000;\">clean</span><span style=\" font-family:'Microsoft YaHei';\"> - remove extr"
                        "acted files</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei';\">;--------------------------------------------------------------------------------------</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei';\">call %root%\\OpenArk32.exe</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei';\">clean</span></p></body></html>", nullptr));
        iconLabel->setText(QString());
        selectIconBtn->setText(QCoreApplication::translate("Bundler", "S&elect ICON", nullptr));
        saveBtn->setText(QCoreApplication::translate("Bundler", "&Save to..", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bundler: public Ui_Bundler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUNDLER_H
