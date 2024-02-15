#include <iostream>
#include "MydbLinkedList.h"

using namespace std;

int main()
{
    MydbLinkedList<int> MyList;

    MyList.InsertAtBeginning(5);
    MyList.InsertAtBeginning(10);
    MyList.InsertAtBeginning(11);
    MyList.PrintList();

    MydbLinkedList<int>::Node *N1 = MyList.Find(6);
}