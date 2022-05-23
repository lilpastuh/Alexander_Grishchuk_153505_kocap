#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <stack.h>
#include <skobka.h>
#include <cstdlib>
#include <fstream>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    bfigure=0;
    bsquare=0;
    bround=0;
    srand(time(0));

    stack = new Stack();
    ui->ResultLabel->setText("результат");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete stack;
}

bool MainWindow::isRus(QString str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if (str[i].script() == 5) return true;
    }
    return false;
}



QString MainWindow::check(QString str)
{
    bfigure=0;
    bsquare=0;
    bround=0;

    int row = 1;
    int clmn = 1;

    for(int i = 0; i<str.size();i++)
    {
        if (str[i] == '{')
        {
            Skobka skoba('{',row,clmn);
            push(skoba, stack, this);
            bfigure++;
        }
        else if (str[i] == '[')
        {
            Skobka skoba('[',row,clmn);
            push(skoba, stack, this);
            bsquare++;
        }
        else if (str[i] == '(')
        {
            Skobka skoba('(',row,clmn);
            push(skoba, stack, this);
            bround++;
        }



        if (str[i] == '}')
        {

            if (!bfigure || top(stack,stack->curSize, this) != '{')
            {
                return QString::number(row) + " " + QString::number(clmn);
                clean(stack,stack->curSize,this);
            }

            pop(stack,stack->curSize, this);
            bfigure--;

        }
        else if (str[i] == ']')
        {

            if (!bsquare || top(stack,stack->curSize, this) != '[')
            {
                return QString::number(row) + " " + QString::number(clmn);
                clean(stack,stack->curSize,this);
            }

            pop(stack,stack->curSize, this);
            bsquare--;

        }
        else if (str[i] == ')')
        {

            if (!bround || top(stack,stack->curSize, this) != '(')
            {
                return QString::number(row) + " " + QString::number(clmn);
                clean(stack,stack->curSize,this);
            }

            pop(stack,stack->curSize, this);
            bround--;
        }

        clmn++;
        if(str[i] == '\n')
        {
            row++;
            clmn = 1;
        }
    }

    if (bfigure > 0 || bsquare >0 || bround>0)
    {
        for (int i = 0; i<stack->curSize-1;i++)
            pop(stack,stack->curSize,this);

        return pop(stack,stack->curSize,this);
    }
    else
    {
        if (rand()%10 == 0)
            return "SUCCESS";
        else return "SUCCESS";
    }

}


void MainWindow::on_textEdit_textChanged()
{
    QString str;
    str = ui->textEdit->toPlainText();


    ui->ResultLabel->setText(check(str));
}


void MainWindow::on_LoadushButton_clicked()
{
    std::string str;

    QString fileName = QFileDialog::getOpenFileName(this,
           tr("Открыть текстовый файл"), "",
           tr("Текстовый файл (*.txt);;All Files (*)"));

    std::fstream fin;
    fin.open(fileName.toStdString());
    if (!fin.is_open())
    {
        QMessageBox::critical(this, "","Не удалось открыть файл");
        return;
    }
    QString qstr;
    while(!fin.eof())
    {
       fin>>str;
       qstr+=QString::fromStdString(str);
    }

    //QString qstr;
    //qstr.fromStdString(str);

    ui->textEdit->setText(qstr);
    ui->ResultLabel->setText(check(qstr));

    fin.close();
}
struct abba{

};
class asdf{

};
int sadas[10];

