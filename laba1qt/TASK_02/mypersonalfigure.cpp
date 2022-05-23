#include "mypersonalfigure.h"

MyPersonalFigure::MyPersonalFigure(QObject *parent)
    : MyFigure{parent}
{

}

MyPersonalFigure::MyPersonalFigure(QPainter *pain, int h, double *s, double *p) {

    P = pain;
    H = h;
    *p = 4 * M_PI * H/(2 + sqrt(2));
    *s = 2 * M_PI * pow(H/(2 + sqrt(2)), 2) + pow(2 * H/(2 + sqrt(2)), 2);

    drawMyPersonalFigure();

}

void MyPersonalFigure::drawMyPersonalFigure() {

    double R = H/(2 + sqrt(2)); double x = R *(1 - sqrt(2)/2);

    P->drawArc(-H/2, -H/2, 2 * R, 2 * R, 45 * 16, 16 * 180);
    P->drawArc(-x, -H/2, 2 * R, 2 * R, 135 * 16, -16 * 180);
    P->drawArc(-H/2, -x, 2 * R, 2 * R, 135 * 16, 16 * 180);
    P->drawArc(-x, -x, 2 * R, 2 * R, 45 * 16, -16 * 180);

}
