// WorkHours.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int given_hours, workers_number, work_days;
	cin >> given_hours >> workers_number >> work_days;

	int made_hours = work_days * workers_number * 8;
	if (made_hours > given_hours)
	{
		cout << made_hours - given_hours << " hours left" << endl;
	}
	else
	{
		cout << given_hours - made_hours << " overtime" << endl;
		cout << "Penalties: " << (given_hours - made_hours)*work_days << endl;
	}
    return 0;
}

