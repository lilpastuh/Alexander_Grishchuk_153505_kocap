#ifndef MYTRIANGLE_H
#define MYTRIANGLE_H

#include "myfigure.h"

class MyTriangle : public MyFigure
{
public:
    explicit MyTriangle(QObject *parent = nullptr);

    MyTriangle(QPainter* pain, int h, int w, int alpha, double *s, double *p);

private:

   void drawMyTriangle();

   QPainter* P;

   int H;
   int W;
   int Alpha;


};

#endif // MYTRIANGLE_H
