// SumNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int number_of_inputs;
	int sum=0;
	cin >> number_of_inputs;
	for (int i = 0; i < number_of_inputs; i++)
	{
		int num;
		cin >> num;
		sum += num;
	}
	cout << sum<<endl;
    return 0;
}

