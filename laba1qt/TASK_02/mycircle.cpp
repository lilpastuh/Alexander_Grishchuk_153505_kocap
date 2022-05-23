#include "mycircle.h"

MyCircle::MyCircle(QObject *parent)
    : MyFigure{parent}
{




}

MyCircle::MyCircle(QPainter *pain, int h, double *s, double *p) {

    P = pain;
    H = h;
    *s = M_PI * pow(H/2,2);
    *p = M_PI * H;

    drawMyCircle();

}

void MyCircle::drawMyCircle() {

    P->drawEllipse(-H/2, -H/2, H, H);

}
