//
// Created by Ryan Phadnis on 11/14/19.
//

#include <iostream>
#include <fstream>
#include "SortedLinkedList.h"
#include "LinkedList.h"
#include <string>

using namespace std;

void SortedLinkedList::insertSorted(Data d)
{
    Node* current;
    Node* trailer;
    Node* newNode = new Node(d, nullptr);

    if(head == nullptr)
    {
        newNode->next = head;
    }
    else
    {
        current = head;
        while(current != nullptr && newNode->data > current->data)
        {
            trailer = trailer->next;
            current = current->next;
        }
        //at correct spot: either sorts in, or is at end
        trailer->next = newNode;
        newNode->next = current;
    }
}