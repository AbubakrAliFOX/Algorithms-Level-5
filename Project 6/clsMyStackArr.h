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
        clsMyQueue<T>::_List.InsertAtBeginning(value);
    }

    T Top()
    {
        return clsMyQueue<T>::front();
    }

    T Bottom()
    {
        return clsMyQueue<T>::back();
    }
};
