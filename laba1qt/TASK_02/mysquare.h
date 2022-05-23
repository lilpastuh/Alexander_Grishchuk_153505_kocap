#ifndef MYSQARE_H
#define MYSQARE_H

#include "myfigure.h"

class MySquare : public MyFigure{

public:

    explicit MySquare(QObject *parent = nullptr);

    MySquare(QPainter* pain,int h, double *s, double *p);

private:

    void drawMySquare();

    QPainter* P;
    int H;
};

#endif // MYSQARE_H

