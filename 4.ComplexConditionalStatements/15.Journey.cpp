// Journey.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	double amount;
	string season;
	double spent_amount;
	cin >> amount >> season;

	if (amount > 1000)
	{
		cout << "Somewhere in Europe" << endl;
		spent_amount = amount*0.9;
		cout << "Hotel - " << fixed << setprecision(2)<< spent_amount;
	}

	else if (amount <=1000 && amount > 100)
	{
		cout << "Somewhere in Balkans" << endl;
		if (season == "summer")
		{
			spent_amount = amount*0.4;
			cout << "Camp - " << fixed << setprecision(2) << spent_amount;
		}
		else if(season == "winter")
		{
			spent_amount = amount*0.8;
			cout << "Hotel - " << fixed << setprecision(2) << spent_amount;
		}
	}

	else if(amount <= 100)
	{
		cout << "Somewhere in Bulgaria" << endl;
		if (season == "summer")
		{
			spent_amount = amount*0.3;
			cout << "Camp - " << fixed << setprecision(2) << spent_amount;
		}
		else if(season == "winter")
		{
			spent_amount = amount*0.7;
			cout << "Hotel - " << fixed << setprecision(2) << spent_amount;
		}
	}
    return 0;
}

