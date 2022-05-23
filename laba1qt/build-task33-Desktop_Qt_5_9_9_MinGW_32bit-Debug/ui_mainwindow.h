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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *ChangeDataPushButton;
    QTableWidget *DateTable;
    QSpinBox *DaySpinBox;
    QSpinBox *MonthSpinBox;
    QSpinBox *YearSpinBox;
    QPushButton *DeleteDataPushButton;
    QPushButton *SaveAsDataPushButton;
    QPushButton *LoadDataPushButton;
    QPushButton *EnterDataPushButton;
    QPushButton *EnterBirthPushButton;
    QSpinBox *Number;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1413, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ChangeDataPushButton = new QPushButton(centralwidget);
        ChangeDataPushButton->setObjectName(QStringLiteral("ChangeDataPushButton"));
        ChangeDataPushButton->setGeometry(QRect(10, 340, 111, 28));
        DateTable = new QTableWidget(centralwidget);
        if (DateTable->columnCount() < 7)
            DateTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        DateTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        DateTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        DateTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        DateTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        DateTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        DateTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        DateTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (DateTable->rowCount() < 10)
            DateTable->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        DateTable->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        DateTable->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        DateTable->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        DateTable->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        DateTable->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        DateTable->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        DateTable->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        DateTable->setVerticalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        DateTable->setVerticalHeaderItem(8, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        DateTable->setVerticalHeaderItem(9, __qtablewidgetitem16);
        DateTable->setObjectName(QStringLiteral("DateTable"));
        DateTable->setGeometry(QRect(35, 11, 981, 251));
        DaySpinBox = new QSpinBox(centralwidget);
        DaySpinBox->setObjectName(QStringLiteral("DaySpinBox"));
        DaySpinBox->setGeometry(QRect(30, 430, 42, 22));
        DaySpinBox->setMinimum(1);
        DaySpinBox->setMaximum(31);
        MonthSpinBox = new QSpinBox(centralwidget);
        MonthSpinBox->setObjectName(QStringLiteral("MonthSpinBox"));
        MonthSpinBox->setGeometry(QRect(120, 430, 42, 22));
        MonthSpinBox->setMinimum(1);
        MonthSpinBox->setMaximum(12);
        YearSpinBox = new QSpinBox(centralwidget);
        YearSpinBox->setObjectName(QStringLiteral("YearSpinBox"));
        YearSpinBox->setGeometry(QRect(220, 430, 42, 22));
        YearSpinBox->setMinimum(1);
        YearSpinBox->setMaximum(2022);
        DeleteDataPushButton = new QPushButton(centralwidget);
        DeleteDataPushButton->setObjectName(QStringLiteral("DeleteDataPushButton"));
        DeleteDataPushButton->setGeometry(QRect(180, 340, 93, 28));
        SaveAsDataPushButton = new QPushButton(centralwidget);
        SaveAsDataPushButton->setObjectName(QStringLiteral("SaveAsDataPushButton"));
        SaveAsDataPushButton->setGeometry(QRect(330, 340, 93, 28));
        LoadDataPushButton = new QPushButton(centralwidget);
        LoadDataPushButton->setObjectName(QStringLiteral("LoadDataPushButton"));
        LoadDataPushButton->setGeometry(QRect(480, 340, 93, 28));
        EnterDataPushButton = new QPushButton(centralwidget);
        EnterDataPushButton->setObjectName(QStringLiteral("EnterDataPushButton"));
        EnterDataPushButton->setGeometry(QRect(640, 340, 93, 28));
        EnterBirthPushButton = new QPushButton(centralwidget);
        EnterBirthPushButton->setObjectName(QStringLiteral("EnterBirthPushButton"));
        EnterBirthPushButton->setGeometry(QRect(790, 340, 93, 28));
        Number = new QSpinBox(centralwidget);
        Number->setObjectName(QStringLiteral("Number"));
        Number->setGeometry(QRect(310, 430, 42, 22));
        Number->setMinimum(1);
        Number->setMaximum(10);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1413, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        ChangeDataPushButton->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\321\202\321\203", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = DateTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = DateTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = DateTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = DateTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = DateTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = DateTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = DateTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = DateTable->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = DateTable->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = DateTable->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = DateTable->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = DateTable->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = DateTable->verticalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = DateTable->verticalHeaderItem(6);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = DateTable->verticalHeaderItem(7);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = DateTable->verticalHeaderItem(8);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = DateTable->verticalHeaderItem(9);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", Q_NULLPTR));
        DeleteDataPushButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\264\320\260\321\202\321\203", Q_NULLPTR));
        SaveAsDataPushButton->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\264\320\260\321\202\321\203", Q_NULLPTR));
        LoadDataPushButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\264\320\260\321\202\321\203", Q_NULLPTR));
        EnterDataPushButton->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\264\320\260\321\202\321\203", Q_NULLPTR));
        EnterBirthPushButton->setText(QApplication::translate("MainWindow", "\320\224\320\240", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
