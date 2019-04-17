// FruitShop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string fruit, day;
	double quantity;
	double total_price;
	cin >> fruit >> day >> quantity;
	bool is_working_day = (day=="Monday") || 
						  (day=="Tuesday") || 
						  (day=="Wednesday") ||
						  (day=="Thursday") || 
						  (day=="Friday");
	bool is_holiday = (day == "Saturday") ||
					  (day == "Sunday");

	if (is_working_day)
	{
		if (fruit=="banana")
		{
			total_price = quantity*2.5;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else if (fruit == "apple")
		{
			total_price = quantity*1.2;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else if (fruit == "orange")
		{
			total_price = quantity*0.85;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else if (fruit == "grapefruit")
		{
			total_price = quantity*1.45;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else if (fruit == "kiwi")
		{
			total_price = quantity*2.7;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else if (fruit == "pineapple")
		{
			total_price = quantity*5.5;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else if (fruit == "grapes")
		{
			total_price = quantity*3.85;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else
		{
			cout << "error" << endl;
		}
	}

	else if (is_holiday)
	{
		if (fruit == "banana")
		{
			total_price = quantity*2.7;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else if (fruit == "apple")
		{
			total_price = quantity*1.25;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else if (fruit == "orange")
		{
			total_price = quantity*0.9;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else if (fruit == "grapefruit")
		{
			total_price = quantity*1.60;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else if (fruit == "kiwi")
		{
			total_price = quantity*3;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else if (fruit == "pineapple")
		{
			total_price = quantity*5.6;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else if (fruit == "grapes")
		{
			total_price = quantity*4.2;
			cout << fixed << setprecision(2) << total_price << endl;
		}
		else
		{
			cout << "error" << endl;
		}
	}
	else
	{
		cout << "error" << endl;
	}
    return 0;
}

