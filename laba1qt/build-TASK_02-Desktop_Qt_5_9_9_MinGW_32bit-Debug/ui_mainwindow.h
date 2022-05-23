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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QSpinBox *spinBox_x;
    QSpinBox *spinBox_y;
    QSpinBox *spinBox_h;
    QSpinBox *spinBox_rotate;
    QComboBox *comboBox;
    QSpinBox *spinBox_Width;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *spinBox_rotate_2;
    QLabel *label_11;
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1491, 797);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        spinBox_x = new QSpinBox(centralwidget);
        spinBox_x->setObjectName(QStringLiteral("spinBox_x"));
        spinBox_x->setGeometry(QRect(1340, 240, 91, 29));
        spinBox_x->setMinimumSize(QSize(0, 29));
        spinBox_x->setMaximum(500);
        spinBox_y = new QSpinBox(centralwidget);
        spinBox_y->setObjectName(QStringLiteral("spinBox_y"));
        spinBox_y->setGeometry(QRect(1340, 280, 91, 29));
        spinBox_y->setMinimumSize(QSize(91, 29));
        spinBox_y->setMaximum(400);
        spinBox_h = new QSpinBox(centralwidget);
        spinBox_h->setObjectName(QStringLiteral("spinBox_h"));
        spinBox_h->setGeometry(QRect(1340, 320, 91, 29));
        spinBox_h->setMinimum(1);
        spinBox_h->setMaximum(1000);
        spinBox_rotate = new QSpinBox(centralwidget);
        spinBox_rotate->setObjectName(QStringLiteral("spinBox_rotate"));
        spinBox_rotate->setGeometry(QRect(1340, 400, 91, 29));
        spinBox_rotate->setMinimum(-360);
        spinBox_rotate->setMaximum(360);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(1340, 480, 82, 28));
        spinBox_Width = new QSpinBox(centralwidget);
        spinBox_Width->setObjectName(QStringLiteral("spinBox_Width"));
        spinBox_Width->setGeometry(QRect(1340, 360, 91, 29));
        spinBox_Width->setMinimumSize(QSize(91, 29));
        spinBox_Width->setMaximumSize(QSize(91, 29));
        spinBox_Width->setMinimum(1);
        spinBox_Width->setMaximum(1000);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1190, 240, 161, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1190, 280, 161, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(1220, 320, 111, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1210, 360, 121, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(1190, 400, 161, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1240, 480, 111, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1280, 100, 81, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1280, 130, 81, 20));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(1360, 130, 63, 20));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(1360, 100, 63, 20));
        spinBox_rotate_2 = new QSpinBox(centralwidget);
        spinBox_rotate_2->setObjectName(QStringLiteral("spinBox_rotate_2"));
        spinBox_rotate_2->setGeometry(QRect(1340, 440, 91, 29));
        spinBox_rotate_2->setMinimumSize(QSize(91, 29));
        spinBox_rotate_2->setMinimum(2);
        spinBox_rotate_2->setMaximum(179);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(1120, 440, 261, 20));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(1340, 530, 110, 24));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1230, 530, 93, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1491, 26));
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
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Square", Q_NULLPTR)
         << QApplication::translate("MainWindow", "MyFigure", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Triangle", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Star(5)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Star(6)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Star(8)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Hexagon", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Rhombus", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Rectangle", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Ellipse", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Circle", Q_NULLPTR)
        );
        label->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \321\206\320\265\320\275\321\202\321\200\320\260 X", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \321\206\320\265\320\275\321\202\321\200\320\260 Y", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\201\320\276\321\202\320\260 \321\204\320\270\320\263\321\203\321\200\321\213", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\320\250\320\270\321\200\320\270\320\275\320\260 \321\204\320\270\320\263\321\203\321\200\321\213", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\277\320\276\320\262\320\276\321\200\320\276\321\202\320\260 \321\204\320\270\320\263\321\203\321\200\321\213", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\204\320\270\320\263\321\203\321\200\321\213", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\274\320\265\321\202\321\200:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214:", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\277\321\200\320\270 \320\276\321\201\320\275\320\276\320\262\320\276\320\275\320\270\320\270 \321\203 \321\202\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\260", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Canvas", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
