#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <QPainter>
#include <QObject>
#include "mainwindow.h"


class Rectangle : public QObject
{
    Q_OBJECT
public:


    explicit Rectangle(QObject *parent = nullptr);

    Rectangle(QPainter* pencil);

private:

    QPainter *P;
    void drawMyRectangle();
};

#endif // RECTANGLE_H
