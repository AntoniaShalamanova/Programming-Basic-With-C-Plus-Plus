// Sunglasses.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

#pragma region First line of the sunglasses
	cout << string(size * 2, '*')
		<< string(size, ' ')
		<< string(size * 2, '*')
		<< endl;
#pragma endregion

#pragma region Middle
	int different_row = (size - 1) / 2;
	for (int row = 1; row <= size-2; row++)
	{
		cout << "*"
			<< string(size * 2 - 2, '/')
			<< "*";
		if (row == different_row)
		{
			cout << string(size, '|');
		}
		else
		{
			cout << string(size, ' ');
		}
		cout << "*"
			<< string(size * 2 - 2, '/')
			<< "*"
			<< endl;
	}
#pragma endregion

#pragma region Last line of the sunglasses
	cout << string(size * 2, '*')
		<< string(size, ' ')
		<< string(size * 2, '*')
		<< endl;
#pragma endregion

	
	return 0;
}

