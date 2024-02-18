#pragma once
#include "clsMyQueue.h"
#include <iostream>
using namespace std;

template <typename T>
class clsMyStack : public clsMyQueue<T>
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
