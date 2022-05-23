#ifndef SKOBKA_H
#define SKOBKA_H
#include <QChar>

struct Skobka
{
    Skobka();
    Skobka(QChar symb, int row, int column);


    QChar symb;
    int row;
    int column;

};

#endif // SKOBKA_H
