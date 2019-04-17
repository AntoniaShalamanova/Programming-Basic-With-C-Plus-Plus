// CurrencyConverter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double amount;
	double middle_amount;
	string input_currency, output_currency;
	cin >> amount >> input_currency >> output_currency;

	if (input_currency == "USD")
	{
		middle_amount = amount*1.79549;
	}
	else if (input_currency == "EUR")
	{
		middle_amount = amount*1.95583;
	}
	else if (input_currency == "GBP")
	{
		middle_amount = amount*2.53405;
	}
	else if (input_currency == "BGN")
	{
		middle_amount = amount;
	}



	if (output_currency == "USD")
	{
		cout << fixed << setprecision(2) << middle_amount / 1.79549 << " USD" << endl;
	}
	else if (output_currency == "EUR")
	{
		cout << fixed << setprecision(2) << middle_amount / 1.95583 << " EUR" << endl;
	}
	else if (output_currency == "GBP")
	{
		cout << fixed << setprecision(2) << middle_amount / 2.53405 << " GBP" << endl;
	}
	else if (output_currency == "BGN")
	{
		cout << fixed << setprecision(2) << middle_amount << " BGN" << endl;
	}

	return 0;
}

