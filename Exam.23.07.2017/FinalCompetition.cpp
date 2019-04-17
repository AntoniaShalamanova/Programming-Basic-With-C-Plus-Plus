// FinalCompetition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int dancers;
	double points;
	string season, place;
	cin >> dancers >> points >> season >> place;

	double prize, money_for_per_person, rest_money, money_for_charity;
	if (place == "Bulgaria")
	{
		prize = points*dancers;
		if (season == "summer")
		{
			prize -= prize*0.05;
		}
		else if (season == "winter")
		{
			prize -= prize*0.08;
		}
	}
	else if (place == "Abroad")
	{
		prize = points*dancers + (points*dancers)*0.5;
		if (season == "summer")
		{
			prize -= prize*0.1;
		}
		else if (season == "winter")
		{
			prize -= prize*0.15;
		}
	}
	rest_money = prize - prize*0.75;
	money_for_charity = prize*0.75;
	money_for_per_person = rest_money / dancers;

	cout << "Charity - " << fixed << setprecision(2) << money_for_charity << endl;
	cout << fixed << setprecision(2) << "Money per dancer - "
		 << money_for_per_person << endl;
    return 0;
}

