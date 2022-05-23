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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QTableWidget *tableWidget;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_2;
    QSpinBox *Math;
    QLabel *label_3;
    QPushButton *AppointInfo;
    QPushButton *DeleteAll;
    QPushButton *Sort;
    QSpinBox *Physics;
    QSpinBox *Russian;
    QSpinBox *spinBox_pos;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *DeleteInfo;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_4;
    QSpinBox *AverageMark;
    QPushButton *AppointAverageMark;
    QTableWidget *tableWidget_2;
    QPushButton *AppointLastName;
    QTableWidget *tableWidget_3;
    QPushButton *AppointTown;
    QTableWidget *tableWidget_4;
    QPushButton *ChooseFile;
    QPushButton *WriteFile;
    QPushButton *ReadFile;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1300, 706);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem16);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 741, 261));
        tableWidget->setMinimumSize(QSize(631, 0));
        tableWidget->setMaximumSize(QSize(16777215, 16777215));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(980, 180, 61, 21));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(920, 210, 121, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(990, 120, 51, 21));
        Math = new QSpinBox(centralwidget);
        Math->setObjectName(QStringLiteral("Math"));
        Math->setGeometry(QRect(1040, 120, 141, 26));
        Math->setMinimum(1);
        Math->setMaximum(10);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(990, 150, 51, 21));
        AppointInfo = new QPushButton(centralwidget);
        AppointInfo->setObjectName(QStringLiteral("AppointInfo"));
        AppointInfo->setGeometry(QRect(750, 0, 161, 41));
        DeleteAll = new QPushButton(centralwidget);
        DeleteAll->setObjectName(QStringLiteral("DeleteAll"));
        DeleteAll->setGeometry(QRect(750, 80, 161, 41));
        Sort = new QPushButton(centralwidget);
        Sort->setObjectName(QStringLiteral("Sort"));
        Sort->setGeometry(QRect(750, 120, 161, 41));
        Physics = new QSpinBox(centralwidget);
        Physics->setObjectName(QStringLiteral("Physics"));
        Physics->setGeometry(QRect(1040, 180, 141, 26));
        Physics->setMinimum(1);
        Physics->setMaximum(10);
        Russian = new QSpinBox(centralwidget);
        Russian->setObjectName(QStringLiteral("Russian"));
        Russian->setGeometry(QRect(1040, 150, 141, 26));
        Russian->setMinimum(1);
        Russian->setMaximum(10);
        spinBox_pos = new QSpinBox(centralwidget);
        spinBox_pos->setObjectName(QStringLiteral("spinBox_pos"));
        spinBox_pos->setGeometry(QRect(1040, 210, 141, 26));
        spinBox_pos->setMinimum(1);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(1040, 0, 141, 26));
        lineEdit->setMaxLength(20);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1000, 0, 41, 21));
        DeleteInfo = new QPushButton(centralwidget);
        DeleteInfo->setObjectName(QStringLiteral("DeleteInfo"));
        DeleteInfo->setGeometry(QRect(750, 40, 161, 41));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(980, 30, 61, 21));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(1040, 30, 141, 26));
        lineEdit_2->setMaxLength(20);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(1040, 60, 141, 26));
        lineEdit_3->setMaxLength(20);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(970, 60, 71, 21));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(990, 90, 51, 21));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(1040, 90, 141, 26));
        lineEdit_4->setMaxLength(20);
        AverageMark = new QSpinBox(centralwidget);
        AverageMark->setObjectName(QStringLiteral("AverageMark"));
        AverageMark->setGeometry(QRect(750, 230, 161, 31));
        AverageMark->setMinimum(1);
        AverageMark->setMaximum(9);
        AppointAverageMark = new QPushButton(centralwidget);
        AppointAverageMark->setObjectName(QStringLiteral("AppointAverageMark"));
        AppointAverageMark->setGeometry(QRect(750, 160, 161, 61));
        tableWidget_2 = new QTableWidget(centralwidget);
        if (tableWidget_2->columnCount() < 7)
            tableWidget_2->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem23);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem24);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 270, 721, 121));
        tableWidget_2->setMinimumSize(QSize(631, 0));
        tableWidget_2->setMaximumSize(QSize(16777215, 16777215));
        AppointLastName = new QPushButton(centralwidget);
        AppointLastName->setObjectName(QStringLiteral("AppointLastName"));
        AppointLastName->setGeometry(QRect(750, 270, 161, 51));
        tableWidget_3 = new QTableWidget(centralwidget);
        if (tableWidget_3->columnCount() < 7)
            tableWidget_3->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(5, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(6, __qtablewidgetitem31);
        if (tableWidget_3->rowCount() < 10)
            tableWidget_3->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(4, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(5, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(6, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(7, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(8, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(9, __qtablewidgetitem41);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(0, 350, 741, 151));
        tableWidget_3->setMinimumSize(QSize(631, 0));
        tableWidget_3->setMaximumSize(QSize(16777215, 16777215));
        AppointTown = new QPushButton(centralwidget);
        AppointTown->setObjectName(QStringLiteral("AppointTown"));
        AppointTown->setGeometry(QRect(750, 340, 161, 51));
        tableWidget_4 = new QTableWidget(centralwidget);
        if (tableWidget_4->columnCount() < 7)
            tableWidget_4->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(4, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(5, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(6, __qtablewidgetitem48);
        if (tableWidget_4->rowCount() < 10)
            tableWidget_4->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(0, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(1, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(2, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(3, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(4, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(5, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(6, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(7, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(8, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(9, __qtablewidgetitem58);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(0, 510, 741, 151));
        tableWidget_4->setMinimumSize(QSize(631, 0));
        tableWidget_4->setMaximumSize(QSize(16777215, 16777215));
        ChooseFile = new QPushButton(centralwidget);
        ChooseFile->setObjectName(QStringLiteral("ChooseFile"));
        ChooseFile->setGeometry(QRect(750, 390, 161, 61));
        WriteFile = new QPushButton(centralwidget);
        WriteFile->setObjectName(QStringLiteral("WriteFile"));
        WriteFile->setGeometry(QRect(750, 450, 161, 61));
        ReadFile = new QPushButton(centralwidget);
        ReadFile->setObjectName(QStringLiteral("ReadFile"));
        ReadFile->setGeometry(QRect(750, 510, 161, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 26));
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
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Last Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Patronymic", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Town", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Math", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Russian", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Physics", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\320\244\320\270\320\267\320\270\320\272\320\260:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\262 \321\201\320\277\320\270\321\201\320\272\320\265:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\202\320\260\320\275:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\240\321\203\321\201\320\272\320\270\320\271:", Q_NULLPTR));
        AppointInfo->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276 \320\275\320\276\320\274\320\265\321\200\321\203", Q_NULLPTR));
        DeleteAll->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265", Q_NULLPTR));
        Sort->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 \320\274\320\260\321\202\320\260\320\275\321\203", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217:", Q_NULLPTR));
        DeleteInfo->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\320\276 \320\275\320\276\320\274\320\265\321\200\321\203", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\321\217:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276:", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\320\264:", Q_NULLPTR));
        AppointAverageMark->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \321\201\321\200\320\265\320\264\320\275\320\270\320\271 \320\261\320\260\320\273\320\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Last Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Patronymic", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Town", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "Math", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "Russian", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "Physics", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        AppointLastName->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \321\204\320\260\320\274\320\270\320\273\320\270\321\216", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "Last Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "Patronymic", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "Town", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "Math", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_3->horizontalHeaderItem(5);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "Russian", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_3->horizontalHeaderItem(6);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "Physics", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_3->verticalHeaderItem(0);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_3->verticalHeaderItem(1);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_3->verticalHeaderItem(2);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_3->verticalHeaderItem(3);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_3->verticalHeaderItem(4);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_3->verticalHeaderItem(5);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_3->verticalHeaderItem(6);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_3->verticalHeaderItem(7);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_3->verticalHeaderItem(8);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_3->verticalHeaderItem(9);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        AppointTown->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\263\320\276\321\200\320\276\320\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "Last Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "Patronymic", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "Town", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget_4->horizontalHeaderItem(4);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "Math", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget_4->horizontalHeaderItem(5);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "Russian", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget_4->horizontalHeaderItem(6);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "Physics", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget_4->verticalHeaderItem(0);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget_4->verticalHeaderItem(1);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget_4->verticalHeaderItem(2);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget_4->verticalHeaderItem(3);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget_4->verticalHeaderItem(4);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget_4->verticalHeaderItem(5);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget_4->verticalHeaderItem(6);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget_4->verticalHeaderItem(7);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget_4->verticalHeaderItem(8);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget_4->verticalHeaderItem(9);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        ChooseFile->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", Q_NULLPTR));
        WriteFile->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\321\214 \320\262 \321\204\320\260\320\271\320\273", Q_NULLPTR));
        ReadFile->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\207\320\270\321\202\320\260\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
