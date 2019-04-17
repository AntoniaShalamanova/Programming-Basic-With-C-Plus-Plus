// CharityCampaign.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int days, confectioner, cakes, waffles, pancakes;
	cin >> days >> confectioner >> cakes >> waffles >> pancakes;

	double sum_for_day = (cakes * 45 + waffles*5.8 + pancakes*3.2) * confectioner;
	double all_sum = sum_for_day * days;
	double total_sum = all_sum - all_sum / 8;
	cout << fixed << setprecision(2) << total_sum << endl;
    return 0;
}

