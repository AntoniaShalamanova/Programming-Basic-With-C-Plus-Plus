// Styrofoam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double salary, house_area, styrofoam_in_package, price_styrofoam;
	int windows_number;
	cin >> salary >> house_area >> windows_number 
		>> styrofoam_in_package >> price_styrofoam;

	double total_area = house_area - (windows_number * 2.4);
	double increase = total_area + total_area*0.1;
	double package = increase / styrofoam_in_package;
	package = ceill(package);
	double sum = package * price_styrofoam;
	if (sum <= salary)
	{
		cout << "Spent: " << fixed << setprecision(2) << sum << endl;
		cout << "Left: " << fixed << setprecision(2) << salary - sum << endl;

	}
	else
	{
		cout << "Need more: " << fixed << setprecision(2) << sum - salary << endl;
	}

	return 0;
}

