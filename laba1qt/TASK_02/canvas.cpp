#include "canvas.h"
#include <QGraphicsScene>
#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>

Canv::Canv(QObject *parent):QGraphicsScene(parent)
{

}

Canv::~Canv()
{

}

void Canv::mouseMoveEvent(QGraphicsSceneMouseEvent *e)
{
    if(e->buttons()==Qt::LeftButton)
    {
           addLine(point.x(),
                   point.y(),
                   e->scenePos().x(),
                   e->scenePos().y(),
                   QPen(Qt::black,7,Qt::SolidLine,Qt::RoundCap));
           point = e->scenePos();
    }

    //АРТЕМ ЛОХ, ВАСЯ БОГ//

    if(e->buttons()==Qt::RightButton)
    {
           addLine(point.x(),
                   point.y(),
                   e->scenePos().x(),
                   e->scenePos().y(),
                   QPen(Qt::white,100,Qt::SolidLine,Qt::RoundCap));
           point = e->scenePos();     }

    point=e->scenePos();
}

void Canv::mousePressEvent(QGraphicsSceneMouseEvent *e)
{
    if(e->buttons() & Qt::LeftButton)
    {
        addEllipse(e->scenePos().x() - 5,
                       e->scenePos().y() - 5,
                       10,
                       10,
                       QPen(Qt::NoPen),
                       QBrush(Qt::black));
            point = e->scenePos();
    }
    if(e->button() & Qt::RightButton)
    {
        addEllipse(e->scenePos().x() - 5,
                       e->scenePos().y() - 5,
                       10,
                       10,
                       QPen(Qt::NoPen),
                       QBrush(Qt::white));
            point = e->scenePos();
    }
}
