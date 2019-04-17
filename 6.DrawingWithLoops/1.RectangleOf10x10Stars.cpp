// RectangleOf10x10Stars.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	for (int row = 0; row < 10; row++)
	{
		for (int col = 0; col < 10; col++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

