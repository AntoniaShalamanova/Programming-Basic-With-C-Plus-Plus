// Cinema.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string projection_type;
	int rows, columns;
	double total_cash;
	cin >> projection_type >> rows >> columns;
	if (projection_type=="Premiere")
	{
		total_cash = columns*rows * 12;
	}
	else if (projection_type == "Normal")
	{
		total_cash = columns*rows * 7.5;
	}
	else if (projection_type == "Discount")
	{
		total_cash = columns*rows * 5;
	}
	cout << fixed << setprecision(2) << total_cash;
	return 0;
}

