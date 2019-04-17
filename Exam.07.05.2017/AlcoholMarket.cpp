// AlcoholMarket.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double price_whiskey, liters_beer, liters_wine, liters_brandy, liters_whiskey;
	cin >> price_whiskey >> liters_beer >> liters_wine >> liters_brandy >> liters_whiskey;

	double price_brandy = (price_whiskey / 2);
	double price_wine = price_brandy - (0.4*price_brandy);
	double price_beer = price_brandy - (0.8*price_brandy);

	double whiskey = price_whiskey * liters_whiskey;
	double beer = price_beer * liters_beer;
	double wine = price_wine * liters_wine;
	double brandy = price_brandy * liters_brandy;

	cout << fixed << setprecision(2) << whiskey + beer + wine + brandy << endl;

    return 0;
}

