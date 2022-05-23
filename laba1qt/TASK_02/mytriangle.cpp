#include "mytriangle.h"

MyTriangle::MyTriangle(QObject *parent)
    : MyFigure{parent}
{

}

MyTriangle::MyTriangle(QPainter *pain, int h, int w, int alpha, double *s, double *p) {

    P = pain;
    H = h;
    W = w;
    Alpha = alpha;

    double d = (H/tan(Alpha*M_PI/180) - W/2)/3;
    double a = sqrt(pow((W/2 - 3*d), 2) + pow(H, 2));

    double b = sqrt(pow((W/2 + 3*d), 2) + pow(H, 2));

    *s = W * H/2;
    *p = W + a + b;

    drawMyTriangle();

}

void MyTriangle::drawMyTriangle(){

    double d = (H/tan(Alpha*M_PI/180) - W/2)/3;

    QPolygon pol;

    pol << QPoint(-(W/2 - d), H/3)  << QPoint(-2 * d, -(2 * H/3)) << QPoint((W/2 + d), H/3) ;

    P->drawPolygon(pol);
}
