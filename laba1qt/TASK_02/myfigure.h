#ifndef MYFIGURE_H
#define MYFIGURE_H

#include <QObject>
#include "mainwindow.h"

class MyFigure : public QObject
{
    Q_OBJECT
public:
    explicit MyFigure(QObject *parent = nullptr);

};

#endif // MYFIGURE_H
