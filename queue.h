//
// Created by Ryan Phadnis on 11/14/19.
//

#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H

#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include <string>

using namespace std;

class Queue : public LinkedList //descendant
{
public:
    Queue();
    void enqueue_tail(Data d);
    bool dequeue_head();

private:
    Node* tail;

};

#endif //PROJECT7_QUEUE_H
