// TheSongOfTheWheels.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int first_num, second_num, third_num, fourth_num, counter = 0;
	bool password;
	string pass = {};
	for (first_num = 1; first_num <= 9; first_num++)
	{
		for (second_num = 1; second_num <= 9; second_num++)
		{
			for (third_num = 1; third_num <= 9; third_num++)
			{
				for (fourth_num = 1; fourth_num <= 9; fourth_num++)
				{
					password = (first_num < second_num)
						&& (third_num > fourth_num)
						&& (first_num*second_num + third_num*fourth_num == num);
					if (password)
					{
						cout << first_num << second_num
							<< third_num << fourth_num << " ";
						counter++;
						if (counter == 4)
						{
							pass = to_string(first_num) + 
								   to_string(second_num) + 
								   to_string(third_num) + 
								   to_string(fourth_num);
						}
					}
				}
			}

		}

	}

	if (counter == 0)
	{
		cout << "No!" << endl;
	}
	else if (counter < 4)
	{
		cout << endl;
		cout << "No!" << endl;
	}
	else if (counter >= 4)
	{
		cout << endl;
		cout << "Password: " << pass << endl;
	}
	return 0;
}

