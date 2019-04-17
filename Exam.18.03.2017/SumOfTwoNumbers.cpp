// SumOfTwoNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int begining_number, final_number, magic_number;
	cin >> begining_number >> final_number >> magic_number;

	int count = 0;
	for (int first_number = begining_number; first_number <= final_number; first_number++)
	{
		for (int second_number = begining_number; second_number <= final_number; second_number++)
		{
			count++;
			if (first_number + second_number == magic_number)
			{
				cout << "Combination N:" << count << " (" << first_number << " + " 
					 << second_number << " = " << magic_number << ")" << endl;
				return 0;
			}
		}
	}
	cout << count << " combinations - neither equals " << magic_number << endl;
    return 0;
}

