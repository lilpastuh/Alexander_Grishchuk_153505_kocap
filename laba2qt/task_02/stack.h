#ifndef STACK_H
#define STACK_H
#include "stacknode.h"
#include <QWidget>

struct Stack
{
    StackNode* head;
    int curSize;

    Stack();

};

void push(Skobka skobka, Stack* mStack, QWidget *parent);

QString pop(Stack* mStack,int curSize,  QWidget *parent);

QString top(Stack* mStack,int curSize,  QWidget *parent);

void clean(Stack* mStack,int curSize,  QWidget *parent);

#endif // STACK_H
