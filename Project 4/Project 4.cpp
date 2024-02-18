// ProgrammingAdvices.com
// Mohammed Abu-Hadhoud

#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{

    clsDynamicArray<int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?  " << MyDynamicArray.IsEmpty();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();
    // cout << MyDynamicArray.GetItem(4) << endl;

    // MyDynamicArray.Reverse();
    // MyDynamicArray.PrintList();

    // MyDynamicArray.DeleteItem(20);

    // cout << MyDynamicArray.DeleteItem(20) << endl;
    // MyDynamicArray.PrintList();

    // cout << MyDynamicArray.InsertAt(2, 200) << endl;
    // MyDynamicArray.PrintList();

    cout << MyDynamicArray.InsertBefore(0, 200) << endl;
    MyDynamicArray.PrintList();

    // MyDynamicArray.InsertAtEnd(200);
    // MyDynamicArray.PrintList();
    
}