//
// Created by Ryan Phadnis on 11/14/19.
//

#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H

using namespace std;

#include <iostream>
#include <fstream>
#include <string>

class Data
{


public:
    Data();
    Data(string name, int age, string country, int overall);
    friend ostream& operator << (ostream& os, Data a);
    bool operator > (const Data &d);
    bool operator < (const Data &d);

//fix it
    string name;
    int age;
    string country;
    int overall;

    //functions
public:
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }
    void setCountry(string c)
    {
        country = c;
    }
    string getCountry()
    {
        return country;
    }
    void setOverall(int o)
    {
        overall = o;
    }
    int getOverall()
    {
        return overall;
    }
};

#endif //PROJECT7_DATA_H
