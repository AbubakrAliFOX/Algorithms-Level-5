#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList<int> MyList;

    MyList.InsertAtEnd(1);
    MyList.InsertAtEnd(2);
    MyList.InsertAtEnd(3);
    MyList.InsertAtEnd(4);
    MyList.InsertAtEnd(5);

    MyList.PrintList();
    clsDblLinkedList<int>::Node *N1 = MyList.GetNode(2);
    cout << "Found Node:" << N1->value << endl; 
}