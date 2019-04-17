// Hourglass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int width = 2 * size + 1;
	int height = 2 * size + 1;

#pragma region First row
	int stars = width;
	cout << string(stars, '*') << endl;
#pragma endregion

#pragma region First half
	stars = 1;
	int points = 1;
	int spaces = width - 4;

	cout << string(points, '.')
		<< string(stars, '*')
		<< string(spaces, ' ')
		<< string(stars, '*')
		<< string(points, '.')
		<< endl;
	points++;
	int simbols = width - (stars * 2 + points * 2);

	for (int i = 1; i <= size-2; i++)
	{
		cout << string(points, '.')
			<< string(stars, '*')
			<< string(simbols, '@')
			<< string(stars, '*')
			<< string(points, '.')
			<< endl;
		points++;
		simbols -= 2;
	}
#pragma endregion

#pragma region Middle
	stars = 1;
	points = width - 1;
	cout << string(points / 2, '.')
		<< string(stars, '*')
		<< string(points / 2, '.')
		<< endl;
#pragma endregion

#pragma region Second half
	stars = 1;
	simbols = 1;
	points = (width - 3) / 2;
	spaces = 0;
	for (int i = 1; i <= size - 2; i++)
	{
		cout << string(points, '.')
			<< string(stars, '*')
			<< string(spaces, ' ')
			<< string(simbols, '@')
			<< string(spaces, ' ')
			<< string(stars, '*')
			<< string(points, '.')
			<< endl;
		points--;
		spaces++;
	}

	simbols = width - 4;
	cout << string(points, '.')
		<< string(stars, '*')
		<< string(simbols, '@')
		<< string(stars, '*')
		<< string(points, '.')
		<< endl;
#pragma endregion

#pragma region Last row
	stars = width;
	cout << string(stars, '*') << endl;
#pragma endregion
    return 0;
}

