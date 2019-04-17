// DivisionWithoutResidue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int number_of_inputs;
	double p1=0, p2=0, p3=0;
	cin >> number_of_inputs;

	for (int i = 0; i < number_of_inputs; i++)
	{
		int number;
		cin >> number;
		if (number % 2 == 0)
		{
			p1++;
		}
		if (number % 3 == 0)
		{
			p2++;
		}
		if (number % 4 == 0)
		{
			p3++;
		}
	}

	p1 = p1 / number_of_inputs * 100;
	p2 = p2 / number_of_inputs * 100;
	p3 = p3 / number_of_inputs * 100;

	cout << fixed << setprecision(2) << p1 << "%" << endl;
	cout << fixed << setprecision(2) << p2 << "%" << endl;
	cout << fixed << setprecision(2) << p3 << "%" << endl;
    return 0;
}

