// TriangleOfDollars.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;

	for (int row = 1; row <= size; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			cout << "$ ";
		}
		cout << endl;
	}
    return 0;
}

