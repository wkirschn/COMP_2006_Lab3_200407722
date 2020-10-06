/*
*   Project: COMP2006 - Lab 3
*   Name:    Wyatt Kirscner
*   Date:    October 6th
*   Notes:   Comments include some notes and seeing what is required
*
*/
#pragma once
#include <iostream>
class Weather {
private:
	char dateDescription[8];
// Jan, Feb, Mar, Apr, May, June, July, Aug, Sept, Oct, Nov, Dec
// This will allow for a maximum of 7 characters, including /0 or the NULL byte
	double high;
	double low;
public:
	void setData(const char*, double, double);
	void display();
};


