// GreatestCommonDivisorGCD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	
	int temp;
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	cout << a << endl;
    return 0;
}

