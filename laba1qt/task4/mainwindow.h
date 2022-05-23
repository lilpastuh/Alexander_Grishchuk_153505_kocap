#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "database.h"
#include <QTextStream>
#include <QString>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_addbook_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_edit_clicked();

//    void on_pushButton_addinffromfile_clicked();


    void on_pushButton_samepublis_clicked();

    void on_pushButton_findbynsme_clicked();

    void on_pushButton_keyword_clicked();

    void on_lineEdit_name_textEdited(const QString &arg1);

    void on_spinBox_year_valueChanged(int arg1);

    void on_lineEdit_book_textEdited(const QString &arg1);

    void on_lineEdit_housepubl_textEdited(const QString &arg1);

    void on_spinBox_num_valueChanged(int arg1);

    void on_spinBox_delete_valueChanged(int arg1);

    void on_spinBox_edit_valueChanged(int arg1);

    void on_pushButton_showall_clicked();

    void on_lineEdit_samepub_textEdited(const QString &arg1);

    void on_lineEdit_keywordsearch_textEdited(const QString &arg1);

    void on_lineEdit_findbyname_textEdited(const QString &arg1);

    void on_pushButton_sortbyyear_clicked();

    void on_pushButton_clicked();

    void on_pushButton_addinffromfile_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    QModelIndex index;

    Database* List;
    Database* List_sort;


    int size;

       int size_sort;


       QString Way;
       std::string way,fileOpen;

       int bufyear;
       int bufnum;
       QString bufauthor, bufpublisher_house,buf_book;

       QString Author;
       QString Publisher_house;
       QString Name_of_book;
       int Year;
       int Num_of_pages;

       int N;
       int upd;
       int del;
       bool sh;
       bool nb;
       bool kw;
       QString publisherhouse, bookname, keyword;

       bool F_click;//для файла чтобы нелььзя было открывать файл больше 2-х раз
       bool file_click;
       bool first_file_click;
       bool file_check();
       void file_way_change();


      bool isRus(QString str, QString str2 = " ",QString str3 = " ");

       void add();
       void delet();
       void edit();
       void rewrite();

       void file_add();
       void fileWay();
       void file_rewrite();

       void findbook();
       void find_by_keyword();
       void showbypub();
       void rewrite_sort();
       void sortbyyears();
       bool findkey(QString bn0);
       bool IsDigit(char s);


};
#endif // MAINWINDOW_H
