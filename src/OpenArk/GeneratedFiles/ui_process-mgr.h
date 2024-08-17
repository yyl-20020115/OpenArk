/********************************************************************************
** Form generated from reading UI file 'process-mgr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESS_2D_MGR_H
#define UI_PROCESS_2D_MGR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessMgr
{
public:
    QAction *actionHideUnnamed;
    QAction *actionHideUncommited;
    QAction *actionHideNonExecute;
    QAction *actionHideImage;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTreeView *processView;
    QTreeView *moduleView;

    void setupUi(QWidget *ProcessMgr)
    {
        if (ProcessMgr->objectName().isEmpty())
            ProcessMgr->setObjectName(QString::fromUtf8("ProcessMgr"));
        ProcessMgr->resize(808, 650);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProcessMgr->sizePolicy().hasHeightForWidth());
        ProcessMgr->setSizePolicy(sizePolicy);
        actionHideUnnamed = new QAction(ProcessMgr);
        actionHideUnnamed->setObjectName(QString::fromUtf8("actionHideUnnamed"));
        actionHideUnnamed->setCheckable(true);
        actionHideUncommited = new QAction(ProcessMgr);
        actionHideUncommited->setObjectName(QString::fromUtf8("actionHideUncommited"));
        actionHideUncommited->setCheckable(true);
        actionHideNonExecute = new QAction(ProcessMgr);
        actionHideNonExecute->setObjectName(QString::fromUtf8("actionHideNonExecute"));
        actionHideNonExecute->setCheckable(true);
        actionHideImage = new QAction(ProcessMgr);
        actionHideImage->setObjectName(QString::fromUtf8("actionHideImage"));
        actionHideImage->setCheckable(true);
        verticalLayout = new QVBoxLayout(ProcessMgr);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(ProcessMgr);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        processView = new QTreeView(splitter);
        processView->setObjectName(QString::fromUtf8("processView"));
        processView->setEnabled(true);
        QFont font;
        font.setKerning(true);
        processView->setFont(font);
        processView->setItemsExpandable(true);
        splitter->addWidget(processView);
        moduleView = new QTreeView(splitter);
        moduleView->setObjectName(QString::fromUtf8("moduleView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(moduleView->sizePolicy().hasHeightForWidth());
        moduleView->setSizePolicy(sizePolicy1);
        moduleView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        moduleView->setIndentation(5);
        moduleView->setItemsExpandable(true);
        splitter->addWidget(moduleView);
        moduleView->header()->setMinimumSectionSize(25);

        verticalLayout->addWidget(splitter);


        retranslateUi(ProcessMgr);

        QMetaObject::connectSlotsByName(ProcessMgr);
    } // setupUi

    void retranslateUi(QWidget *ProcessMgr)
    {
        ProcessMgr->setWindowTitle(QCoreApplication::translate("ProcessMgr", "Form", nullptr));
        actionHideUnnamed->setText(QCoreApplication::translate("ProcessMgr", "Hide Unnamed Handles", nullptr));
        actionHideUncommited->setText(QCoreApplication::translate("ProcessMgr", "Hide Uncommited Memory", nullptr));
        actionHideNonExecute->setText(QCoreApplication::translate("ProcessMgr", "Hide NonExecute Memory", nullptr));
        actionHideImage->setText(QCoreApplication::translate("ProcessMgr", "Hide Image Memory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcessMgr: public Ui_ProcessMgr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESS_2D_MGR_H
