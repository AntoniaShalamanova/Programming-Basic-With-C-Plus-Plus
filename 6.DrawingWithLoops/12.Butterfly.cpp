// Butterfly.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

#pragma region First part
	for (int row = 1; row <= size-2; row++)
	{
		if (row % 2 == 0)
		{
			cout << string(size - 2, '-')
				<< "\\ "
				<< "/"
				<< string(size - 2, '-')
				<< endl;
		}
		else
		{
			cout << string(size - 2, '*')
				<< "\\ "
				<< "/"
				<< string(size - 2, '*')
				<< endl;
		}
	}
#pragma endregion

#pragma region Middle
	cout << string(size - 1, ' ')
		<< "@"
		<< endl;
#pragma endregion

#pragma region Second part
	for (int row = size; row <= size*2 - 3; row++)
	{
		if (row % 2 == 0)
		{
			cout << string(size - 2, '-')
				<< "/ "
				<< "\\"
				<< string(size - 2, '-')
				<< endl;
		}
		else
		{
			cout << string(size - 2, '*')
				<< "/ "
				<< "\\"
				<< string(size - 2, '*')
				<< endl;
		}
	}
#pragma endregion

    return 0;
}

