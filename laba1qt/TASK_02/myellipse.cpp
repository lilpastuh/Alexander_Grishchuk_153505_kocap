#include "myellipse.h"

MyEllipse::MyEllipse(QObject *parent)
    : MyCircle{parent}
{

}

MyEllipse::MyEllipse(QPainter *pain, int w, int h, double *s, double *p) {

    P = pain;
    H = h;
    W = w;

    *s = M_PI * W * H/4;
    *p = 2 * M_PI * sqrt((pow(H, 2) + pow(W, 2))/8);

    drawMyEllipse();

}

void MyEllipse::drawMyEllipse() {

    P->drawEllipse(-W/2, -H/2, W, H);
}
