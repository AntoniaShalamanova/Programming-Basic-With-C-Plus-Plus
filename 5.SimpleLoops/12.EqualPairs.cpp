// EqualPairs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int number_of_inputs;
	double sum;
	double current_sum;
	double max_diff = INT16_MIN;
	cin >> number_of_inputs;

	for (int i = 0; i < 1; i++)
	{
		double num_1, num_2;
		cin >> num_1 >> num_2;
		sum=num_1 + num_2;
		for (int i = 1; i < number_of_inputs; i++)
		{
			double num_1, num_2;
			cin >> num_1 >> num_2;
			current_sum = num_1 + num_2;
			double diff = abs(current_sum - sum);
			if (diff>max_diff)
			{
				max_diff = diff;
			}
			sum = current_sum;
		}
	}

	if (max_diff == 0)
	{
		cout << "Yes, value=" << current_sum << endl;
	}
	else
	{
		cout << "No, maxdiff=" << max_diff << endl;
	}
    return 0;
}

