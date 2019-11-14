//
// Created by Ryan Phadnis on 11/14/19.
//

#ifndef PROJECT7_SORTEDLINKEDLIST_H
#define PROJECT7_SORTEDLINKEDLIST_H

#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include <string>

using namespace std;

class SortedLinkedList : public LinkedList
{
public:
    SortedLinkedList(){}
    void insertSorted(Data d);
};

#endif //PROJECT7_SORTEDLINKEDLIST_H
