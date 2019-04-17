// VegetableExchange.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double vegetable_price, fruits_price;
	int vegetable_kg, fruits_kg;
	cin >> vegetable_price >> fruits_price >> vegetable_kg >> fruits_kg;
	double BGN = vegetable_price*vegetable_kg + fruits_price*fruits_kg;
	double EUR = BGN / 1.94;
	cout << fixed << setprecision(2) << EUR;
	return 0;
}



