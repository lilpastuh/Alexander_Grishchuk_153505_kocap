#ifndef LIST_H
#define LIST_H
#include <QString>
#include <QDate>
#include <QWidget>
#include <QDebug>

struct Node
{
    Node(QString LastName, QString FirstName, QString Patronymic, QString Town, int MathMark, int RusMark, int PhysMark);
    Node();

    int GetMathMark();
    QString lastName;
    QString firstName;
    QString patronymic;
    QString town;
    int mathMark;
    int rusMark;
    int physMark;
    int next, prev;
};

class List
{
public:

    List();

    ~List();

    int GetCount();

   int GetHead();

    int GetTail();

    Node GetNode(int i);

    void DelAll();

    void Del(int pos);

    void Insert(int pos, QString lastName, QString firstName, QString patronymic, QString town, int mathMark, int rusMark, int physMark);

    void AddTail(QString lastName, QString firstName, QString patronymic, QString town, int mathMark, int rusMark, int physMark);

    void AddHead(QString lastName, QString firstName, QString patronymic, QString town, int mathMark, int rusMark, int physMark);

    void sortNum(int left, int right);

    void swap(int a, int b);

    int HeadOrEnd(int pos);

    void QSort(int begin, int end);


private:
    int size;
    int Head, Tail;
    Node *L;
};

#endif // LIST_H
