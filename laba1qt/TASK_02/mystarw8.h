#ifndef MYSTARW8_H
#define MYSTARW8_H

#include "mystar.h"

class MyStarW8 : public MyStar
{
public:
    explicit MyStarW8(QObject *parent = nullptr);


    MyStarW8(QPainter* pain, int h) {

       P = pain;
       H = h;

       drawMyStarW8();

   }

private:

   void drawMyStarW8() {

         double R = H/2; double a = sin(M_PI/4) * H; double h1 = H *pow(sin(31*M_PI/72),2); /*double b = a * H/(4*h)*/;


       QPolygon pol;

       pol << QPoint(-R, 0) << QPoint(-a/2, -(R - H +h1))
           << QPoint(0, R) << QPoint(a/2, R - H+ h1) << QPoint(R, 0);


       P->drawPolygon(pol);
//P->drawEllipse(330, 330,333,333);
   }

   QPainter* P;

   int H;


};

#endif // MYSTARW8_H
