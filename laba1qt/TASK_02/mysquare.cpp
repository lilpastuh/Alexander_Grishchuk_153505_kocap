#include "mysquare.h"


MySquare::MySquare(QObject *parent)
{

    Q_UNUSED(parent);
}

MySquare::MySquare(QPainter *pain, int h, double *s, double *p) {

    P = pain;
    H = h;

    *s = pow(H, 2);
    *p = 4 * H;

    drawMySquare();

}

void MySquare::drawMySquare() {

    P->drawRect(-H/2, -H/2, H, H);
}
