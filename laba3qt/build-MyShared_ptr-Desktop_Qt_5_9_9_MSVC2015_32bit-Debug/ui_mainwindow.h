/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableView *SharedTable;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *EditSharedButton;
    QPushButton *AssignButton;
    QPushButton *SwapSharedButton;
    QTableView *WeakTable;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *WeakToWeakButton;
    QPushButton *WeakToSharedButton;
    QPushButton *SharedToWeakButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1073, 629);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        SharedTable = new QTableView(centralwidget);
        SharedTable->setObjectName(QStringLiteral("SharedTable"));
        SharedTable->setGeometry(QRect(10, 10, 451, 321));
        SharedTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 530, 451, 41));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        EditSharedButton = new QPushButton(layoutWidget);
        EditSharedButton->setObjectName(QStringLiteral("EditSharedButton"));

        gridLayout->addWidget(EditSharedButton, 0, 0, 1, 1);

        AssignButton = new QPushButton(layoutWidget);
        AssignButton->setObjectName(QStringLiteral("AssignButton"));

        gridLayout->addWidget(AssignButton, 0, 1, 1, 1);

        SwapSharedButton = new QPushButton(layoutWidget);
        SwapSharedButton->setObjectName(QStringLiteral("SwapSharedButton"));

        gridLayout->addWidget(SwapSharedButton, 0, 2, 1, 1);

        WeakTable = new QTableView(centralwidget);
        WeakTable->setObjectName(QStringLiteral("WeakTable"));
        WeakTable->setGeometry(QRect(470, 10, 591, 321));
        WeakTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(470, 530, 591, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        WeakToWeakButton = new QPushButton(layoutWidget1);
        WeakToWeakButton->setObjectName(QStringLiteral("WeakToWeakButton"));

        horizontalLayout->addWidget(WeakToWeakButton);

        WeakToSharedButton = new QPushButton(layoutWidget1);
        WeakToSharedButton->setObjectName(QStringLiteral("WeakToSharedButton"));

        horizontalLayout->addWidget(WeakToSharedButton);

        SharedToWeakButton = new QPushButton(layoutWidget1);
        SharedToWeakButton->setObjectName(QStringLiteral("SharedToWeakButton"));

        horizontalLayout->addWidget(SharedToWeakButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1073, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MyShared_ptr", Q_NULLPTR));
        EditSharedButton->setText(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        AssignButton->setText(QApplication::translate("MainWindow", "Assign", Q_NULLPTR));
        SwapSharedButton->setText(QApplication::translate("MainWindow", "Swap", Q_NULLPTR));
        WeakToWeakButton->setText(QApplication::translate("MainWindow", "Weak->Weak", Q_NULLPTR));
        WeakToSharedButton->setText(QApplication::translate("MainWindow", "Weak->Shared", Q_NULLPTR));
        SharedToWeakButton->setText(QApplication::translate("MainWindow", "Shared->Weak", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
