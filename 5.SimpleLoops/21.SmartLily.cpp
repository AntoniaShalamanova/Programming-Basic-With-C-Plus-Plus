// SmartLily.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int age, toy_price;
	double washing_machine_price;
	int toys_count=0;
	int birthday_money=0, increment=0;
	cin >> age >> washing_machine_price >> toy_price;

	for (int i = 1; i <= age; i++)
	{
		if (i % 2 ==0)
		{
			increment += 10;
			birthday_money += increment;
			birthday_money--;
		}
		else
		{
			toys_count++;
		}
	}

	int total_money = birthday_money + toys_count*toy_price;
	double diff = abs(total_money - washing_machine_price);
	if (total_money >= washing_machine_price)
	{
		cout << "Yes! " << fixed << setprecision(2) << diff << endl;
	}
	else
	{
		cout << "No! " << fixed << setprecision(2) << diff << endl;
	}
    return 0;
}

