// NumberTable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int num;
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			num = row + col + 1;
			if (num > size)
			{
				num = size * 2 - num;
			}
			cout << num << " ";
		}
		cout << endl;
	}
    return 0;
}

