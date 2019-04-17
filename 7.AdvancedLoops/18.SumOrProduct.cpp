// SumOrProduct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	bool sum, product;
	int count_sum = 0, count_product = 0;
	for (int num_1 = 1; num_1 <= 30; num_1++)
	{
		for (int num_2 = 1; num_2 <= 30; num_2++)
		{
			for (int num_3 = 1; num_3 <= 30; num_3++)
			{
				sum = (num_1 < num_2) &&
					  (num_2 < num_3) &&
					  (num_1 + num_2 + num_3 == num);
				product = (num_1 > num_2) &&
					      (num_2 > num_3) &&
					      (num_1 * num_2 * num_3 == num);
				if (sum)
				{
					cout << num_1 << " + " << num_2 << " + " 
						 << num_3 << " = " << num << endl;
					count_sum++;
				}
				if (product)
				{
					cout << num_1 << " * " << num_2 << " * "
						 << num_3 << " = " << num << endl;
					count_product++;
				}
			}
		}
	}
	if (count_sum == 0 && count_product == 0)
	{
		cout << "No!" << endl;
	}
    return 0;
}

