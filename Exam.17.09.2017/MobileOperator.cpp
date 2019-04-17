// MobileOperator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string years, type, internet;
	int months;
	double price;
	cin >> years >> type >> internet >> months;

	if (years=="one")
	{
		if (type == "Small")
		{
			price = 9.98;
		}
		else if (type == "Middle")
		{
			price = 18.99;
		}
		else if (type == "Large")
		{
			price = 25.98;
		}
		else if (type == "ExtraLarge")
		{
			price = 35.99;
		}
	}

	if (years == "two")
	{
		if (type == "Small")
		{
			price = 8.58;
		}
		else if (type == "Middle")
		{
			price = 17.09;
		}
		else if (type == "Large")
		{
			price = 23.59;
		}
		else if (type == "ExtraLarge")
		{
			price = 31.79;
		}
	}

	if (internet=="yes")
	{
		if (price<=10)
		{
			price += 5.50;
		}
		else if (price <= 30)
		{
			price += 4.35;
		}
		else if (price > 30)
		{
			price += 3.85;
		}
	}

	if (years=="two")
	{
		price = price - price*0.0375;
	}

	cout << fixed << setprecision(2) << price*months<<" lv." << endl;
    return 0;
}

