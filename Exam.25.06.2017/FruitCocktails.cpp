// FruitCocktails.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string fruit, size;
	int number_of_cocktails;
	cin >> fruit >> size >> number_of_cocktails;
	double sum = 0;
	if (size == "small")
	{
		if (fruit == "Watermelon")
		{
			sum += 2 * 56;
		}
		else if (fruit == "Mango")
		{
			sum += 2 * 36.66;
		}
		else if (fruit == "Pineapple")
		{
			sum += 2 * 42.1;
		}
		else if (fruit == "Raspberry")
		{
			sum += 2 * 20;
		}
	}

	else if (size == "big")
	{
		if (fruit == "Watermelon")
		{
			sum += 5 * 28.7;
		}
		else if (fruit == "Mango")
		{
			sum += 5 * 19.6;
		}
		else if (fruit == "Pineapple")
		{
			sum += 5 * 24.8;
		}
		else if (fruit == "Raspberry")
		{
			sum += 5 * 15.2;
		}
	}

	double sum_all = sum*number_of_cocktails;
	if (sum_all > 1000)
	{
		sum_all -= sum_all*0.5;
	}
	else if (sum_all >= 400 && sum_all <= 1000)
	{
		sum_all -= sum_all*0.15;
	}

	cout << fixed << setprecision(2) << sum_all << " lv." << endl;
    return 0;
}

