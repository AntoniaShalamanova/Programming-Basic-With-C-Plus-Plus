// MoneyPrize.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int parts, points, sum_points = 0;
	double money_for_point;
	cin >> parts >> money_for_point;

	for (int part = 1; part <= parts; part++)
	{
		cin >> points;
		if (part % 2 == 0)
		{
			points *= 2;
		}
		sum_points += points;
	}

	cout << "The project prize was " << fixed << setprecision(2)
		<< sum_points*money_for_point << " lv." << endl;
    return 0;
}

