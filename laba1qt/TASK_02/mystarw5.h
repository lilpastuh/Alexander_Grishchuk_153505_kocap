#ifndef MYSTARW5_H
#define MYSTARW5_H

#include "mystar.h"

class MyStarW5 : public MyStar
{
public:

    explicit MyStarW5(QObject *parent = nullptr);

     MyStarW5(QPainter* pain, int h, double *s, double *p);

private:

    void drawMyStarW5();

    QPainter* P;

    int H;

};

#endif // MYSTARW5_H
