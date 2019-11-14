//
// Created by Ryan Phadnis on 11/14/19.
//

#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include <string>
#include "Queue.h"

using namespace std;

Queue::Queue() //def const
{
    head = nullptr;
    tail = nullptr;
};

void Queue::enqueue_tail(Data d)
{
    Node* point = new Node(d, nullptr); //creates a new node
    if(tail ==  nullptr)
    {
        head = point;
        tail = point;
    }
    else
    {
        tail->next = point;
        tail = point;
    }
}

bool Queue::dequeue_head()
{
    Node* deleter = head;
    if(head->next == tail)
    {
        return false;
    }
    head = head->next;
    delete deleter;
    return true;
}