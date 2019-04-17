// SquareFrame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;
#pragma region Header
	cout << "+ ";
	for (int i = 0; i < size - 2; i++)
	{
		cout << "- ";
	}
	cout << "+" << endl;
#pragma endregion

#pragma region Middle
	for (int row = 0; row < size-2; row++)
	{
		cout << "| ";
		for (int col = 0; col < size-2; col++)
		{
			cout << "- ";
		}
		cout << "|" << endl;
	}
#pragma endregion


#pragma region Footer
	cout << "+ ";
	for (int i = 0; i < size - 2; i++)
	{
		cout << "- ";
	}
	cout << "+" << endl;
#pragma endregion
	return 0;
}

