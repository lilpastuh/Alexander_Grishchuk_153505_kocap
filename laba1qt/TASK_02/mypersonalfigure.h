#ifndef MYPERSONALFIGURE_H
#define MYPERSONALFIGURE_H

#include "myfigure.h"

class MyPersonalFigure : public MyFigure
{
public:
    explicit MyPersonalFigure(QObject *parent = nullptr);

    MyPersonalFigure(QPainter* pain, int h, double *s, double *p);

private:

    void drawMyPersonalFigure();

    QPainter* P;
    int H;


};

#endif // MYPERSONALFIGURE_H
