// Cups.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int cups, workers, days;
	cin >> cups >> workers >> days;

	double ready_cups = (workers * days * 8) / 5;
	double money_from_cups = cups * 4.2;
	double money_from_ready_cups = ready_cups * 4.2;
	if (ready_cups < cups)
	{
		cout << "Losses: " << fixed << setprecision(2) 
			 << money_from_cups - money_from_ready_cups << endl;
	}
	else
	{
		cout << fixed << setprecision(2) << money_from_ready_cups - money_from_cups
			<< " extra money" << endl;
	}
    return 0;
}

