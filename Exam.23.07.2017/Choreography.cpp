// Choreography.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int steps, dancers, days;
	cin >> steps >> dancers >> days;

	double percent_steps_for_day = (steps * 1.0 / days ) / steps;
	double percent_for_day = ceil(percent_steps_for_day*100);
	double percent_steps_for_per_dancer = percent_for_day / dancers;

	if (percent_for_day <= 13)
	{
		cout << "Yes, they will succeed in that goal! " << fixed 
			 << setprecision(2) << percent_steps_for_per_dancer << "%." << endl;
	}
	else
	{
		cout << "No, They will not succeed in that goal! Required " << fixed
			 << setprecision(2) << percent_steps_for_per_dancer
			 << "% steps to be learned per day." << endl;
	}
    return 0;
}

