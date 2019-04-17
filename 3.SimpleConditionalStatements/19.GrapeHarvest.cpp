// Harvest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int total_vineyard, liters_for_sale, number_of_workers;
	double square_meter_grapes;
	cin >> total_vineyard >> square_meter_grapes >> liters_for_sale >> number_of_workers;
	int for_wine = total_vineyard*0.4;
	int total_kg = for_wine*square_meter_grapes;
	double produced_liters = total_kg / 2.5;
	if (produced_liters>=liters_for_sale)
	{
		double leaving_wine = produced_liters - liters_for_sale;
		double for_one_worker = leaving_wine / number_of_workers;
		cout << "Good harvest this year! Total wine: " << floor(produced_liters) << " liters." << endl;
		cout << ceil(leaving_wine) << " liters left -> "
			 << ceil(for_one_worker) << " liters per person." << endl;
	}
	else if (produced_liters<liters_for_sale)
	{
		double deficit = liters_for_sale - produced_liters;
		cout << "It will be a tough winter! More " << floor(deficit) << " liters wine needed." << endl;
	}
	return 0;
}





