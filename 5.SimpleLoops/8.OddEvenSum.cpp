// OddEvenSum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int number_of_inputs;
	int even_sum = 0;
	int odd_sum = 0;
	cin >> number_of_inputs;

	for (int i = 1; i <= number_of_inputs; i++)
	{
		int num;
		cin >> num;

		if (i%2 == 0)
		{
			even_sum += num;
		}
		else
		{
			odd_sum += num;
		}
	}

	if (odd_sum == even_sum)
	{
		cout << "Yes" << endl;
		cout << "Sum = " << odd_sum << endl;
	}
	else
	{
		cout << "No" << endl;
		cout << "Diff = " << abs(odd_sum-even_sum) << endl;
	}
    return 0;
}

