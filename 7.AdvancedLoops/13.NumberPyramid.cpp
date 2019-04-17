// NumberPyramid.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int increment = 1;
	int row = 1;
	while (increment <= num)
	{
		for (int i = 1; i <= row; i++)
		{
			cout << increment << " ";
			increment++;
			if (increment > num)
			{
				break;
			}
		}
		cout << endl;
		row++;
	}
    return 0;
}

