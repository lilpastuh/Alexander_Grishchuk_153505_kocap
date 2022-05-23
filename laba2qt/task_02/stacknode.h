#ifndef STACKNODE_H
#define STACKNODE_H

#include <skobka.h>

struct StackNode
{
    Skobka skobka;
    StackNode* next;

    StackNode(Skobka skobka, StackNode* _next);

};

#endif // STACKNODE_H
