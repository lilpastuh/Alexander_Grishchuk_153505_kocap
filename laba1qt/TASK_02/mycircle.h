#ifndef MYCIRCLE_H
#define MYCIRCLE_H

#include "myfigure.h"
#include <iostream>


class MyCircle : public MyFigure
{
public:
    explicit MyCircle(QObject *parent = nullptr);

    MyCircle(QPainter* pain,int h, double *s, double *p);

private:

    void drawMyCircle();

    QPainter* P;
    int H;

};

#endif // MYCIRCLE_H
