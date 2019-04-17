// HalfSumElement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
	int number_of_inputs;
	int max_num=INT16_MIN;
	int sum=0;
	cin >> number_of_inputs;
	cout << endl;
	for (int i = 0; i < number_of_inputs; i++)
	{
		int num;
		cin >> num;
		if (num > max_num)
		{
			max_num = num;
			sum += max_num;
		}
		else
		{
			sum += num;
		}
	}
	sum = sum - max_num;

	if (max_num == sum)
	{
		cout << endl;
		cout << "Yes" << endl;
		cout << "Sum = " << max_num<<endl;
	}
	else
	{
		cout << endl;
		cout << "No" << endl;
		cout<<"Diff = "<< abs(max_num - sum)<<endl;
	}
    return 0;
}

