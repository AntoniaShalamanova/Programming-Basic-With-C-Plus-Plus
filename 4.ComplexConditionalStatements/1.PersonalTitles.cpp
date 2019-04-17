// PersonalTitles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double age;
	char gender;
	cin >> age >> gender;
	if (gender== 'f')
	{
		if (age>= 16)
		{
			cout << "Ms." << endl;
		}
		else
		{
			cout << "Miss" << endl;
		}
	}
	else if (gender == 'm')
	{
		if (age >= 16)
		{
			cout << "Mr." << endl;
		}
		else
		{
			cout << "Master" << endl;
		}
	}
    return 0;
}

