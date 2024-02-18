#include <iostream>
#include "clsMyQueue.h"
using namespace std;

int main()
{
    clsMyQueue<int> Queue;

    Queue.push(10);
    Queue.push(20);
    Queue.push(30);

    cout << "Queue: " << endl;
    Queue.Print();

    Queue.pop();
    Queue.Print();
}
