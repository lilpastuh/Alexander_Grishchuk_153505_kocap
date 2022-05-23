#ifndef SOLDER_H
#define SOLDER_H
#include "rectangle.h"
#include <QPolygon>

class Solder : public Rectangle
{
public:

    Solder(QPainter *pencil)
    {
        P=pencil;
        drawMySolder();
    }
private:
    QPainter* P;
    void drawMySolder()
    {

       P->drawEllipse(750,200,50,50);//бошка


       P->drawLine(770,249,770,265);//шея
       P->drawLine(780,249,780,265);


       QPolygon pol;
       pol<<QPoint(725,265)<<QPoint(825,265)<<QPoint(815,365)<<QPoint(835,615)<<QPoint(815,615)<<QPoint(775,400)<<QPoint(755,615)<<QPoint(735,615)<<QPoint(735,365);//туловище и ноги
       P->drawLine(735,365,815,365);
       P->drawPolygon(pol);


       P->drawLine(737,615,737,635);
       P->drawLine(737,635,765,635);//правая стопа
       P->drawLine(754,615,754,625);
       P->drawArc(737,625,30,40,16*125,-16*96);


       P->drawLine(818,615,822,635);
       P->drawLine(822,635,847,635);//левая стопа
       P->drawLine(833,615,835,625);
       P->drawArc(820,625,28,40,16*125,-16*96);


       P->setPen(QPen(Qt::green,3));
       P->setBrush(QBrush("#3eed3e"));
       QPolygon pol1;
       pol1<<QPoint(725,265)<<QPoint(630,295)<<QPoint(640,320)<<QPoint(728,300);
       P->drawPolygon(pol1);

    }
};

#endif // SOLDER_H
