// RhombusOfStars.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;
	
#pragma region Upper part of the rhombus
	for (int row = 1; row <= size; row++)
	{
		int number_of_stars = row;
		int number_of_spaces = size - number_of_stars;
		for (int spaces = 1; spaces <= number_of_spaces; spaces++)
		{
			cout << " ";
		}
		for (int stars = 1; stars <= number_of_stars; stars++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#pragma endregion

#pragma region Bottom part of the rhombus
	for (int row = size-1; row >= 1; row--)
	{
		int number_of_stars = row;
		int number_of_spaces = size - number_of_stars;
		for (int spaces = 1; spaces <= number_of_spaces; spaces++)
		{
			cout << " ";
		}
		for (int stars = 1; stars <= number_of_stars; stars++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#pragma endregion

	return 0;
}

