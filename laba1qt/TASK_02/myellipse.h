#ifndef MYELLIPSE_H
#define MYELLIPSE_H

#include "mycircle.h"

class MyEllipse : public MyCircle
{
public:

    explicit MyEllipse(QObject *parent = nullptr);

    MyEllipse(QPainter* pain,int w, int h, double *s, double *p);

private:

    void drawMyEllipse();

    double H;
    double W;
    QPainter* P;

};

#endif // MYELLIPSE_H
