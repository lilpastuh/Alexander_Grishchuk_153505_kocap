#include "stack.h"
#include "stacknode.h"
#include <QWidget>
#include <QMessageBox>

Stack::Stack()
{
   curSize = 0;
   head = nullptr;
}

void push(Skobka skobka, Stack* mStack, QWidget *parent)
{
    StackNode* tempNode = new StackNode(skobka, mStack->head);
    mStack->head = tempNode;
    mStack->curSize++;
}

QString pop(Stack* mStack,int curSize,  QWidget *parent)
{
    if (!curSize)
    {
        QMessageBox::information(parent, "","Стек пуст");
        return "";
    }


    StackNode* tempNode = mStack->head;
    Skobka skobka = tempNode->skobka;
    mStack->head = tempNode->next;
    delete tempNode;
    mStack->curSize--;

    return QString::number(skobka.row) + " " + QString::number(skobka.column);
}

QString top(Stack *mStack, int curSize, QWidget *parent)
{
    if (!curSize)
    {
        QMessageBox::information(parent, "","Стек пуст ");
        return "";
    }

    return mStack->head->skobka.symb;
}

void clean(Stack *mStack, int curSize, QWidget *parent)
{
    if (curSize == 0)
    {
        QMessageBox::information(parent, "","Стек пуст clean");
        return;
    }

    for(int i = 0; i<curSize;i++)
        pop(mStack, curSize,parent);
}
