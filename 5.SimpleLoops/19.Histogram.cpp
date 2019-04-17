// Histogram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int number_of_inputs;
	double p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
	cin >> number_of_inputs;

	for (int i = 0; i < number_of_inputs; i++)
	{
		int number;
		cin >> number;
		if (number < 200)
		{
			p1++;
		}
		else if (number >= 200 && number <= 399)
		{
			p2++;
		}
		else if (number >= 400 && number <= 599)
		{
			p3++;
		}
		else if (number >= 600 && number <= 799)
		{
			p4++;
		}
		else if (number >= 800)
		{
			p5++;
		}
	}

	p1 = p1 / number_of_inputs * 100.0;
	p2 = p2 / number_of_inputs * 100.0;
	p3 = p3 / number_of_inputs * 100.0;
	p4 = p4 / number_of_inputs * 100.0;
	p5 = p5 / number_of_inputs * 100.0;

	cout << fixed << setprecision(2) << p1 <<"%"<< endl;
	cout << fixed << setprecision(2) << p2 <<"%"<< endl;
	cout << fixed << setprecision(2) << p3 <<"%"<< endl;
	cout << fixed << setprecision(2) << p4 <<"%"<< endl;
	cout << fixed << setprecision(2) << p5 <<"%"<< endl;
    return 0;
}

