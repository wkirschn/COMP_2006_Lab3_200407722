/*
// COMP 2006 Lab3: Dynamic Memory
// File: part_two_main.cpp
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
#include <cstring>
#include "Weather.h"
using namespace std;


double findLow(const char*, const Weather*, int);

int main()
{
    int i; // loop counter
    int n; // number of objects in Weather array
    
    int* weatherArray = Weather;

    // declare a pointer name weatherArray of type Weather here
    
    cout << "Weather Data" << endl
    << "=====================" << endl
    << "Days of Weather: ";
    cin >> n;
    cin.ignore();
    
    // allocate dynamic memory for weatherArray here
    
    for(i = 0; i < n; i++)
    {
        char dateDescription[7];
        double high;
        double low;
        
        // add code to accept the user input
        // for the weather array and set the data
        // for each object of weatherArray
    }
    
    cout << endl
    << "Weather report:" << endl
    << "Date        high  low" << endl
    << "======================" << endl;
    
    for(i = 0; i < n; i++)
    {
        weatherArray[i].display();
    }
    
    char query[7];
    cout << endl << "Enter the date you are looking for: ";
    // accept user input for the date to find
    // (in this example stored in char query[7])
    // and display the lowest temperature found
    cin.getline(query, 7, '\n');
    double low = findLow(query, weatherArray, n);
    cout << "Low temperature: " << low << endl;
    
    // deallocate dynamic memory here
    
    return 0;
}

// add findLow global function implementation here



*/

