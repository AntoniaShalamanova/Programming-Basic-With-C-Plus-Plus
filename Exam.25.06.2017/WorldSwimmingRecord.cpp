// WorldSwimmingRecord.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double record, meters, ivanchos_time;
	cin >> record >> meters >> ivanchos_time;

	double seconds = meters*ivanchos_time;
	double total_seconds = seconds + floor((meters * 1.0 / 15.0))*12.5;

	if (record <= total_seconds)
	{
		cout << "No, he failed! He was " << fixed << setprecision(2)
			<< total_seconds - record << " seconds slower." << endl;
	}
	else
	{
		cout << "Yes, he succeeded! The new world record is " <<
			fixed << setprecision(2) << total_seconds << " seconds." << endl;
	}
    return 0;
}

