#pragma once
#include "clsMyQueueArr.h"

#include <iostream>
using namespace std;

template <typename T>
class clsMyStackArr : public clsMyQueueArr<T>
{

public:
    void push(T value)
    {
        clsMyQueueArr<T>::_Arr.InsertAtBeginning(value);
    }

    T Top()
    {
        return clsMyQueueArr<T>::front();
    }

    T Bottom()
    {
        return clsMyQueueArr<T>::back();
    }
};
