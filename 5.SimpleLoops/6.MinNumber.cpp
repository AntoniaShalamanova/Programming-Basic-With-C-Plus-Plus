// MinNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int number_of_inputs;
	int sum;
	int min_num = INT16_MAX;
	cin >> number_of_inputs;
	for (int i = 0; i < number_of_inputs; i++)
	{
		int num;
		cin >> num;
		if (num<min_num)
		{
			min_num = num;
		}
	}
	cout << min_num;
    return 0;
}

