#include "myrectangle.h"

MyRectangle::MyRectangle(QObject *parent)
    : MySquare{parent}
{

}

MyRectangle::MyRectangle(QPainter *pain, int w, int h, double *s, double *p) {

    P = pain;
    H = h;
    W = w;

    *s = W * H;
    *p = 2 * (W + H);

    drawMyRectangle();

}

void MyRectangle::drawMyRectangle() {

    P->drawRect(-W/2, -H/2, W, H);
}
