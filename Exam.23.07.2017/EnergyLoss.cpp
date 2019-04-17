// EnergyLoss.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int days, dancers;
	cin >> days >> dancers;

	int loss_energy = 0, total_loss_energy = 0, total_remaining_energy, total_energy;
	double remaining_energy_for_dancer;
	bool odd_day, even_day, odd_hour, even_hour;

	for (int day = 1; day <= days; day++)
	{
		int hours;
		cin >> hours;

		odd_day = (day % 2 != 0);
		even_day = (day % 2 == 0);
		odd_hour = (hours % 2 != 0);
		even_hour = (hours % 2 == 0);
		if (even_day && even_hour)
		{
			loss_energy = dancers * 68;
		}
		else if (odd_day && even_hour)
		{
			loss_energy = dancers * 49;
		}
		else if (even_day && odd_hour)
		{
			loss_energy = dancers * 65;
		}
		else if (odd_day && odd_hour)
		{
			loss_energy = dancers * 30;
		}
		total_loss_energy += loss_energy;
	}

	total_energy = days*dancers * 100;
	total_remaining_energy = total_energy - total_loss_energy;
	remaining_energy_for_dancer = total_remaining_energy * 1.0 / dancers / days;
	if (remaining_energy_for_dancer < 50)
	{
		cout << "They are wasted! Energy left: " << fixed << setprecision(2)
			 <<remaining_energy_for_dancer << endl;
	}
	else
	{
		cout << "They feel good! Energy left: " << fixed << setprecision(2)
			 << remaining_energy_for_dancer << endl;
	}
    return 0;
}

