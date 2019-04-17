// LeftAndRightSum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int number_of_inputs;
	int left_sum = 0, right_sum = 0;
	cin >> number_of_inputs;

	for (int i = 0; i < number_of_inputs; i++)
	{
		int num;
		cin >> num;
		left_sum += num;
	}

	for (int i = 0; i < number_of_inputs; i++)
	{
		int num;
		cin >> num;
		right_sum += num;
	}

	if (left_sum == right_sum)
	{
		cout << "Yes, sum = " << left_sum << endl;
	}
	else
	{
		cout << "No, diff = " << abs(left_sum - right_sum) << endl;
	}
    return 0;
}

