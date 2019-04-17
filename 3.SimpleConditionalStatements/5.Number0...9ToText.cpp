// Number09ToText.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	if (number==0)
	{
		cout << "zero" << endl;
	}
	else if (number == 1)
	{
		cout << "one" << endl;
	}
	else if (number == 2)
	{
		cout << "two" << endl;
	}
	else if (number == 3)
	{
		cout << "three" << endl;
	}
	else if (number == 4)
	{
		cout << "four" << endl;
	}
	else if (number == 5)
	{
		cout << "five" << endl;
	}
	else if (number == 6)
	{
		cout << "six" << endl;
	}
	else if (number == 7)
	{
		cout << "seven" << endl;
	}
	else if (number == 8)
	{
		cout << "eight" << endl;
	}
	else if (number ==9)
	{
		cout << "nine" << endl;
	}
	else if (number >9)
	{
		cout << "number too big" << endl;
	}
    return 0;
}

