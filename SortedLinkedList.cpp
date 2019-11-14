//
// Created by Ryan Phadnis on 11/14/19.
//

#include <iostream>
#include <fstream>
#include "SortedLinkedList.h"
#include "LinkedList.h"
#include <string>
#include "data.h"

using namespace std;

void SortedLinkedList:: insertSorted(Data obj) {
    Node *newData = new Node(obj, nullptr);
    Node *current;
    Node* prev;
    if (head == nullptr) {
        head = newData;

    } else {
        if (head->data > newData->data) {
            newData->next = head;
            head = newData;
        } else {
            current=head;
            while(current!= nullptr&&current->data<newData->data){
                prev=current;
                current=current->next;
            }

            prev->next=newData;
            newData->next=current;

        }
    }
}