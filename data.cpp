//
// Created by Ryan Phadnis on 11/14/19.
//

#include "data.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Data::Data() //def constructor
{
    name = "";
    age = 0;
    country = "";
    overall = 0;
}

Data::Data(string n, int a, string c, int o) //good constructor
{
    name = n;
    age = a;
    country = c;
    overall = o;
}

bool Data:: operator > (const Data &d) //overloader 1
{
    return overall > d.overall;
}

bool Data:: operator < (const Data &d) //overloader 2
{
    return overall < d.overall;
}

//print onto text file overloader?
ostream& operator << (ostream& os, const Data a)
{
    os << "Name: " << a.name << endl;
    os << "Age: " << a.age << endl;
    os << "Country: " << a.country << endl;
    os << "Overall: " << a.overall << endl;
    return os;
}