// Snowflake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int length = 2 * size + 3;
	int stars = 3/3;
	int inside_points = (length - 3) / 2;
	int outside_points = 0;

#pragma region Header of the snowflake
	for (int  row = 1; row <= size-1; row++)
	{
		cout << string(outside_points, '.')
			<< string(stars, '*')
			<< string(inside_points, '.')
			<< string(stars, '*')
			<< string(inside_points, '.')
			<< string(stars, '*') 
			<< string(outside_points, '.') << endl;
		outside_points++;
		inside_points--;
	}
	outside_points--;
	inside_points++;
#pragma endregion

#pragma region Middle of the snowflake
	cout << string((length-5) / 2, '.')
		 << string(5, '*')
	     << string((length - 5) / 2, '.') << endl;
	cout << string(length, '*') << endl;
	cout << string((length - 5) / 2, '.')
	     << string(5, '*')
	     << string((length - 5) / 2, '.') << endl;
#pragma endregion

#pragma region Footer of the snowflake
	for (int row = 1; row <= size - 1; row++)
	{
		cout << string(outside_points, '.')
			<< string(stars, '*')
			<< string(inside_points, '.')
			<< string(stars, '*')
			<< string(inside_points, '.')
			<< string(stars, '*')
			<< string(outside_points, '.') << endl;
		outside_points--;
		inside_points++;
	}
#pragma endregion

    return 0;
}

