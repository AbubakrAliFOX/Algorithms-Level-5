#pragma once
#include "clsDblLinkedList.h"
#include <iostream>
using namespace std;

template <typename T>
class clsMyQueue
{

protected:
    clsDblLinkedList <T> _List;

public:
    void push(T value)
    {
        _List.InsertAtEnd(value);
    }

    void Print()
    {
        _List.PrintList();
    }

    short Size()
    {
        return _List.Size();
    }

    T front()
    {
        return _List.GetItem(0);
    }

    T back()
    {
        return _List.GetItem(Size() - 1);
    }

    void pop()
    {
        _List.DeleteLastNode();
    }

    T GetItem (int idx) {
        return _List.GetItem(idx);
    }

    void Reverse () {
        _List.Reverse();
    }

    void UpdateItem (int idx, T newValue) {
        _List.UpdateItem(idx, newValue);
    }

    void InsertAfter (int idx, T value) {
        _List.InsertAfter(idx, value);
    }

    void InsertAtFront (T value) {
        _List.InsertAtBeginning(value);
    }

    void Clear() {
        _List.Clear();
    }
};
