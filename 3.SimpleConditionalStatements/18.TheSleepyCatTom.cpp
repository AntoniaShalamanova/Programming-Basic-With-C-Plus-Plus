// TheSleepyCatTom.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int holidays;
	cin >> holidays;
	int working_days = 365 - holidays;
	int total_playtime = holidays * 127 + working_days * 63;
	if (total_playtime<30000)
	{
		int norm_difference = 30000 - total_playtime;
		int hours = norm_difference / 60;
		int minutes = norm_difference % 60;
		cout << "Tom sleeps well" << endl 
			 << hours << " hours and " << minutes << " minutes less for play" << endl;
	}
	else if (total_playtime>30000)
	{
		int norm_difference = total_playtime-30000;
		int hours = norm_difference / 60;
		int minutes = norm_difference % 60;
		cout << "Tom will run away" << endl
			<< hours << " hours and " << minutes << " minutes more for play" << endl;
	}
    return 0;
}

