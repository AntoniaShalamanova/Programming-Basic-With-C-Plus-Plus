// Scholarship.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double salary, success, min_salary;
	cin >> salary >> success >> min_salary;

	double social = min_salary * 0.35;
	int social_scholarship = floor(social);
	double excelent = success * 25;
	int excelent_scholarship = floor(excelent);

	if (success < 4.5)
	{
		cout << "You cannot get a scholarship!" << endl;
	}
	else if (success >= 4.5 && success < 5.5 && salary < min_salary)
	{
		cout << "You get a Social scholarship " 
			<< social_scholarship << " BGN" << endl;
	}
	else if (success >= 4.5 && success < 5.5 && salary >= min_salary)
	{
		cout << "You cannot get a scholarship!" << endl;
	}
	else if (success >= 5.5 && salary < min_salary)
	{
		if (social_scholarship > excelent_scholarship)
		{
			cout << "You get a Social scholarship "
				<< social_scholarship << " BGN" << endl;
		}
		else
		{
			cout << "You get a scholarship for excellent results "
				<< excelent_scholarship << " BGN" << endl;
		}
	}
	else if (success >= 5.5 && salary >= min_salary)
	{
		cout << "You get a scholarship for excellent results "
			<< excelent_scholarship << " BGN" << endl;
	}
    return 0;
}

