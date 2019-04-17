// ControlNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int first_number, second_number, control_number;
	cin >> first_number >> second_number >> control_number;

	int total_sum = 0, sum, count = 0;
	for (int num_1 = 1; num_1 <= first_number; num_1++)
	{
		for (int num_2 = second_number; num_2 >= 1; num_2--)
		{
			count++;
			sum = num_1 * 2 + num_2 * 3;
			total_sum += sum;
			if (total_sum >= control_number)
			{
				cout << count << " moves" << endl;
				cout << "Score: " << total_sum << " >= " << control_number << endl;
				return 0;
			}
		}
	}
	cout << count << " moves" << endl;
    return 0;
}

