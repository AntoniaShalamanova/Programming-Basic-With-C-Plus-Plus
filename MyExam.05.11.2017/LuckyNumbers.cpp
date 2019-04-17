// LuckyNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int first_num = 1; first_num <= 9; first_num++)
	{
		for (int second_num = 1; second_num <= 9; second_num++)
		{
			for (int third_num = 1; third_num <= 9; third_num++)
			{
				for (int fourth_num = 1; fourth_num <= 9; fourth_num++)
				{
					bool is_lucky_num = (first_num + second_num == third_num + fourth_num)
						&& (num % (first_num + second_num) == 0);

					if (is_lucky_num)
					{
						cout << first_num << second_num << third_num << fourth_num << " ";
					}
				}
			}
		}
	}
	return 0;
}

