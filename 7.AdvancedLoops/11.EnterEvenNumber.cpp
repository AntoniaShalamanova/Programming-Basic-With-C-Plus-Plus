// EnterEvenNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int even_num;
	cout << "Enter even number: ";
	cin >> even_num;

	while (even_num % 2 != 0)
	{
		cout << "Invalid number! " << endl;
		cout << "Enter even number: ";
		cin >> even_num;
	}
	cout << "Even number entered: " << even_num << endl;
    return 0;
}

