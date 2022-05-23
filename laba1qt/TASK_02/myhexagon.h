#ifndef MYHEXAGON_H
#define MYHEXAGON_H

#include "myfigure.h"

class MyHexagon : public MyFigure
{
public:
    explicit MyHexagon(QObject *parent = nullptr);

    MyHexagon(QPainter* pain, int h, double *s, double *p);

private:

    void drawMyHexagon();

    QPainter* P;
    int H;

};

#endif // MYHEXAGON_H
