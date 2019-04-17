// FootballLeague.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int capacity_of_stadium, numbers_of_fens;
	cin >> capacity_of_stadium >> numbers_of_fens;

	string sector;
	int count_A = 0, count_B = 0, count_V = 0, count_G = 0;
	double percent_A, percent_B, percent_V, percent_G, percent_all;

	for (int fan = 1; fan <= numbers_of_fens; fan++)
	{
		cin >> sector;
		if (sector == "A")
		{
			count_A++;
		}
		else if (sector == "B")
		{
			count_B++;
		}
		else if (sector == "V")
		{
			count_V++;
		}
		else if (sector == "G")
		{
			count_G++;
		}
	}

	percent_A = (count_A * 1.0 / numbers_of_fens) * 100;
	percent_B = (count_B * 1.0 / numbers_of_fens) * 100;
	percent_V = (count_V * 1.0 / numbers_of_fens) * 100;
	percent_G = (count_G * 1.0 / numbers_of_fens) * 100;
	percent_all = (numbers_of_fens * 1.0 / capacity_of_stadium) * 100;

	cout << fixed << setprecision(2) << percent_A << "%" << endl
		<< fixed << setprecision(2) << percent_B << "%" << endl
		<< fixed << setprecision(2) << percent_V << "%" << endl
		<< fixed << setprecision(2) << percent_G << "%" << endl
		<< fixed << setprecision(2) << percent_all << "%" << endl;
    return 0;
}

