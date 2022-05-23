#ifndef MYSTARW6_H
#define MYSTARW6_H

#include "mystar.h"

class MyStarW6 : public MyStar
{
public:
    explicit MyStarW6(QObject *parent = nullptr);

     MyStarW6(QPainter* pain, int h, double *s, double *p);

private:

    void drawMyStarW6();

    QPainter* P;

    int H;

};

#endif // MYSTARW6_H
