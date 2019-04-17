// OddEvenPosition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int number_of_inputs;
	double odd_sum = 0, even_sum = 0;
	double even_min = INT16_MAX, even_max = INT16_MIN;
	double odd_min = INT16_MAX, odd_max = INT16_MIN;
	cin >> number_of_inputs;
	//cout << endl;

	for (int i = 1; i <= number_of_inputs; i++)
	{
		double num;
		cin >> num;
		if (i % 2 == 0)
		{
			even_sum += num;
			if (num<even_min)
			{
				even_min = num;
			}
			if (num>even_max)
			{
				even_max = num;
			}
		}
		else
		{
			odd_sum += num;
			if (num<odd_min)
			{
				odd_min = num;
			}
			if (num>odd_max)
			{
				odd_max = num;
			}
		}
	}

	//cout << endl;
	cout << "OddSum=" << odd_sum << ", ";
	if (odd_min==INT16_MAX)
	{
		cout << "OddMin=No" << ", ";
	}
	else
	{
		cout << "OddMin=" << odd_min << ", ";
	}
	if (odd_max == INT16_MIN)
	{
		cout << "OddMax=No" << ", ";
	}
	else
	{
		cout << "OddMax=" << odd_max << ", ";
	}

	cout << "EvenSum=" << even_sum << ", ";
	if (even_min == INT16_MAX)
	{
		cout << "EvenMin=No" << ", ";
	}
	else
	{
		cout << "EvenMin=" << even_min << ", ";
	}
	if (even_max == INT16_MIN)
	{
		cout << "EvenMax=No" << endl;
	}
	else
	{
		cout << "EvenMax=" << even_max << endl;
	}
    return 0;
}

