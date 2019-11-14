//
// Created by Ryan Phadnis on 11/14/19.
//

#include <iostream>
#include <fstream>
#include <string>
#include "stack.h"

using namespace std;

Stack::Stack() //def const
{
    head = nullptr;
}

void Stack::push_head(const Data &d)
{

        Node* temp = new Node(d); //creates a node pointer
        temp->next=head;
        head = temp; //inserts into stack at head of list

    }


bool Stack::pop_head(const Data &d) //deletes head, and lets you know if there is a head to delete
{
    if(head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }
        return false;
}