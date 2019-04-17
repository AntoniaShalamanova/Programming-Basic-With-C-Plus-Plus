// ToyShop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double price_of_excursion;
	int number_of_puzzles, number_of_dolls, number_of_bears, number_of_minions, number_of_trucks;
	cin >> price_of_excursion >> number_of_puzzles >> number_of_dolls 
		>> number_of_bears >> number_of_minions >> number_of_trucks;

	int count_of_toys = number_of_puzzles + number_of_dolls
		+ number_of_bears + number_of_minions + number_of_trucks;

	double earn_money = number_of_puzzles * 2.6
						+ number_of_dolls * 3
						+ number_of_bears * 4.1
						+ number_of_minions * 8.2
						+ number_of_trucks * 2;
	if (count_of_toys >= 50)
	{
		earn_money -= earn_money*0.25;
	}

	double all_money = earn_money - earn_money*0.1;
	if (all_money >= price_of_excursion)
	{
		cout << "Yes! " << fixed << setprecision(2) << all_money - price_of_excursion
			<< " lv left." << endl;
	}
	else
	{
		cout << "Not enough money! " << fixed << setprecision(2)
			<< price_of_excursion - all_money << " lv needed." << endl;
	}
    return 0;
}

