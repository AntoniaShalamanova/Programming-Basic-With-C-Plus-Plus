// ThreeBrothers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double time_1, time_2, time_3, time_for_fishing;
	cin >> time_1 >> time_2 >> time_3 >> time_for_fishing;

	double total_time = 1/(1 / time_1 + 1 / time_2 + 1 / time_3);
	double time_with_break = total_time + total_time*0.15;
	cout << "Cleaning time: " << fixed << setprecision(2)
		<< time_with_break << endl;
	double diff= abs(time_with_break - time_for_fishing);
	int c = ceil(diff);
	int f = floor(diff);
	if (time_with_break > time_for_fishing)
	{
		cout << "No, there isn't a surprise - shortage of time -> "
			<< c
			<< " hours." << endl;
	}
	else
	{
		cout<<"Yes, there is a surprise - time left -> "
			<< f
			<< " hours." << endl;
	}
    return 0;
}

