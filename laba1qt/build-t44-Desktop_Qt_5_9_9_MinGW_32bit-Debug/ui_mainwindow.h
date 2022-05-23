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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QListWidget *listBooks;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QTextEdit *find;
    QLineEdit *author;
    QLineEdit *year;
    QLineEdit *publication;
    QLineEdit *pages;
    QLineEdit *name;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 280, 201, 31));
        pushButton->setStyleSheet(QString::fromUtf8("\320\235\320\260\320\266\320\274\320\270\321\202\320\265 \320\264\320\273\321\217 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\262\320\262\320\265\320\264\320\265\320\275\320\275\321\213\321\205 \320\264\320\260\320\275\320\275\321\213\321\205"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 330, 201, 31));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(400, 380, 201, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 10, 121, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 60, 141, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 130, 101, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 180, 101, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 240, 141, 31));
        listBooks = new QListWidget(centralwidget);
        listBooks->setObjectName(QStringLiteral("listBooks"));
        listBooks->setGeometry(QRect(380, 10, 401, 251));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 330, 91, 31));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 330, 91, 31));
        find = new QTextEdit(centralwidget);
        find->setObjectName(QStringLiteral("find"));
        find->setGeometry(QRect(30, 400, 181, 64));
        author = new QLineEdit(centralwidget);
        author->setObjectName(QStringLiteral("author"));
        author->setGeometry(QRect(180, 10, 181, 31));
        author->setMaxLength(12);
        year = new QLineEdit(centralwidget);
        year->setObjectName(QStringLiteral("year"));
        year->setGeometry(QRect(180, 120, 181, 31));
        publication = new QLineEdit(centralwidget);
        publication->setObjectName(QStringLiteral("publication"));
        publication->setGeometry(QRect(180, 180, 181, 31));
        pages = new QLineEdit(centralwidget);
        pages->setObjectName(QStringLiteral("pages"));
        pages->setGeometry(QRect(180, 240, 181, 31));
        name = new QLineEdit(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(180, 60, 181, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
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
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\235\320\260\320\266\320\274\320\270\321\202\320\265 \320\264\320\273\321\217 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\262\320\262\320\265\320\264\320\265\320\275\320\275\321\213\321\205 \320\264\320\260\320\275\320\275\321\213\321\205</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>\320\235\320\260\320\266\320\274\320\270\321\202\320\265 \320\264\320\273\321\217 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\262\320\262\320\265\320\264\320\265\320\275\320\275\321\213\321\205 \320\264\320\260\320\275\320\275\321\213\321\205</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pushButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 \320\260\320\262\321\202\320\276\321\200\320\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\320\223\320\276\320\264 \320\270\320\267\320\264\320\260\320\275\320\270\321\217", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\241\321\202\321\200\320\260\320\275\320\270\321\206", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        find->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\320\236\320\272\320\275\320\276 \320\264\320\273\321\217 \320\277\320\276\320\270\321\201\320\272\320\260</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        author->setInputMask(QApplication::translate("MainWindow", "AAAAAAAAAAAA", Q_NULLPTR));
        author->setText(QString());
        year->setInputMask(QApplication::translate("MainWindow", "9999", Q_NULLPTR));
        publication->setInputMask(QApplication::translate("MainWindow", "AAAAAAAAAAAAAAAAAAAA", Q_NULLPTR));
        pages->setInputMask(QApplication::translate("MainWindow", "9999", Q_NULLPTR));
        name->setInputMask(QApplication::translate("MainWindow", "AAAAAAAAAAAAAAAAAAAA", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
