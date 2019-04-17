// Bills.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int months;
	cin >> months;

	double money_for_electricity, total_money_for_electricity = 0;
	double money_for_other_needs, total_money_for_other_needs = 0;
	double total_money_for_water = 20 * months;
	double total_money_for_internet = 15 * months;

	for (int month = 1; month <= months; month++)
	{
		cin >> money_for_electricity;
		total_money_for_electricity += money_for_electricity;
		money_for_other_needs = money_for_electricity + 20 + 15 
			                    + 0.2 * (money_for_electricity + 20 + 15);
		total_money_for_other_needs += money_for_other_needs;
	}
	double average = (total_money_for_water + total_money_for_internet 
					+ total_money_for_electricity + total_money_for_other_needs) / months;

	cout << "Electricity: " << fixed << setprecision(2) 
		 << total_money_for_electricity << " lv" << endl;
	cout << "Water: " << fixed << setprecision(2) 
		 << total_money_for_water << " lv" << endl;
	cout << "Internet: " << fixed << setprecision(2) 
		 << total_money_for_internet << " lv" << endl;
	cout << "Other: " << fixed << setprecision(2) 
		 << total_money_for_other_needs << " lv" << endl;
	cout << "Average: " << fixed << setprecision(2) 
		 << average << " lv" << endl;
    return 0;
}

