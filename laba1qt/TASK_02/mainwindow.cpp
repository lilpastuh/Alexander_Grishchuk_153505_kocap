#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mysquare.h"
#include "mycircle.h"
#include "myellipse.h"
#include "myrectangle.h"
#include "myrhombus.h"
#include "myhexagon.h"
#include "mystar.h"
#include "mystarw5.h"
#include "mystarw6.h"
#include "mystarw8.h"
#include "mynewstarw8.h"
#include "mytriangle.h"
#include "mypersonalfigure.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    x = 0; y = 0; h = 0; rot = 0; w = 0;

    X = 0; Y = 0; H = 0; Rot = 0; W = 0;

    alpha = 1; Alpha = 1;

    area = 0; perimetr = 0;

    Timer = startTimer(1000/300);

    choice = "Square";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerEvent(QTimerEvent *e) {

    Q_UNUSED(e);

   if(x < X) x++;
   else if(x > X) x--;

   if(y < Y) y++;
   else if(y > Y) y--;

   if(h < H) h++;
   else if(h > H) h--;

   if(rot < Rot) rot++;
   else if(rot > Rot) rot--;

   if(w < W) w++;
   else if(w > W) w--;

   if(alpha < Alpha) alpha++;
   else if(alpha > Alpha) alpha--;

    repaint();
}

void MainWindow::paintEvent(QPaintEvent *e) {

    Q_UNUSED(e);

    QPainter* p3 = new QPainter(this);

    p3->setRenderHint(QPainter::Antialiasing);
    p3->setPen(QPen(Qt::red, 2));
    if(a){

        p3->drawLine(x + 4, y, x - 4, y);
        p3->drawLine(x, y + 4, x, y - 4);

    }

    QPainter* painter = new QPainter(this);

    painter->setPen(QPen(Qt::black,3));
    painter->setRenderHint(QPainter::Antialiasing);

    painter->translate(QPoint(x, y));
    painter->rotate(rot);

    if(choice == "Square")
        MySquare square(painter, h, &area, &perimetr);

    else if(choice == "Circle")
        MyCircle circle(painter, h, &area, &perimetr);

    else if(choice == "Ellipse")
        MyEllipse ellipse(painter, w, h, &area, &perimetr) ;

    else if(choice == "Rectangle")
        MyRectangle rectangle(painter, w, h, &area, &perimetr);

    else if(choice == "Rhombus")
        MyRhombus rhombus(painter, w, h, &area, &perimetr);

    else if(choice == "Hexagon")
        MyHexagon hexagon(painter, h, &area, &perimetr);

    else if(choice == "Star(5)")
        MyStarW5 starW5(painter, h, &area, &perimetr);

    else if(choice == "Star(8)")
        MyNewStarW8 starW8(painter, h, &area, &perimetr);

    else if(choice == "Star(6)")
        MyStarW6 starW6(painter, h, &area, &perimetr);

    else if(choice == "Triangle")
        MyTriangle triangle(painter, h, w, alpha, &area, &perimetr);

    else if(choice == "MyFigure")
        MyPersonalFigure myPersonalFigure(painter, h, &area, &perimetr);

    ui->label_10->setNum(perimetr);
    ui->label_9->setNum(area);

    QPainter* p2 = new QPainter(this);
    p2->setPen(QPen(Qt::black, 4));
    p2->drawRect(2, 2, 1000, 790);
    p2->setBrush(QBrush("white"));
    p2->drawRect(1000, 2, 1600, 790);


    p2->setPen(QPen(Qt::black, 4));
    p2->setBrush(QBrush("#d1d1d1"));
    p2->drawRect(1275, 100, 125, 25);
    p2->drawRect(1275, 130, 125, 25);
    p2->drawRect(1100, 220, 400, 340);
    delete painter;
    delete p2;
    delete p3;

}

void MainWindow::on_spinBox_x_valueChanged(int arg1)
{
    X = arg1;
}


void MainWindow::on_spinBox_y_valueChanged(int arg1)
{
    Y = arg1;
}


void MainWindow::on_spinBox_h_valueChanged(int arg1)
{
    H = arg1;
}

void MainWindow::on_spinBox_rotate_valueChanged(int arg1)
{
    Rot = arg1;
}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    choice = arg1;
}

void MainWindow::on_spinBox_Width_valueChanged(int arg1)
{
    W = arg1;
}


void MainWindow::on_spinBox_rotate_2_valueChanged(int arg1)
{
    Alpha = arg1;
}


void MainWindow::on_radioButton_clicked()
{
    if (a) {

        a = false;
    }

    else a = true;
}


void MainWindow::on_pushButton_clicked()
{
    Dialog app;
        app.setModal(1);
        app.exec();
}

