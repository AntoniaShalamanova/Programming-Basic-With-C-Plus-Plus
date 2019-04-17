// GreaterNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num_1, num_2;
	cin >> num_1 >> num_2;
	if (num_1>num_2)
	{
		cout << num_1;
	}
	else
	{
		cout << num_2;
	}
    return 0;
}

