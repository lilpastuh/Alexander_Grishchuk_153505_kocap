#include "list.h"
#include <QDebug>

Node::Node(QString LastName, QString FirstName, QString Patronymic, QString Town, int MathMark, int RusMark, int PhysMark)
{
    lastName = LastName;
    firstName = FirstName;
    patronymic = Patronymic;
    town = Town;
    mathMark = MathMark;
    rusMark = RusMark;
    physMark = PhysMark;

}

Node::Node()
{
    lastName = "";
    firstName = "";
    patronymic = "";
    town = "";
    mathMark = 1;
    rusMark = 1;
    physMark = 1;
}

int Node::GetMathMark()
{
    return mathMark;
}

List::List()
{
    Head = Tail = -1;
    L = new Node[0];
    size = 0;
}

List::~List()
{
    DelAll();
 delete[] L;
}

int List::GetCount()
{
    return size;
}

int List::GetHead()
{
    return Head;
}

int List::GetTail()
{
    return Tail;
}

Node List::GetNode(int pos)
{
    int search;
    Node temp;
    if (pos < size / 2)
    {
        search = Head;
        for (int i = 1; i<pos;i++)
           search = L[search].next;
        return L[search];
    }
    else
    {
        search = Tail;
        for (int i = size; i>pos; i--)
            search = L[search].prev;
        return L[search];
    }
}

void List::DelAll()
{

    for (int i = size; i>=1; i--)
        Del(1);
}

void List::Del(int pos)
{
    int indexOfDelElem;
    if (pos < 1 || pos > size) return;

    int Del;


    Del = Head;
    for (int i = 1; i< pos; i++)
        Del = L[Del].next;


    int PrevDel = L[Del].prev;
    indexOfDelElem = Del;
    int AfterDel = L[Del].next;

    if (PrevDel != -1 && size != 1)
        L[PrevDel].next = AfterDel;

    if (AfterDel != -1 && size != 1)
        L[AfterDel].prev = PrevDel;

    if (pos == 1)
        Head = AfterDel;


    if (pos == size)
        Tail = PrevDel;


    Node* temp = new Node[size-1];

    if (Tail> indexOfDelElem)
    {
        Tail--;
    }
    if (Head> indexOfDelElem)
    {
        Head--;
    }

    for (int i = 0, j = 0; i<size; i++)
    {
        if (i == indexOfDelElem)
        {
            continue;
        }
        temp[j] = L[i];
        if (temp[j].prev > indexOfDelElem)
        {
            temp[j].prev--;
        }
        if (temp[j].next > indexOfDelElem)
        {
            temp[j].next--;
        }
        j++;
    }

    delete[] L;
    L = temp;
    size--;

}

void List::Insert(int pos, QString lastName, QString firstName, QString patronymic, QString town, int mathMark, int rusMark, int physMark)
{
    int search;

    if (pos == 1)
    {
        AddHead(lastName, firstName, patronymic, town, mathMark, rusMark, physMark);
        return;
    }
    if (pos == size+1)
    {
        AddTail(lastName, firstName, patronymic, town, mathMark, rusMark, physMark);
        return;
    }
    Node* tempHuini = new Node[size+1];
    for (int i = 0; i<size;i++)
        tempHuini[i]=L[i];
    delete [] L;
    L = tempHuini;


    search = Head;
    for (int i = 1; i < pos; i++)
        search = L[search].next;

    Node temp;
    temp.lastName = lastName;
    temp.firstName = firstName;
    temp.patronymic = patronymic;
    temp.town = town;
    temp.mathMark = mathMark;
    temp.rusMark = rusMark;
    temp.physMark = physMark;

    int prevIns = L[search].prev;

    if (prevIns != -1 && size != 1)
        L[prevIns].next = size;

    temp.next = search;
    temp.prev = prevIns;
    L[search].prev = size;

    L[size] = temp;
    size++;

}

void List::AddTail(QString lastName, QString firstName, QString patronymic, QString town, int mathMark, int rusMark, int physMark)
{
    Node *temp = new Node[size+1];
    for(int i = 0; i<size;i++)
        temp[i] = L[i];

    delete [] L;
    L = temp;

    Node temp2;

    temp2.lastName = lastName;
    temp2.firstName = firstName;
    temp2.patronymic = patronymic;
    temp2.town = town;
    temp2.mathMark = mathMark;
    temp2.rusMark = rusMark;
    temp2.physMark = physMark;

    temp2.next = -1;

    temp2.prev = Tail;

    if (Tail != -1)
        L[Tail].next = size;

    if (size == 0)
        Head = Tail = 0;
    else
        Tail = size;

    L[size] = temp2;
    size++;

}

void List::AddHead(QString lastName, QString firstName, QString patronymic, QString town, int mathMark, int rusMark, int physMark)
{

    Node *temp = new Node[size+1];
    for(int i = 0; i<size;i++)
        temp[i] = L[i];
    delete [] L;
    L = temp;

    Node temp2;

    temp2.lastName = lastName;
    temp2.firstName = firstName;
    temp2.patronymic = patronymic;
    temp2.town = town;
    temp2.mathMark = mathMark;
    temp2.rusMark = rusMark;
    temp2.physMark = physMark;

    temp2.prev = -1;

    temp2.next = Head;

    if(Head != -1)

        L[Head].prev = size;

    if (size == 0)
        Head = Tail = 0;
    else
        Head = size;
    L[size] = temp2;

    size++;

}

int List::HeadOrEnd(int pos)
{
    if (pos <= size/2) return Head;
    else return Tail;
}

void List::swap(int a, int b)
{
    QString tempfirstName = L[a].firstName;

    L[a].firstName = L[b].firstName;

    L[b].firstName = tempfirstName;



    QString templastName = L[a].lastName;

    L[a].lastName = L[b].lastName;

    L[b].lastName = templastName;


    QString temppatronymic = L[a].patronymic;

    L[a].patronymic = L[b].patronymic;

    L[b].patronymic = temppatronymic;


    QString temptown = L[a].town;

    L[a].town = L[b].town;

    L[b].town = temptown;


    int tempmathMark = L[a].mathMark;

    L[a].mathMark = L[b].mathMark;

    L[b].mathMark = tempmathMark;

    int temprusMark = L[a].rusMark;

    L[a].rusMark = L[b].rusMark;

    L[b].rusMark = temprusMark;

    int tempphysMark = L[a].physMark;

    L[a].physMark = L[b].physMark;

    L[b].physMark = tempphysMark;


}

void List::QSort(int begin, int end)
{
    if (size == 0)
        return;

    if (begin == -1 && end == -1)
    {
        begin = 1;
        end = size;
    }

    int l = begin;
    int r = end;
    int C = (begin + end) / 2;

    int Centr = Head;

    for (int i = 1; i < C; i++)
        Centr = L[Centr].next;

    int c = L[Centr].GetMathMark();

    while (l <= r)
    {
        int A = Head;

        for (int i = 1; i < l; i++)
            A = L[A].next;

        while (L[A].GetMathMark() > c)
        {
            l++;
            A = L[A].next;
        }

        int B = Tail;

        for (int i = size; i > r; i--)
            B = L[B].prev;


        while (L[B].GetMathMark() < c)
        {
            r--;
            B = L[B].prev;
        }

        if (l <= r)
        {
            swap(A, B);

            l++, r--;
        }
    }

    if (begin < r)
        QSort(begin, r);

    if (l < end)
        QSort(l, end);
}



