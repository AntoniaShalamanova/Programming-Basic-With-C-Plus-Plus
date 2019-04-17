// GameOfIntervals.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int moves_number;
	cin >> moves_number;

	int number;
	double points = 0;
	int invalid_numbers = 0, group_1 = 0, group_2 = 0,
		group_3 = 0, group_4 = 0, group_5 = 0;
	for (int move = 1; move <= moves_number; move++)
	{
		cin >> number;
		if (number < 0 || number > 50)
		{
			points /= 2;
			invalid_numbers++;
		}
		else if (number >= 0 && number <= 9)
		{
			points +=  number*0.2;
			group_1++;
		}
		else if (number >= 10 && number <= 19)
		{
			points +=  number*0.3;
			group_2++;
		}
		else if (number >= 20 && number <= 29)
		{
			points += number*0.4;
			group_3++;
		}
		else if (number >= 30 && number <= 39)
		{
			points += 50;
			group_4++;
		}
		else if (number >= 40 && number <= 50)
		{
			points += 100;
			group_5++;
		}
	}

	double purcent_1 = group_1 * 100.0 / moves_number;
	double purcent_2 = group_2 * 100.0 / moves_number;
	double purcent_3 = group_3 * 100.0 / moves_number;
	double purcent_4 = group_4 * 100.0 / moves_number;
	double purcent_5 = group_5 * 100.0 / moves_number;
	double purcent_invalid_numbers = invalid_numbers * 100.0 / moves_number;

	cout << fixed << setprecision(2) << points << endl;
	cout << "From 0 to 9: " << fixed << setprecision(2)
		<< purcent_1 << "%" << endl;
	cout << "From 10 to 19: " << fixed << setprecision(2) 
		 << purcent_2 << "%" << endl;
	cout << "From 20 to 29: " << fixed << setprecision(2) 
		 << purcent_3 << "%" << endl;
	cout << "From 30 to 39: " << fixed << setprecision(2) 
		 << purcent_4 << "%" << endl;
	cout << "From 40 to 50: " << fixed << setprecision(2) 
		 << purcent_5 << "%" << endl;
	cout << "Invalid numbers: " << fixed << setprecision(2) 
		 << purcent_invalid_numbers << "%" << endl;
	return 0;
}

