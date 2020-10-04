// COMP 2006 Lab3: Dynamic Memory
// File: part_one_main.cpp
// Version 1.0
// Date  28 Sept 2020
// Author  Tom Marazzo
// Description
// This file is used to demonstrate dynamic memory in
// C++ and to process an array of objects of compound
// type where the user specifies the number of
// elements in the array at run-time.
/////////////////////////////////////////////////////

#include <iostream>
#include "Weather.h"
using namespace std;


int main()
{
    int i; // loop counter
    int n; // number of objects in Weather array
    
    // declare a pointer named weatherArray of type Weather here
    
    cout << "Weather Data" << endl
    << "=====================" << endl
    << "Days of Weather: ";
    cin >> n;
    cin.ignore();
    
    // allocate dynamic memory for weatherArray here
    
    cout << "Enter date: ";

    cin.get(dateDescription, 7, '\n');

    cin.ignore(2000, '\n');

    cout << "Enter high: ";

    cin >> high;

    cin.ignore(2000, '\n');

    cout << "Enter low : ";

    cin >> low;

    cin.ignore(2000, '\n');

    if (dateDescription[0] != '\0')

    {

        weatherArray[i].setData(dateDescription, low, high);

    }
    
    cout << endl
    << "Weather report:" << endl
    << "Date        high  low" << endl
    << "======================" << endl;
    
    for(i = 0; i < n; i++)
    {
        weatherArray[i].display();
    }
    
    // deallocate dynamic memory here
    
    return 0;
}
