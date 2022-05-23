#include <stacknode.h>


StackNode::StackNode(Skobka skobka, StackNode *_next)
    {
        this->skobka = skobka;
        next = _next;
    }
