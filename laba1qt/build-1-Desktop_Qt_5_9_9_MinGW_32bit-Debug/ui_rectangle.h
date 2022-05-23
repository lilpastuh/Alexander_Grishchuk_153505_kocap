/********************************************************************************
** Form generated from reading UI file 'rectangle.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECTANGLE_H
#define UI_RECTANGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rectangle
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *rectangle)
    {
        if (rectangle->objectName().isEmpty())
            rectangle->setObjectName(QStringLiteral("rectangle"));
        rectangle->resize(800, 600);
        centralwidget = new QWidget(rectangle);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 460, 161, 28));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 460, 161, 28));
        rectangle->setCentralWidget(centralwidget);
        menubar = new QMenuBar(rectangle);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        rectangle->setMenuBar(menubar);
        statusbar = new QStatusBar(rectangle);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        rectangle->setStatusBar(statusbar);

        retranslateUi(rectangle);

        QMetaObject::connectSlotsByName(rectangle);
    } // setupUi

    void retranslateUi(QMainWindow *rectangle)
    {
        rectangle->setWindowTitle(QApplication::translate("rectangle", "rectangle", Q_NULLPTR));
        pushButton->setText(QApplication::translate("rectangle", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("rectangle", "\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class rectangle: public Ui_rectangle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTANGLE_H
