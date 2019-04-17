// DrawFort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

#pragma region Header
	int towers = size / 2;
	int middle = size*2-(towers * 2 + 4);
	cout << "/"
		<< string(towers, '^')
		<< "\\"
		<< string(middle, '_')
		<< "/"
		<< string(towers, '^')
		<< "\\"
		<< endl;
#pragma endregion

#pragma region Middle
	for (int row = 1; row <= size - 3; row++)
	{
		cout << "|"
			<< string(size*2 - 2, ' ')
			<< "|"
			<< endl;
	}
	cout << "|"
		<< string(size / 2 + 1, ' ')
		<< string(middle, '_')
		<< string(size / 2 + 1, ' ')
		<< "|"
		<< endl;
#pragma endregion

#pragma region Footer
	cout << "\\"
		<< string(towers, '_')
		<< "/"
		<< string(middle, ' ')
		<< "\\"
		<< string(towers, '_')
		<< "/"
		<< endl;
#pragma endregion

    return 0;
}

