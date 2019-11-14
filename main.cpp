#include <iostream>
#include <fstream>
#include "data.h"
#include "stack.h"
#include "queue.h"
#include "SortedLinkedList.h"

#include <string>

using namespace std;

int main()
{
    //create files
    ifstream inFile;
    ofstream stack;
    ofstream queue;
    ofstream sort;

    Stack* list = new Stack;
    Queue* q = new Queue;
    SortedLinkedList* sortedList = new SortedLinkedList;

    Data player2;

    //open files
    inFile.open("data.csv");
    stack.open("stack.txt");
    queue.open("queue.txt");
    sort.open("sort.txt");

    //check to see if files are open
    if(!inFile.is_open())
    {
        cout << "inFile wasn't opened" << endl;
    }
    if(!stack.is_open())
    {
        cout << "stack file wasn't opened" << endl;
    }
    if(!queue.is_open())
    {
        cout << "queue file wasn't opened" << endl;
    }
    if(!sort.is_open())
    {
        cout << "sort file wasn't opened" << endl;
    }
    cout << "Files are open." << endl;
     //int c=0;
    while(!inFile.eof()) {

        //moved variables inside of while loop
        string name;
        string age;
        string country;
        string overall;

        //reads in lines
        getline(inFile, name, ',');
        getline(inFile, age, ',');
        getline(inFile, country, ',');
        getline(inFile, overall);

        int intage;
        intage = stoi(age);

        int intoverall;
        intoverall = stoi(overall);

        //cout << "Hi" << endl;

        Data player (name, intage, country, intoverall); //creates player object
        list->push_head(player); //puts player in stack
        q->enqueue_tail(player); //puts player in queue
       // cout << player;
        sortedList->insertSorted(player); //puts player in sortedList
        //player2 = player;
    }
    cout << "Test" << endl;
    list->print(stack);
    q->print(queue);
    sortedList->print(sort);


    while(list->pop_head(player2));
    while(q->dequeue_head());

    inFile.close();
    stack.close();
    queue.close();
    sort.close();
    cout << "Files are closed." << endl;

    return 0;
}