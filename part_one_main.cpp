/*
 *   Project: COMP2006 - Lab 3
 *   Name:    Wyatt Kirscner
 *   Date:    October 6th
 *   Notes:   I have made a few changes to the structure to allow for multiple inputs before displaying
 *            the dates and the temps. The first loop would exit out by only asking for one input.
 *
 */

#define _CRT_SECURE_NO_WARNINGS#include <iostream>

#include "Weather.h"

 //#include <cstring>
 //#include <string>
using namespace std;

int main() {
    int i; // loop counter
    int n; // number of objects in Weather array

    // declare a pointer named weatherArray of type Weather here

    Weather* weatherArray = nullptr; // Is nullptr built in?

    cout << "Weather Data" << endl <<
        "=====================" << endl <<
        "Days of Weather: ";
    cin >> n;
    cin.ignore();

    // allocate dynamic memory for weatherArray here

    weatherArray = new Weather[n];

    for (i = 0; i < n; i++) {
        char dateDescription[7];
        double high;
        double low;

        cout << "Enter date: ";

        cin.get(dateDescription, 7, '\n');

        cin.ignore(2000, '\n');

        cout << "Enter high: ";

        cin >> high;

        cin.ignore(2000, '\n');

        cout << "Enter low : ";

        cin >> low;

        cin.ignore(2000, '\n');

        cout << "Print out: " << dateDescription << endl;

        cin.ignore(2000, '\n');

        if (dateDescription[0] != '\0')

        {

            cout << "PASS" << endl;
            //dateDescription (BELOW)
            weatherArray[i].setData(dateDescription, low, high);

        }
    }
    cout << endl <<
        "Weather report:" << endl <<
        "Date        high  low" << endl <<
        "======================" << endl;

    for (i = 0; i < n; i++) {
        weatherArray[i].display();
    }

    // deallocate dynamic memory here
    delete[] weatherArray;
    weatherArray = nullptr;

    return 0;

}