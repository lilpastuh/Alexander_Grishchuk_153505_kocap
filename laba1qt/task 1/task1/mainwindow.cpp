#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rectangle.h"
#include "solder.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    i=0;
    rot=90;
    rot2=90;
    timer=startTimer(10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter *pen= new QPainter(this);
    pen->setPen(QPen(Qt::black,3));
    pen->setRenderHint(QPainter::Antialiasing);//сглаживание`
    pen->translate(QPoint(i,0));

    //Rectangle rectangle(pen);

    Solder solder(pen);

    QPainter *hand= new QPainter(this);
    hand->setPen(QPen(Qt::green,3));
    hand->setBrush(QBrush("#3eed3e"));
    hand->translate(QPoint(i+648,298));
    hand->rotate(rot);
//    QPolygon chest;
//    chest<<QPoint(680,290)<<QPoint(660,330)<<QPoint(728,300);
//    hand->drawPolygon(chest);
 hand->drawEllipse(0,0,100,24);






    delete pen;
    delete hand;
}



void MainWindow::timerEvent(QTimerEvent *event)
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

    if(rot <= 90)
    {
     rot = 90;
    }
    if (rot >= 300)
    {
        rot = 300;
    }

        if(c)
        {
            rot++;
        }
        else
        {
            rot--;
        }





 repaint();
}


void MainWindow::on_pushButton_clicked()
{
    if (a) {

        a = false;
    }

        else a = true;


}

void MainWindow::on_pushButton_2_clicked()
{
    if (b) {

            b = false;
        }

        else b = true;

}




void MainWindow::on_pushButton_3_clicked()
{
    if (c) {

            c = false;
        }

        else c = true;

}
