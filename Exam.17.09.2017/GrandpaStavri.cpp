// GrandpaStavri.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int days;
	cin >> days;

	double liters, degrees, total_sum=0, quantity=0;
	for (int day = 1; day <= days; day++)
	{
		cin >> liters >> degrees;
		double sum = degrees*liters;
		total_sum += sum;
		quantity += liters;
	}
	degrees = total_sum / quantity;

	cout << "Liter: " << fixed << setprecision(2) << quantity << endl;
	cout << "Degrees: " << fixed << setprecision(2) << degrees << endl;

	if (degrees < 38)
	{
		cout << "Not good, you should baking!" << endl;
	}
	else if (degrees >= 38 && degrees <= 42)
	{
		cout << "Super!" << endl;
	}
	else if (degrees > 42)
	{
		cout << "Dilution with distilled water!" << endl;
	}
    return 0;
}

