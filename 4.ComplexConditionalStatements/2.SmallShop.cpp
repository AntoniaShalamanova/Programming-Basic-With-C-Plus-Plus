// SmallShop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double quantity;
	string town, product;
	double total_price;
	cin >> product >> town >> quantity;
	if (town=="Sofia")
	{
		if (product=="coffee")
		{
			total_price = quantity*0.5;
		}
		else if (product == "water")
		{
			total_price = quantity*0.8;
		}
		else if (product == "beer")
		{
			total_price = quantity*1.2;
		}
		else if (product == "sweets")
		{
			total_price = quantity*1.45;
		}
		else if (product == "peanuts")
		{
			total_price = quantity*1.6;
		}
	}

	else if (town == "Plovdiv")
	{
		if (product == "coffee")
		{
			total_price = quantity*0.4;
		}
		else if (product == "water")
		{
			total_price = quantity*0.7;
		}
		else if (product == "beer")
		{
			total_price = quantity*1.15;
		}
		else if (product == "sweets")
		{
			total_price = quantity*1.3;
		}
		else if (product == "peanuts")
		{
			total_price = quantity*1.5;
		}
	}

	else if (town == "Varna")
	{
		if (product == "coffee")
		{
			total_price = quantity*0.45;
		}
		else if (product == "water")
		{
			total_price = quantity*0.7;
		}
		else if (product == "beer")
		{
			total_price = quantity*1.1;
		}
		else if (product == "sweets")
		{
			total_price = quantity*1.35;
		}
		else if (product == "peanuts")
		{
			total_price = quantity*1.55;
		}
	}
	cout << total_price << endl;
    return 0;
}

