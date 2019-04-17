// TailoringWorkshop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int numbers_of_table;
	double length, width;
	cin >> numbers_of_table >> length >> width;

	double area_of_covers = (length + 0.6)*(width + 0.6) * numbers_of_table;
	double USD_cover = area_of_covers * 7;
	double BGN_cover = USD_cover * 1.85;

	double area_of_squares = (length / 2)*(length / 2) * numbers_of_table;
	double USD_squares = area_of_squares * 9;
	double BGN_squares = USD_squares * 1.85;

	cout << fixed << setprecision(2) 
		<< USD_cover + USD_squares << " USD" << endl;
	cout << fixed << setprecision(2)
		<< BGN_cover + BGN_squares << " BGN" << endl;
    return 0;
}

