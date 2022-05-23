#include "rectangle.h"
#include "soldier.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    rectangle w;


    w.resize(2000, 1000);
    w.show();
    return a.exec();
}
