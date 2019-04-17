// GroupName.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char big_letter, small_letter_1, small_letter_2, small_letter_3;
	int num, count=0;
	cin >> big_letter >> small_letter_1 >> small_letter_2 >> small_letter_3 >> num;

	for (char i = 'A'; i <= big_letter; i++)
	{
		for (char i = 'a'; i <= small_letter_1; i++)
		{
			for (char i = 'a'; i <= small_letter_2; i++)
			{
				for (char i = 'a'; i <= small_letter_3; i++)
				{
					for (int i = 0; i <= num; i++)
					{
						count++;
					}
				}
			}
		}
	}
	cout << count-1 << endl;
    return 0;
}

