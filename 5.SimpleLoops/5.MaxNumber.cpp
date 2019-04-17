// MaxNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int number_of_inputs;
	int max_num = INT16_MIN;
	cin >> number_of_inputs;
	for (int i = 0; i < number_of_inputs; i++)
	{
		int num;
		cin >> num;
		if (num > max_num)
		{
			max_num = num;
		}
	}
	cout << max_num << endl;
    return 0;
}

