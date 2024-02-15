#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList<int> MyList;

    MyList.InsertAtEnd(1);
    MyList.InsertAtEnd(2);
    MyList.InsertAtEnd(3);

    clsDblLinkedList<int>::Node *N1 = MyList.Find(2);

    MyList.InsertAfter(N1, 20);

    MyList.PrintList();

    cout << "Size is:" << MyList.Size() << endl;
    cout << MyList.IsEmpty() << endl;
    MyList.Clear();
    cout << MyList.IsEmpty() << endl;
}