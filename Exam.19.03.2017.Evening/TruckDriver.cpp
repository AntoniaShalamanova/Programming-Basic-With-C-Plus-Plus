// TruckDriver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string season;
	double km_for_month;
	cin >> season >> km_for_month;

	double total_km = km_for_month * 4;
	double salary;
	if (km_for_month <= 5000)
	{
		if (season == "Spring" || season == "Autumn")
		{
			salary = total_km*0.75;
		}
		else if (season == "Summer")
		{
			salary = total_km*0.9;
		}
		else if (season == "Winter")
		{
			salary = total_km*1.5;
		}
	}

	else if (km_for_month > 5000 && km_for_month <= 10000)
	{
		if (season == "Spring" || season == "Autumn")
		{
			salary = total_km*0.95;
		}
		else if (season == "Summer")
		{
			salary = total_km*1.1;
		}
		else if (season == "Winter")
		{
			salary = total_km*1.25;
		}
	}

	else if (km_for_month > 10000 && km_for_month <= 20000)
	{
		salary = total_km*1.45;
	}

	salary -= salary*0.1;
	cout << fixed << setprecision(2) << salary << endl;
    return 0;
}

