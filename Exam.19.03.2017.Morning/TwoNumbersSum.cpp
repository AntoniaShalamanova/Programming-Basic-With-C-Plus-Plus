// TwoNumbersSum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int begining_number, ending_number, magic_number;
	cin >> begining_number >> ending_number >> magic_number;

	int count = 0;
	for (int first_num = begining_number; first_num >= ending_number; first_num--)
	{
		for (int second_num = begining_number; second_num >= ending_number; second_num--)
		{
			count++;
			if (first_num + second_num == magic_number)
			{
				cout << "Combination N:" << count << " (" << first_num << " + "
					<< second_num << " = " << magic_number << ")" << endl;
				return 0;
			}
		}
	}
	cout << count << " combinations - neither equals " << magic_number << endl;
    return 0;
}

