//
// Created by Ryan Phadnis on 11/14/19.
//

#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include "data.h"
#include <string>
#include "stack.h"

using namespace std;

Stack::Stack() //def const
{
    head = new Node();
}

void Stack::push_head(Data d)
{
    if(head->data.getName() == "") //ensures the head is correct
    {
        Node* temp = new Node(d, nullptr); //creates a node pointer
        head = temp; //inserts into stack at head of list
    }
    else
    {
        Node* temp = new Node(d, nullptr); //creates a node pointer
        temp->next = head;
        head = temp; //inserts into stack at head of list
    }
}

bool Stack::pop_head(Data d) //deletes head, and lets you know if there is a head to delete
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