#include "mynewstarw8.h"

MyNewStarW8::MyNewStarW8(QObject *parent)
    : MyStar{parent}
{

}

MyNewStarW8::MyNewStarW8(QPainter *pain, int h, double *s, double *p) {

    P = pain;
    H = h;
    double a = sin(M_PI/4) * H; double h1 = (a+H) / 2; double b = a * H / (4 * h1);
    *s = 16 * (H/8) *b;
    *p = 16 * sqrt(pow(b/2,2) +pow(H/4,2));

    drawMyNewStarW8();

}

void MyNewStarW8::drawMyNewStarW8() {

    double R = H/2; double a = sin(M_PI/4) * H; double h1 = (a+H) / 2; double b = a * H / (4 * h1);

    QPolygon pol;

    pol << QPoint(-R, 0) << QPoint(-H/4, -b/2) << QPoint(-a/2, -a/2) << QPoint(-b/2, -H/4)
        << QPoint(0, -R) << QPoint(b/2, -H/4) << QPoint(a/2, -a/2) << QPoint(H/4, -b/2)
        << QPoint(R, 0) << QPoint(H/4, b/2) << QPoint(a/2, a/2) << QPoint(b/2, H/4)<< QPoint(0, R)
        << QPoint(-b/2, H/4) << QPoint(-a/2, a/2) << QPoint(-H/4, b/2) ;


    P->drawPolygon(pol);

}
