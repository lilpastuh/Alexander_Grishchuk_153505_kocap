#include "rectangle.h"

Rectangle::Rectangle(QObject *parent) : QObject(parent)
{
Q_UNUSED(parent);
}

Rectangle::Rectangle(QPainter *pencil)
{
    P=pencil;

    drawMyRectangle();
}

void Rectangle::drawMyRectangle()
{

    P->drawRect(300,300,200,100);
}
