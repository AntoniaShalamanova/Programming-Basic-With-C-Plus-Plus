// Vacation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	double salary;
	string season;
	cin >> salary >> season;

	string place, location;
	double vacation_price;

	if (salary <= 1000)
	{
		place = "Camp";
		if (season == "Summer")
		{
			location = "Alaska";
			vacation_price = salary*0.65;
		}
		else if (season == "Winter")
		{
			location = "Morocco";
			vacation_price = salary*0.45;
		}
	}

	else if (salary > 1000 && salary <= 3000)
	{
		place = "Hut";
		if (season == "Summer")
		{
			location = "Alaska";
			vacation_price = salary*0.8;
		}
		else if (season == "Winter")
		{
			location = "Morocco";
			vacation_price = salary*0.6;
		}
	}

	else if (salary > 3000)
	{
		place = "Hotel";
		vacation_price = salary*0.9;
		if (season == "Summer")
		{
			location = "Alaska";
		}
		else if (season == "Winter")
		{
			location = "Morocco";
		}
	}

	cout << location << " - " << place << " - " 
		 << fixed << setprecision(2) << vacation_price << endl;
    return 0;
}

