#ifndef MYNEWSTARW8_H
#define MYNEWSTARW8_H

#include "mystar.h"

class MyNewStarW8 : public MyStar
{
public:
    explicit MyNewStarW8(QObject *parent = nullptr);

    MyNewStarW8(QPainter* pain, int h, double *s, double *p);

private:

   void drawMyNewStarW8();

   QPainter* P;

   int H;

};

#endif // MYNEWSTARW8_H
