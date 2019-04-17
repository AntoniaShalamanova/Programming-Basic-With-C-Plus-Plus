
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int highth = size / 2 + 4;
	int width = 2 * size - 1;

#pragma region First Row
	int space = width - 3;
	cout << "@"
		<< string(space / 2, ' ')
		<< "@"
		<< string(space / 2, ' ')
		<< "@"
		<< endl;
#pragma endregion

#pragma region Second Row
	int outside_stars = 2;
	int inside_stars = 1;
	space = width - 5;
	cout << string(outside_stars, '*')
		<< string(space / 2, ' ')
		<< string(inside_stars, '*')
		<< string(space / 2, ' ')
		<< string(outside_stars, '*')
		<< endl;
#pragma endregion

#pragma region First Middle
	outside_stars = 1;
	inside_stars = 1;
	space -= 4;
	int outside_points = 1, inside_points = 1;
	for (int i = 1; i <= size / 2 - 2; i++)
	{
		cout << string(outside_stars, '*')
			<< string(outside_points, '.')
			<< string(outside_stars, '*')
			<< string(space / 2, ' ')
			<< string(inside_stars, '*')
			<< string(inside_points, '.')
			<< string(inside_stars, '*')
			<< string(space / 2, ' ')
			<< string(outside_stars, '*')
			<< string(outside_points, '.')
			<< string(outside_stars, '*')
			<< endl;
		outside_points++;
		inside_points += 2;
		space -= 4;
	}
#pragma endregion

#pragma region Last 2 Rows Of Middle
	inside_points = width - (outside_stars * 4 + outside_points * 2);
	cout << string(outside_stars, '*')
		<< string(outside_points, '.')
		<< string(outside_stars, '*')
		<< string(inside_points, '.')
		<< string(outside_stars, '*')
		<< string(outside_points, '.')
		<< string(outside_stars, '*')
		<< endl;
	outside_points++;
	int stars = inside_points - 3;
	inside_points = 1;

	cout << string(outside_stars, '*')
		<< string(outside_points, '.')
		<< string(outside_stars, '*')
		<< string(stars / 2, '*')
		<< string(inside_points, '.')
		<< string(stars / 2, '*')
		<< string(outside_stars, '*')
		<< string(outside_points, '.')
		<< string(outside_stars, '*')
		<< endl;
#pragma endregion

#pragma region Last 2 Rows
	stars = width;
	for (int i = 1; i <= 2; i++)
	{
		cout << string(stars, '*')
			<< endl;
	}
#pragma endregion

	return 0;
}
