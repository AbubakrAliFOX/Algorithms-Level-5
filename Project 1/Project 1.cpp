#include <iostream>
#include "MydbLinkedList.h"

using namespace std;

int main()
{
    MydbLinkedList<int> MyList;

    MyList.InsertAtEnd(1);
    MyList.InsertAtEnd(2);
    MyList.InsertAtEnd(3);

    MydbLinkedList<int>::Node *N1 = MyList.Find(2);

    MyList.InsertAfter(N1, 20);
    
    MyList.PrintList();
}