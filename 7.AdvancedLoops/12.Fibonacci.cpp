// Fibonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int previous_num = 1;
	int current_num = 1;
	int increment = 2;
	int sum=0;

	if (num == 0 || num == 1)
	{
		sum = 1;
	}
	else
	{
		while (increment <= num)
		{
			sum = previous_num + current_num;
			previous_num = current_num;
			current_num = sum;
			increment++;
		}
	}
	cout << sum << endl;
    return 0;
}

