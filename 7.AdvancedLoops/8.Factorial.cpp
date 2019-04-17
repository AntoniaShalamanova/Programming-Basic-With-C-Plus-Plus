// Factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int increment = 1;
	int product = 1;

	while (increment <= num)
	{
		product *= increment;
		increment++;
	}
	cout << product << endl;
    return 0;
}

