#include "myrhombus.h"

MyRhombus::MyRhombus(QObject *parent)
    : MySquare{parent}
{

}

MyRhombus::MyRhombus(QPainter *pain, int w, int h, double *s, double *p) {

    P = pain;
    H = h;
    W = w;

    *s = H * W/2;
    *p = 4 * sqrt(pow(H/2, 2) +pow(W/2,2));

    drawMyRhombus();

}

void MyRhombus::drawMyRhombus() {

    QPolygon pol;

    pol << QPoint(-W/2, 0) << QPoint(0, -H/2) << QPoint(W/2, 0) << QPoint(0, H/2);

    P->drawPolygon(pol);

}
