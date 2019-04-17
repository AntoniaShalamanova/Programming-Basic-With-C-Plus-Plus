// House.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

#pragma region Roof of the house
	int rows_for_the_roof = (size + 1) / 2;
	int stars;
	if (size % 2 == 0)
	{
		stars = 2;
	}
	else
	{
		stars = 1;
	}

	for (int row = 1; row <= rows_for_the_roof; row++)
	{
		int dashes = (size - stars) / 2;
		cout << string(dashes, '-')
			<< string(stars, '*')
			<< string(dashes, '-')
			<< endl;
		stars += 2;
	}
#pragma endregion

#pragma region Body of the house
	int rows_for_the_body = size / 2;
	for (int rows = 1; rows <= rows_for_the_body; rows++)
	{
		cout << "|"
			<< string(size - 2, '*')
			<< "|"
			<< endl;
	}
#pragma endregion

	return 0;
}

