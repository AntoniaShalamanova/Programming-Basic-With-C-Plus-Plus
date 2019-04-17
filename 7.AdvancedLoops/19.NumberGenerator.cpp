// NumberGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int hundreds, tens, units, special_number, control_number;
	cin >> hundreds >> tens >> units >> special_number >> control_number;

	int num = 0;
	for (int num_1 = hundreds; num_1 >= 1; num_1--)
	{
		for (int num_2 = tens; num_2 >= 1; num_2--)
		{
			for (int num_3 = units; num_3 >= 1; num_3--)
			{
				num = num_1 * 100 + num_2 * 10 + num_3;
				if (num % 3 == 0)
				{
					special_number += 5;
				}
				else if (num % 10 == 5)
				{
					special_number -= 2;
				}
				else if (num % 2 == 0)
				{
					special_number *= 2;
				}
				if (special_number >= control_number)
				{
					cout << "Yes! Control number was reached! Current special number is "
						<< special_number << "." << endl;
					return 0;
				}
			}
		}
	}
	if (special_number < control_number)
	{
		cout << "No! " << special_number 
			 << " is the last reached special number." << endl;
	}
    return 0;
}

