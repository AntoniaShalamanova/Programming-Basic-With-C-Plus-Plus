// SumDigits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int sum=0; 

	while (num != 0)
	{
		sum += num % 10;
		num = num / 10;
	}
	cout << sum << endl;
    return 0;
}

