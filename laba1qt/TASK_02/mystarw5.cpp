#include "mystarw5.h"


MyStarW5::MyStarW5(QPainter *pain, int h, double *s, double *p) {

    P = pain;
    H = h;

    double a = H / (cos(2 * M_PI/5) * tan(2 * M_PI/5) * (1 + 1 / cos(2 * M_PI/5)));
    double b = a / (2 * cos(2 * M_PI/5));
    double h1 = H * (2 * a + b)/b;
    double r = a/(2 * sin(M_PI/5));

    *s = 10 * b;
    *p = 2.5 *b * h1 + 0.5 *pow(r, 2) * sin(2 * M_PI/5);

    drawMyStarW5();

}

void MyStarW5::drawMyStarW5() {

    double a = H / (cos(2 * M_PI/5) * tan(2 * M_PI/5) * (1 + 1 / cos(2 * M_PI/5)));

    double b = a / (2 * cos(2 * M_PI/5));

    QPolygon pol;

    pol << QPoint(-b -a/2, - a/(2 * tan(M_PI/5))) << QPoint(-a/2, -a/(2*tan(M_PI/5)))
        << QPoint(0, -sqrt(pow(b, 2) - pow(a/2,2)) - a/(2*tan(M_PI/5))) << QPoint(a/2, -a/(2*tan(M_PI/5)))
        << QPoint(b + a/2, -a/(2 * tan(M_PI/5))) << QPoint(a * cos(M_PI/5), a/(2  *sin(M_PI/5))*cos(2*M_PI/5))
        << QPoint(a * (2 * b + a)/(2 * b), sqrt(pow(2 * b + a, 2) - pow(a * (2 * b + a)/(2 * b), 2)) - sqrt(pow(b, 2) - pow(a/2, 2)) - a/(2 * tan(M_PI/5)))
        << QPoint(0, a/(2*sin(M_PI/5)))  << QPoint(-a * (2 * b + a)/(2 * b), sqrt(pow(2 * b + a, 2) - pow(a * (2 * b + a)/(2 * b), 2)) - sqrt(pow(b, 2) - pow(a/2, 2)) - a/(2 * tan(M_PI/5)))
        << QPoint(-a * cos(M_PI/5), a/(2*sin(M_PI/5))*cos(2*M_PI/5));

    P->drawPolygon(pol);

}
