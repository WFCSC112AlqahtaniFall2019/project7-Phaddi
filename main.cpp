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

    Stack list;
    Queue q;
    SortedLinkedList sortedList;
    Data player2;
    string name;
    string age;
    string country;
    string overall;

    //open files
    inFile.open("data.csv");
    stack.open("../stack.txt");
    queue.open("../queue.txt");
    sort.open("../sort.txt");

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

    while(!inFile.eof()) {

        //reads in lines
        getline(inFile, name, ',');
        getline(inFile, age, ',');
        getline(inFile, country, ',');
        getline(inFile, overall, '\n');

        int intage;
        intage = stoi(age);

        int intoverall;
        intoverall = stoi(overall);

        Data player = Data(name, intage, country, intoverall); //creates player object
        list.push_head(player); //puts player in stack
        q.enqueue_tail(player); //puts player in queue
        sortedList.insertSorted(player); //puts player in sortedList
        player2 = player;
    }
    list.print(stack);
    list.print(queue);
    list.print(sort);

    while(list.pop_head(player2));
    while(q.dequeue_head());

    inFile.close();
    stack.close();
    queue.close();
    sort.close();

    return 0;
}