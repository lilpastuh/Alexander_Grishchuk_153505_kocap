#ifndef MYRHOMBUS_H
#define MYRHOMBUS_H

#include "mysquare.h"
#include <QPolygon>

class MyRhombus : public MySquare
{
public:
    explicit MyRhombus(QObject *parent = nullptr);

    MyRhombus(QPainter* pain,int w, int h, double *s, double *p);

private:

    void drawMyRhombus();

    QPainter* P;
    int H;
    int W;


};

#endif // MYRHOMBUS_H
