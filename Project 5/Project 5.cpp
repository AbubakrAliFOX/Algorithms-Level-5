#include <iostream>
#include "clsMyQueueArr.h"
using namespace std;

int main()
{
    clsMyQueueArr<int> Queue;

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

    Queue.Clear();
    Queue.Print();
}
