#ifndef SOLDIER_H
#define SOLDIER_H
#include <rectangle.h>



class Soldier : public rectangle
{
   Q_OBJECT
public:
    Soldier();
    int a;
    int b;
    ~Soldier();
};

#endif // SOLDIER_H
