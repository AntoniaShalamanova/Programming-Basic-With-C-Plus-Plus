// TradeComissions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string town;
	double sales;
	double commission;
	cin >> town>> sales;

	if (town == "Sofia")
	{
		if (sales >= 0 && sales <= 500)
		{
			commission = sales*0.05;
			cout << fixed << setprecision(2) << commission<<endl;
		}
		else if (sales > 50 && sales <= 1000)
		{
			commission = sales*0.07;
			cout << fixed << setprecision(2) << commission << endl;
		}
		else if (sales > 1000 && sales <= 10000)
		{
			commission = sales*0.08;
			cout << fixed << setprecision(2) << commission << endl;
		}
		else if (sales > 10000)
		{
			commission = sales*0.12;
			cout << fixed << setprecision(2) << commission << endl;
		}
		else
		{
			cout << "error" << endl;
		}
	}

	else if (town == "Varna")
	{
		if (sales >= 0 && sales <= 500)
		{
			commission = sales*0.045;
			cout << fixed << setprecision(2) << commission << endl;
		}
		else if (sales > 500 && sales <= 1000)
		{
			commission = sales*0.075;
			cout << fixed << setprecision(2) << commission << endl;
		}
		else if (sales > 1000 && sales <= 10000)
		{
			commission = sales*0.1;
			cout << fixed << setprecision(2) << commission << endl;
		}
		else if (sales > 10000)
		{
			commission = sales*0.13;
			cout << fixed << setprecision(2) << commission << endl;
		}
		else
		{
			cout << "error" << endl;
		}
	}

	else if (town == "Plovdiv")
	{
		if (sales >= 0 && sales <= 500)
		{
			commission = sales*0.055;
			cout << fixed << setprecision(2) << commission << endl;
		}
		else if (sales >500 && sales <= 1000)
		{
			commission = sales*0.08;
			cout << fixed << setprecision(2) << commission << endl;
		}
		else if (sales > 1000 && sales <= 10000)
		{
			commission = sales*0.12;
			cout << fixed << setprecision(2) << commission << endl;
		}
		else if (sales > 10000)
		{
			commission = sales*0.145;
			cout << fixed << setprecision(2) << commission << endl;
		}
		else
		{
			cout << "error" << endl;
		}
	}
	else
	{
		cout << "error" << endl;
	}
    return 0;
}

