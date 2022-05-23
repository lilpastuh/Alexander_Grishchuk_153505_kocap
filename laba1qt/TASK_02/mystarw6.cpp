#include "mystarw6.h"

MyStarW6::MyStarW6(QObject *parent)
    : MyStar{parent}
{

}

MyStarW6::MyStarW6(QPainter *pain, int h, double *s, double *p) {

    P = pain;
    H = h;

    double a = H/(2 * sqrt(3));
    *s = 3 * pow(a, 2) * sqrt(3);
    *p = 12 * a;

    drawMyStarW6();

}

void MyStarW6::drawMyStarW6() {

    double a = H / (2 * sqrt(3));
    double h = a * sqrt(3) / 2;


    QPolygon pol;

    pol << QPoint (-a, 0) << QPoint (-3 * a/2, -h) << QPoint (-a/2, -h) << QPoint (0, -2 * h) << QPoint (a/2, -h) << QPoint (3 * a/2, -h) << QPoint (a, 0) << QPoint (3 * a/2, h) << QPoint (a/2, h) << QPoint (0, 2*h) << QPoint (-a/2, h) << QPoint (-3 * a/2, h);

    P->drawPolygon(pol);

}
