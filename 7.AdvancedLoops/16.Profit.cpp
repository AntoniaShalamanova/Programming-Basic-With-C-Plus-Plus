// Profit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int count_1, count_2, count_5, sum, all_sum;
	int sum_1, sum_2, sum_5;
	cin >> count_1 >> count_2 >> count_5 >> sum;

	for (int i_1 = 0; i_1 <= count_1; i_1++)
	{
		for (int i_2 = 0; i_2 <= count_2; i_2++)
		{
			for (int i_5 = 0; i_5 <= count_5; i_5++)
			{
				all_sum = i_1 * 1 + i_2 * 2 + i_5 * 5;
				if (all_sum == sum)
				{
					cout << i_1 << " * 1 lv. + " << i_2 << " * 2 lv. + " << i_5 << " * 5 lv. = " << sum << " lv." << endl;
				}
			}
		}
	}
    return 0;
}

