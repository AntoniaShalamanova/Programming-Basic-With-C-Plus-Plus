// Diamond.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int stars;
	int row;
	if (size % 2 == 0)
	{
		stars = 2;
		row = size - 1;
	}
	else
	{
		stars = 1;
		row = size;
	}
	int dashes = (size - stars) / 2;
	int middle = size - 2 * dashes - stars;
	int first_half_rows = (size + 1) / 2;

#pragma region First half of the diamond
	for (int rows = 1; rows <= first_half_rows; rows++)
	{
		if (middle <= 0)
		{
			cout << string(dashes, '-')
				<< string(stars, '*')
				<< string(dashes, '-')
				<< endl;
			middle = stars;
			dashes--;
		}
		else
		{
			cout << string(dashes, '-')
				<< "*"
				<< string(middle, '-')
				<< "*"
				<< string(dashes, '-')
				<< endl;
			middle += 2;
			dashes--;
		}
	}
	middle -= 4;
	dashes += 2;
#pragma endregion

#pragma region Second half of the diamond
	for (int rows = first_half_rows+1; rows <= row; rows++)
	{
		if (middle <= 0)
		{
			cout << string(dashes, '-')
				<< string(stars, '*')
				<< string(dashes, '-')
				<< endl;
		}
		else
		{
			cout << string(dashes, '-')
				<< "*"
				<< string(middle, '-')
				<< "*"
				<< string(dashes, '-')
				<< endl;
			middle -= 2;
			dashes++;
		}
	}
#pragma endregion

	return 0;
}

