// NumberInRange1100.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter a number in the range [1...100]: ";
	cin >> num;

	while (num < 1 || num > 100)
	{
		cout << "Invalid number! " << endl;
		cout << "Enter a number in the range [1...100]: ";
		cin >> num;
	}
	cout << "The number is: " << num << endl;
    return 0;
}

