#pragma once
#include <iostream>
using namespace std;

template <typename T>
class MydbLinkedList
{
public:
    class Node
    {

    public:
        T value;
        Node *next;
        Node *prev;
    };

    Node *head = NULL;

    void PrintList()
    {
        cout << "NULL <--> ";
        while (head != NULL)
        {
            cout << head->value << " <--> ";
            head = head->next;
        }
        cout << "NULL";
    }

    Node *Find(T value)
    {
        while (head != NULL)
        {
            if (head->value == value)
            {
                cout << "Found!" << endl;
                return head;
            }

            head = head->next;
        }
    }

    void InsertAtBeginning(T value)
    {
        Node *newNode = new Node();
        newNode->value = value;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL)
        {
            head->prev = newNode;
        }
        head = newNode;
    }
};
