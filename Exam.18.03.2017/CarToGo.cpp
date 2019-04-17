// CarToGo.cpp : Defines the entry point for the console application.
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

	string clas, car;
	double price;
	if (salary >= 10 && salary <= 100)
	{
		clas = "Economy class";
		if (season == "Summer")
		{
			car = "Cabrio";
			price = salary*0.35;
		}
		else if (season == "Winter")
		{
			car = "Jeep";
			price = salary*0.65;
		}
	}

	if (salary > 100 && salary <= 500)
	{
		clas = "Compact class";
		if (season == "Summer")
		{
			car = "Cabrio";
			price = salary*0.45;
		}
		else if (season == "Winter")
		{
			car = "Jeep";
			price = salary*0.8;
		}
	}

	if (salary > 500 && salary <= 10000)
	{
		clas = "Luxury class";
		car = "Jeep";
		price = salary*0.9;
	}

	cout << clas << endl;
	cout << car << " - " << fixed << setprecision(2) << price << endl;
	return 0;
}

