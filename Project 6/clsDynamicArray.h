#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{

protected:
    int _Size = 0;
    T* _TempArray;

public:
    T* OriginalArray;

    clsDynamicArray(int Size = 0)
    {
        if (Size < 0)
            Size = 0;

        _Size = Size;

        OriginalArray = new T[_Size];
    }

    ~clsDynamicArray()
    {

        delete[] OriginalArray;
    }

    bool SetItem(int index, T Value)
    {

        if (index >= _Size || _Size < 0)
        {
            return false;
        }

        OriginalArray[index] = Value;
        return true;
    }

    int Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return (_Size == 0 ? true : false);
    }

    void PrintList()

    {

        for (int i = 0; i <= _Size - 1; i++)
        {
            cout << OriginalArray[i] << " ";
        }

        cout << "\n";
    }

    void Resize(int NewSize)
    {

        if (NewSize < 0)
        {
            NewSize = 0;
        };

        _TempArray = new T[NewSize];

        // limit the original size to the new size if it is less.
        if (NewSize < _Size)
            _Size = NewSize;

        // copy all data from original array until the size
        for (int i = 0; i < _Size; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }

        _Size = NewSize;

        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }

    void Reverse()
    {
        _TempArray = new T[_Size];

        for (int i = 0; i < _Size; i++)
        {
            _TempArray[i] = OriginalArray[_Size - i - 1];
        }

        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }

    T GetItem(int idx)
    {
        return OriginalArray[idx];
    }

    void Clear()
    {
        _Size = 0;
        _TempArray = new T[0];
        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }

    bool DeleteItemAt(int idx)
    {
        if (idx < 0 || idx > _Size)
        {
            return false;
        }

        _Size--;
        _TempArray = new T[_Size];

        for (int i = 0; i < _Size; i++)
        {
            if (i >= idx)
            {
                _TempArray[i] = OriginalArray[i + 1];
            }
            else
            {
                _TempArray[i] = OriginalArray[i];
            }
        }

        delete[] OriginalArray;
        OriginalArray = _TempArray;
        return true;
    }

    void DeleteFirstItem()
    {
        DeleteItemAt(0);
    }

    void DeleteLastItem()
    {
        DeleteItemAt(_Size - 1);
    }

    int Find(T value)
    {
        for (int i = 0; i < _Size; i++)
        {
            if (OriginalArray[i] == value)
            {
                return i;
            }
        }

        return -1;
    }

    bool DeleteItem(T value)
    {
        int idx = Find(value);

        return idx != -1 ? DeleteItemAt(Find(value)) : false;
    }

    bool InsertAt(int idx, T value)
    {
        if (idx < 0 || idx >(_Size + 1))
        {
            return false;
        }

        _Size++;
        _TempArray = new T[_Size];

        // Before indx
        for (int i = 0; i < idx; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }

        // At indx
        _TempArray[idx] = value;

        // After indx
        for (int i = idx + 1; i < _Size; i++)
        {
            _TempArray[i] = OriginalArray[i - 1];
        }

        delete[] OriginalArray;
        OriginalArray = _TempArray;

        return true;
    }

    bool InsertAfter(int idx, T value)
    {
        if (idx >= _Size)
        {
            return InsertAt(_Size - 1, value);
        }
        else
        {
            return InsertAt(idx + 1, value);
        }
    }

    bool InsertBefore(int idx, T value)
    {
        if (idx < 1)
        {
            return InsertAt(0, value);
        }
        else
        {
            return InsertAt(idx - 1, value);
        }
    }

    void InsertAtBeginning(T value)
    {
        InsertAt(0, value);
    }

    void InsertAtEnd(T value)
    {
        InsertAt(_Size, value);
    }
};
