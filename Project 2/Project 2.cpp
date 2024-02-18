#include <iostream>
#include "clsMyQueue.h"
using namespace std;

int main()
{
    clsMyQueue<int> Queue;

    Queue.push(10);
    Queue.push(20);
    Queue.push(30);
    Queue.push(40);
    Queue.push(50);

    cout << "Queue: " << endl;
    Queue.Print();

    Queue.pop();
    Queue.Print();

    Queue.Reverse();
    Queue.Print();

    Queue.UpdateItem(1, 300);
    Queue.Print();

    Queue.Clear();
    Queue.Print();
}
