//
// Created by Ryan Phadnis on 11/14/19.
//

#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H

#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include <string>

using namespace std;

class Stack : public LinkedList //parent
{
public:
    Stack(); //def const

    void push_head(const Data &d);
    bool pop_head(const Data &d);
};

#endif //PROJECT7_STACK_H
