// Sheriff.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int wide = size * 3;

#pragma region Header
	cout << string((wide - 1) / 2, '.')
		<< "x"
		<< string((wide - 1) / 2, '.')
		<< endl;
	cout << string((wide - 3) / 2, '.')
		<< "/x\\"
		<< string((wide - 3) / 2, '.')
		<< endl;
	cout << string((wide - 3) / 2, '.')
		<< "x|x"
		<< string((wide - 3) / 2, '.')
		<< endl;
#pragma endregion

	int x = size;
	int points = (wide - 1 - 2 * size) / 2;
	for (int row = 0; row <= size / 2; row++)
	{
		cout << string(points, '.')
			<< string(x, 'x')
			<< "|"
			<< string(x, 'x')
			<< string(points, '.')
			<< endl;
		x++;
		points--;
	}

	x -= 2;
	points += 2;

	for (int row = 1; row <= size / 2; row++)
	{
		cout << string(points, '.')
			<< string(x, 'x')
			<< "|"
			<< string(x, 'x')
			<< string(points, '.')
			<< endl;
		x--;
		points++;
	}

#pragma region Middle
	cout << string((wide - 3) / 2, '.')
		<< "/x\\"
		<< string((wide - 3) / 2, '.')
		<< endl;
	cout << string((wide - 3) / 2, '.')
		<< "\\x/"
		<< string((wide - 3) / 2, '.')
		<< endl;
#pragma endregion

	x ++;
	points --;
	for (int row = 0; row <= size / 2; row++)
	{
		cout << string(points, '.')
			<< string(x, 'x')
			<< "|"
			<< string(x, 'x')
			<< string(points, '.')
			<< endl;
		x++;
		points--;
	}

	x -= 2;
	points += 2;

	for (int row = 1; row <= size / 2; row++)
	{
		cout << string(points, '.')
			<< string(x, 'x')
			<< "|"
			<< string(x, 'x')
			<< string(points, '.')
			<< endl;
		x--;
		points++;
	}

#pragma region Footer
	cout << string((wide - 3) / 2, '.')
		<< "x|x"
		<< string((wide - 3) / 2, '.')
		<< endl;
	cout << string((wide - 3) / 2, '.')
		<< "\\x/"
		<< string((wide - 3) / 2, '.')
		<< endl;
	cout << string((wide - 1) / 2, '.')
		<< "x"
		<< string((wide - 1) / 2, '.')
		<< endl;
#pragma endregion

	return 0;
}





