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
#include <QtWidgets/QFormLayout>
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
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *NumberReis;
    QLabel *label_2;
    QLineEdit *typePlane;
    QLabel *label_3;
    QLineEdit *distanation;
    QLabel *label_4;
    QSpinBox *day;
    QLabel *label_5;
    QSpinBox *month;
    QLabel *label_6;
    QSpinBox *year;
    QLabel *label_7;
    QSpinBox *spinBox_4;
    QPushButton *add;
    QPushButton *change;
    QPushButton *sort;
    QPushButton *del;
    QPushButton *delAll;
    QTableWidget *tableWidget_2;
    QLabel *label_8;
    QPushButton *pushButton;
    QTableWidget *tableWidget_3;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1306, 744);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem13);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(330, 10, 521, 311));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 290, 311));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        NumberReis = new QSpinBox(layoutWidget);
        NumberReis->setObjectName(QStringLiteral("NumberReis"));
        NumberReis->setMinimum(1);
        NumberReis->setMaximum(1000);

        formLayout->setWidget(0, QFormLayout::FieldRole, NumberReis);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        typePlane = new QLineEdit(layoutWidget);
        typePlane->setObjectName(QStringLiteral("typePlane"));

        formLayout->setWidget(1, QFormLayout::FieldRole, typePlane);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        distanation = new QLineEdit(layoutWidget);
        distanation->setObjectName(QStringLiteral("distanation"));

        formLayout->setWidget(2, QFormLayout::FieldRole, distanation);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        day = new QSpinBox(layoutWidget);
        day->setObjectName(QStringLiteral("day"));
        day->setMinimum(1);
        day->setMaximum(31);

        formLayout->setWidget(3, QFormLayout::FieldRole, day);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        month = new QSpinBox(layoutWidget);
        month->setObjectName(QStringLiteral("month"));
        month->setMinimum(1);
        month->setMaximum(12);

        formLayout->setWidget(4, QFormLayout::FieldRole, month);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        year = new QSpinBox(layoutWidget);
        year->setObjectName(QStringLiteral("year"));
        year->setMinimum(1);
        year->setMaximum(2022);

        formLayout->setWidget(5, QFormLayout::FieldRole, year);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        spinBox_4 = new QSpinBox(layoutWidget);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setMinimum(1);

        formLayout->setWidget(6, QFormLayout::FieldRole, spinBox_4);

        add = new QPushButton(layoutWidget);
        add->setObjectName(QStringLiteral("add"));

        formLayout->setWidget(7, QFormLayout::LabelRole, add);

        change = new QPushButton(layoutWidget);
        change->setObjectName(QStringLiteral("change"));

        formLayout->setWidget(7, QFormLayout::FieldRole, change);

        sort = new QPushButton(layoutWidget);
        sort->setObjectName(QStringLiteral("sort"));

        formLayout->setWidget(8, QFormLayout::LabelRole, sort);

        del = new QPushButton(layoutWidget);
        del->setObjectName(QStringLiteral("del"));

        formLayout->setWidget(8, QFormLayout::FieldRole, del);

        delAll = new QPushButton(layoutWidget);
        delAll->setObjectName(QStringLiteral("delAll"));

        formLayout->setWidget(9, QFormLayout::LabelRole, delAll);

        tableWidget_2 = new QTableWidget(centralwidget);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem18);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(330, 350, 521, 71));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 420, 56, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 360, 321, 41));
        tableWidget_3 = new QTableWidget(centralwidget);
        if (tableWidget_3->columnCount() < 4)
            tableWidget_3->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem22);
        if (tableWidget_3->rowCount() < 10)
            tableWidget_3->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(3, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(4, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(5, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(6, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(7, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(8, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(9, __qtablewidgetitem32);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(330, 430, 521, 311));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(2, 527, 311, 31));
        tableWidget_4 = new QTableWidget(centralwidget);
        if (tableWidget_4->columnCount() < 4)
            tableWidget_4->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem36);
        if (tableWidget_4->rowCount() < 10)
            tableWidget_4->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(4, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(5, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(6, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(7, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(8, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(9, __qtablewidgetitem46);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(880, 220, 521, 311));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(920, 130, 351, 31));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(942, 590, 281, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1306, 26));
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
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\200\320\265\320\271\321\201\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\201\320\260\320\274\320\276\320\273\320\265\321\202\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\273\320\265\321\202\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\200\320\265\320\271\321\201\320\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\201\320\260\320\274\320\276\320\273\320\265\321\202\320\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214 \320\262\321\213\320\273\320\265\321\202\320\260", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\320\234\320\265\321\201\321\217\321\206 \320\262\321\213\320\273\320\265\321\202\320\260", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\320\223\320\276\320\264 \320\262\321\213\320\273\320\265\321\202\320\260", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\217\321\207\320\265\320\271\320\272\320\270", Q_NULLPTR));
        add->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        change->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        sort->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 \320\275\320\276\320\274\320\265\321\200\321\203", Q_NULLPTR));
        del->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\277\320\276 \320\275\320\276\320\274\320\265\321\200\321\203", Q_NULLPTR));
        delAll->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\201\320\265", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\200\320\265\320\271\321\201\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\201\320\260\320\274\320\276\320\273\320\265\321\202\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\273\320\265\321\202\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        label_8->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \321\200\320\265\320\271\321\201\320\265 \321\201 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\274 \320\275\320\276\320\274\320\265\321\200\320\276\320\274", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\200\320\265\320\271\321\201\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\201\320\260\320\274\320\276\320\273\320\265\321\202\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\273\320\265\321\202\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_3->verticalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_3->verticalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_3->verticalHeaderItem(2);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_3->verticalHeaderItem(3);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_3->verticalHeaderItem(4);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_3->verticalHeaderItem(5);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_3->verticalHeaderItem(6);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_3->verticalHeaderItem(7);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_3->verticalHeaderItem(8);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_3->verticalHeaderItem(9);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \321\200\320\265\320\271\321\201\320\265 \321\201 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\274 \320\277\321\203\320\275\320\272\321\202\320\276\320\274", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\200\320\265\320\271\321\201\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\201\320\260\320\274\320\276\320\273\320\265\321\202\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\273\320\265\321\202\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_4->verticalHeaderItem(0);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_4->verticalHeaderItem(1);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_4->verticalHeaderItem(2);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_4->verticalHeaderItem(3);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_4->verticalHeaderItem(4);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget_4->verticalHeaderItem(5);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget_4->verticalHeaderItem(6);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget_4->verticalHeaderItem(7);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget_4->verticalHeaderItem(8);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget_4->verticalHeaderItem(9);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \321\200\320\265\320\271\321\201\320\265 \321\201 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\271 \320\264\320\260\321\202\320\276\320\271", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\217\321\207\320\265\320\271\320\272\321\203 \321\201 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\274 \320\277\321\203\320\275\320\272\321\202\320\276\320\274", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
