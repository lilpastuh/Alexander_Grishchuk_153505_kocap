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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLabel *label_11;
    QLineEdit *lineEdit_name;
    QLabel *label_14;
    QSpinBox *spinBox_year;
    QLabel *label_15;
    QLineEdit *lineEdit_book;
    QLabel *label_17;
    QLineEdit *lineEdit_housepubl;
    QLabel *label_18;
    QSpinBox *spinBox_num;
    QPushButton *pushButton_addbook;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_samepub;
    QPushButton *pushButton_keyword;
    QPushButton *pushButton_samepublis;
    QLineEdit *lineEdit_keywordsearch;
    QPushButton *pushButton_findbynsme;
    QLineEdit *lineEdit_findbyname;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_delete;
    QSpinBox *spinBox_edit;
    QSpinBox *spinBox_delete;
    QPushButton *pushButton_addinffromfile;
    QPushButton *pushButton_showall;
    QPushButton *pushButton_sortbyyear;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1500, 800);
        MainWindow->setStyleSheet(QLatin1String(" \n"
"background-color: rgb(235, 255, 222);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(980, 10, 431, 281));
        groupBox_2->setStyleSheet(QLatin1String("font: 9pt \"Segoe Script\";\n"
"background-color: rgb(215, 224, 255);\n"
"color: rgb(0, 0, 0);"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 9pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, label_2);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_11);

        lineEdit_name = new QLineEdit(groupBox_2);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setStyleSheet(QLatin1String("  \n"
"background-color: rgb(251, 255, 184);\n"
"color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_name);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_14);

        spinBox_year = new QSpinBox(groupBox_2);
        spinBox_year->setObjectName(QStringLiteral("spinBox_year"));
        spinBox_year->setStyleSheet(QLatin1String(" \n"
"background-color: rgb(183, 190, 255);\n"
"color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        spinBox_year->setMinimum(1);
        spinBox_year->setMaximum(10000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, spinBox_year);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_15);

        lineEdit_book = new QLineEdit(groupBox_2);
        lineEdit_book->setObjectName(QStringLiteral("lineEdit_book"));
        lineEdit_book->setStyleSheet(QLatin1String("  \n"
"background-color: rgb(251, 255, 184);\n"
" \n"
"color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_book);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_17);

        lineEdit_housepubl = new QLineEdit(groupBox_2);
        lineEdit_housepubl->setObjectName(QStringLiteral("lineEdit_housepubl"));
        lineEdit_housepubl->setStyleSheet(QLatin1String("  \n"
"background-color: rgb(251, 255, 184);\n"
"color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEdit_housepubl);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_18);

        spinBox_num = new QSpinBox(groupBox_2);
        spinBox_num->setObjectName(QStringLiteral("spinBox_num"));
        spinBox_num->setStyleSheet(QLatin1String(" \n"
"background-color: rgb(183, 190, 255);\n"
"color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        spinBox_num->setMinimum(1);
        spinBox_num->setMaximum(10000);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, spinBox_num);

        pushButton_addbook = new QPushButton(groupBox_2);
        pushButton_addbook->setObjectName(QStringLiteral("pushButton_addbook"));
        pushButton_addbook->setStyleSheet(QLatin1String("font: 9pt \"Segoe Script\";\n"
"background-color: rgb(99, 174, 255);\n"
" \n"
"color: rgb(0, 0, 0);"));

        formLayout_2->setWidget(6, QFormLayout::SpanningRole, pushButton_addbook);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));

        formLayout_2->setLayout(7, QFormLayout::LabelRole, verticalLayout_9);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        formLayout_2->setLayout(8, QFormLayout::LabelRole, verticalLayout);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 20, 851, 521));
        tableView->setStyleSheet(QLatin1String("font: 9pt \"Segoe Script\";\n"
"background-color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(85, 170, 255);"));
        tableView->horizontalHeader()->setDefaultSectionSize(160);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(920, 300, 521, 371));
        groupBox->setStyleSheet(QLatin1String("font: 8pt \"Segoe Script\";\n"
" \n"
"background-color: rgb(255, 239, 247);\n"
"background-color: rgb(247, 213, 255);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 240, 483, 111));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_samepub = new QLineEdit(layoutWidget);
        lineEdit_samepub->setObjectName(QStringLiteral("lineEdit_samepub"));
        lineEdit_samepub->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(225, 230, 255);\n"
"color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(lineEdit_samepub, 0, 0, 1, 1);

        pushButton_keyword = new QPushButton(layoutWidget);
        pushButton_keyword->setObjectName(QStringLiteral("pushButton_keyword"));
        pushButton_keyword->setStyleSheet(QLatin1String("font: 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 248, 196);"));

        gridLayout_3->addWidget(pushButton_keyword, 2, 1, 1, 1);

        pushButton_samepublis = new QPushButton(layoutWidget);
        pushButton_samepublis->setObjectName(QStringLiteral("pushButton_samepublis"));
        pushButton_samepublis->setStyleSheet(QLatin1String("font: 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 248, 196);"));

        gridLayout_3->addWidget(pushButton_samepublis, 0, 1, 1, 1);

        lineEdit_keywordsearch = new QLineEdit(layoutWidget);
        lineEdit_keywordsearch->setObjectName(QStringLiteral("lineEdit_keywordsearch"));
        lineEdit_keywordsearch->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(225, 230, 255);\n"
"color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(lineEdit_keywordsearch, 2, 0, 1, 1);

        pushButton_findbynsme = new QPushButton(layoutWidget);
        pushButton_findbynsme->setObjectName(QStringLiteral("pushButton_findbynsme"));
        pushButton_findbynsme->setStyleSheet(QLatin1String("font: 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 248, 196);"));

        gridLayout_3->addWidget(pushButton_findbynsme, 1, 1, 1, 1);

        lineEdit_findbyname = new QLineEdit(layoutWidget);
        lineEdit_findbyname->setObjectName(QStringLiteral("lineEdit_findbyname"));
        lineEdit_findbyname->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(225, 230, 255);\n"
"color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(lineEdit_findbyname, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 60, 451, 81));
        gridLayout_5 = new QGridLayout(layoutWidget1);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_edit = new QPushButton(layoutWidget1);
        pushButton_edit->setObjectName(QStringLiteral("pushButton_edit"));
        pushButton_edit->setStyleSheet(QLatin1String("font: 8pt \"Segoe Script\";\n"
" \n"
"color: rgb(0, 0, 0); \n"
" \n"
"background-color: rgb(168, 255, 153);"));

        gridLayout_2->addWidget(pushButton_edit, 1, 1, 1, 1);

        pushButton_delete = new QPushButton(layoutWidget1);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setStyleSheet(QLatin1String("font: 8pt \"Segoe Script\";\n"
" \n"
"color: rgb(0, 0, 0); \n"
" \n"
"background-color: rgb(168, 255, 153);\n"
" "));

        gridLayout_2->addWidget(pushButton_delete, 0, 1, 1, 1);

        spinBox_edit = new QSpinBox(layoutWidget1);
        spinBox_edit->setObjectName(QStringLiteral("spinBox_edit"));
        spinBox_edit->setStyleSheet(QLatin1String("font: 8pt \"Segoe Script\";\n"
"background-color: rgb(226, 193, 255);\n"
" \n"
"color: rgb(0, 0, 0); \n"
"  "));
        spinBox_edit->setMinimum(1);

        gridLayout_2->addWidget(spinBox_edit, 1, 0, 1, 1);

        spinBox_delete = new QSpinBox(layoutWidget1);
        spinBox_delete->setObjectName(QStringLiteral("spinBox_delete"));
        spinBox_delete->setStyleSheet(QLatin1String("font: 8pt \"Segoe Script\";\n"
"background-color: rgb(226, 193, 255);\n"
" \n"
"color: rgb(0, 0, 0); \n"
"  "));
        spinBox_delete->setMinimum(1);

        gridLayout_2->addWidget(spinBox_delete, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 0, 2, 1);

        pushButton_addinffromfile = new QPushButton(layoutWidget1);
        pushButton_addinffromfile->setObjectName(QStringLiteral("pushButton_addinffromfile"));
        pushButton_addinffromfile->setStyleSheet(QLatin1String("font: 8pt \"Segoe Script\";\n"
" \n"
"color: rgb(0, 0, 0); \n"
" \n"
"background-color: rgb(168, 255, 153);"));

        gridLayout_5->addWidget(pushButton_addinffromfile, 0, 1, 1, 1);

        pushButton_showall = new QPushButton(layoutWidget1);
        pushButton_showall->setObjectName(QStringLiteral("pushButton_showall"));
        pushButton_showall->setStyleSheet(QLatin1String("font: 8pt \"Segoe Script\";\n"
" \n"
"color: rgb(0, 0, 0); \n"
" \n"
"background-color: rgb(168, 255, 153);"));

        gridLayout_5->addWidget(pushButton_showall, 1, 1, 1, 1);

        pushButton_sortbyyear = new QPushButton(groupBox);
        pushButton_sortbyyear->setObjectName(QStringLiteral("pushButton_sortbyyear"));
        pushButton_sortbyyear->setGeometry(QRect(150, 180, 251, 29));
        pushButton_sortbyyear->setStyleSheet(QLatin1String("font: 8pt \"Segoe Script\";\n"
" \n"
"color: rgb(0, 0, 0); \n"
" \n"
"background-color: rgb(168, 255, 153);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 10, 60, 22));
        label->setStyleSheet(QLatin1String("\n"
"color: rgb(0, 0, 0);\n"
"font: 11pt \"Segoe Script\";"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1140, 690, 101, 30));
        pushButton->setStyleSheet(QLatin1String(" \n"
"background-color: rgb(243, 255, 211);\n"
"font: 700 9pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1500, 26));
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
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("MainWindow", "          <html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">INFORMAION ABOUT BOOKS</span></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Author", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Year of publication", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Book name", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Publishing house", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Number of pages", Q_NULLPTR));
        pushButton_addbook->setText(QApplication::translate("MainWindow", "ADD BOOK ", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_keyword->setText(QApplication::translate("MainWindow", "SEARCH BY KEYWORD", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_samepublis->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>dsf</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_samepublis->setText(QApplication::translate("MainWindow", "SHOW ALL BOOKS OF THE SAME PUBLISHER", Q_NULLPTR));
        pushButton_findbynsme->setText(QApplication::translate("MainWindow", "FIND A BOOK BY NAME OR AUTHOR", Q_NULLPTR));
        pushButton_edit->setText(QApplication::translate("MainWindow", "EDIT BOOK ", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("MainWindow", "DELITE BOOK ", Q_NULLPTR));
        pushButton_addinffromfile->setText(QApplication::translate("MainWindow", " ADD INFORM FROM FILE ", Q_NULLPTR));
        pushButton_showall->setText(QApplication::translate("MainWindow", "SHOW ALL", Q_NULLPTR));
        pushButton_sortbyyear->setText(QApplication::translate("MainWindow", " SORT BY YEAR", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">MENU</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "EXIT ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
