/*
*   Project: COMP2006 - Lab 3
*   Name:    Wyatt Kirscner
*   Date:    October 6th
*   Notes:   Comments include some notes and seeing what is required
*
*/

#define _CRT_SECURE_NO_WARNINGS
#pragma once
using namespace std;
#include <iostream>
#include "Weather.h"
#include <iomanip>
//const char * dateDescription,
void Weather::setData(const char* d, double highTemp, double lowTemp) {

	high = highTemp;
	low = lowTemp;
	strncpy_s(dateDescription, d, 7); //Destitnation, source, char
}
void Weather::display() {
	// Displays the high and low temp
	// Displays the calendar date in the format, using _ as white space
	// 04_20_2020
	// high and low, fields of 6 with 1 decimal place, _ as white space

	cout << setw(10) << setfill('_') << left << dateDescription;
	cout.unsetf(ios::left);
	cout << fixed << setprecision(1) << setw(6) << high << setw(6) << low << endl;

	//Based on lecture images and handouts ^^^

	/*cout << "Date: " << dateDescription << "/n" << endl;
	cout << "High: " << high << "/n" << endl;
	cout << "Low: " << low << "/n" << endl; OLD*/
}



