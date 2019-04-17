// Time15Minutes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int hours, minutes;
	cin >> hours >> minutes;
	minutes += 15;
	if (minutes>59)
	{
		hours++;
		minutes = minutes - 60;
	}
	if (hours>23)
	{
		hours = hours - 24;
	}
	cout << hours << ":" <<setw(2)<< setfill('0') <<minutes;
    return 0;
}

