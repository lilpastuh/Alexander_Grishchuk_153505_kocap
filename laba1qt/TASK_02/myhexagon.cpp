#include "myhexagon.h"

MyHexagon::MyHexagon(QObject *parent)
    : MyFigure{parent}
{

}

MyHexagon::MyHexagon(QPainter *pain, int h, double *s, double *p) {

    P = pain;
    H = h;

    *s = 1.5 * sqrt(3) * pow(H/2, 2);
    *p = 3 * H;

    drawMyHexagon();

}

void MyHexagon::drawMyHexagon() {

    QPolygon pol;

    pol << QPoint(-H * sqrt(3)/4, -H/4) << QPoint(0, -H/2) << QPoint(H * sqrt(3)/4, -H/4) << QPoint(H * sqrt(3)/4, H/4) << QPoint(0, H/2) << QPoint(-H * sqrt(3)/4, H/4);

    P->drawPolygon(pol);

}
