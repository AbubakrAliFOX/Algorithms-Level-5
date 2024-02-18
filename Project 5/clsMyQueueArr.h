#pragma once
#include "clsDynamicArray.h"

template <typename T>
class clsMyQueueArr
{
protected:
    clsDynamicArray<T> _Arr;

public:
    void push(T value)
    {
        _Arr.InsertAtEnd(value);
    }

    void Print()
    {
        _Arr.PrintList();
    }

    short Size()
    {
        return _Arr.Size();
    }

    T front()
    {
        return _Arr.GetItem(0);
    }

    T back()
    {
        return _Arr.GetItem(Size() - 1);
    }

    void pop()
    {
        _Arr.DeleteLastItem();
    }

    T GetItem(int idx)
    {
        return _Arr.GetItem(idx);
    }

    void Reverse()
    {
        _Arr.Reverse();
    }


    void InsertAfter(int idx, T value)
    {
        _Arr.InsertAfter(idx, value);
    }

    void InsertAtFront(T value)
    {
        _Arr.InsertAtBeginning(value);
    }

    void Clear()
    {
        _Arr.Clear();
    }
};
