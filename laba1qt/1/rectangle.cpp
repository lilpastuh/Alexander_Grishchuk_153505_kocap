#include "rectangle.h"
#include "ui_rectangle.h"
#include <iostream>



rectangle::rectangle(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::rectangle)
{

    i=0;
    timer=startTimer(1);
    ui->setupUi(this);
}

rectangle::~rectangle()
{
    delete ui;
}

void rectangle::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter *pen= new QPainter(this);
    pen->setPen(QPen(Qt::black,1));
    pen->setRenderHint(QPainter::Antialiasing);//сглаживание`
    pen->translate(QPoint(i,0));

    pen->drawRect(300,300,200,100);



    delete pen;
}



void rectangle::timerEvent(QTimerEvent *event)
{

    Q_UNUSED(event);

    if(!b){

        if (a)
        {
            i++;
        }

        else
        {
            i--;
        }
    }


    if(i>=1000){

        i=1000;

    }

    else if(i <= 0){

        i = 0;
    }
    repaint();

}


void rectangle::on_pushButton_clicked()
{
    if (a) {

        a = false;
    }

        else a = true;


}

void rectangle::on_pushButton_2_clicked()
{
    if (b) {

            b = false;
        }

        else b = true;

}
