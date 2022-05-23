#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "date.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QDate>
#include <QDebug>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


        d = 1;
        m = 1;
        y = 1;
        size=0;
        birthD=1;
        birthM=1;
        change=1;
       /*Date**/ date = new Date[15];
        birthdate.setBirth(1,1);

}

MainWindow::~MainWindow()
{
    delete ui;
      delete date;

}

void MainWindow::on_pushButton_clicked()
{
if(size==10)
{
    QMessageBox::information(this,"","Достигнут максимальный размер");
    return;
}
    date[size].setAll(d,m,y);
    birthdate.setBirth(birthD,birthM);

    QTableWidgetItem *item = new QTableWidgetItem;

    item->setText(date[size].getDate());

    ui->tableWidget->setItem(size, 0, item);




    QTableWidgetItem *item2 = new QTableWidgetItem;

    if(date[size].isLeap(y))
    {

        item2->setText("Yes");
        ui->tableWidget->setItem(size, 3, item2);
    }
            else
    {
       // QTableWidgetItem *item3 = new QTableWidgetItem;
        item2->setText("No");
        ui->tableWidget->setItem(size, 3, item2);
    }




QTableWidgetItem *item3 = new QTableWidgetItem;

    item3->setText(date[size].NextDay(d,m,y).getDate());
    ui->tableWidget->setItem(size, 1, item3);





QTableWidgetItem *item4 = new QTableWidgetItem;
item4->setText(date[size].PreviousDay().getDate());
ui->tableWidget->setItem(size, 2, item4);




QTableWidgetItem *item5 = new QTableWidgetItem;
item5->setText(QString::number(date[size].WeekNumber(d,m,y)));
ui->tableWidget->setItem(size, 4, item5);


QTableWidgetItem *item6 = new QTableWidgetItem;
if(date[size].DaysTillYourBithday(birthdate)==-1)
{
    item6->setText("день рождения сегодня");
}
else
item6->setText(QString::number(date[size].DaysTillYourBithday(birthdate)));
ui->tableWidget->setItem(size, 5, item6);


    if(size!=0)
    {
    QTableWidgetItem *item7 = new QTableWidgetItem;
    item7->setText(QString::number(date[size-1].Duration(date[size])));
    ui->tableWidget->setItem(size-1, 6, item7);
    }

    QTableWidgetItem *item8 = new QTableWidgetItem;
    item8->setText("Последний элемент в списке");
    ui->tableWidget->setItem(size, 6, item8);





    size++;

}





void MainWindow::on_spinBox_valueChanged(int arg1)
{
    d=arg1;
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    m=arg1;
}

void MainWindow::on_spinBox_3_valueChanged(int arg1)
{
    y=arg1;
}


void MainWindow::on_spinBox_4_valueChanged(int arg1)
{
   birthD=arg1;
}

void MainWindow::on_spinBox_5_valueChanged(int arg1)
{
    birthM=arg1;
}

void MainWindow::on_pushButton_2_clicked()
{
    birthdate.setBirth(birthD,birthM);
}

void MainWindow::on_spinBox_6_valueChanged(int arg1)
{

}

void MainWindow::on_pushButton_3_clicked()
{

}
