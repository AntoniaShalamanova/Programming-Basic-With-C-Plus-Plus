// DailyEarnings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int working_day;
	double day_money, USD_rate;
	cin >> working_day >> day_money >> USD_rate;
	double month_money = day_money * working_day;
	double year_money = month_money * 12 + month_money * 2.5;
	double total_year_money = year_money - year_money * 0.25;
	double BGN = total_year_money * USD_rate;
	cout << fixed << setprecision(2) << BGN / 365;
	return 0;
}



