#ifndef MYRECTANGLE_H
#define MYRECTANGLE_H

#include "mysquare.h"

class MyRectangle : public MySquare
{
public:
    explicit MyRectangle(QObject *parent = nullptr);

    MyRectangle(QPainter* pain, int w, int h, double *s, double *p);

private:

    void drawMyRectangle();

    QPainter* P;
    int H;
    int W;

};

#endif // MYRECTANGLE_H
