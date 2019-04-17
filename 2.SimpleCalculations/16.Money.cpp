// Money.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int bitcoin;
	double bitcoin_BGN, yuan_USD, USD_BGN, BGN, EUR;
	double yuan, commission;
	cin >> bitcoin >> yuan >> commission;
	bitcoin_BGN = bitcoin * 1168;
	yuan_USD = yuan * 0.15;
	USD_BGN = yuan_USD * 1.76;
	BGN = bitcoin_BGN + USD_BGN;
	EUR = BGN / 1.95;
	cout << fixed << setprecision(2) << EUR - EUR * commission / 100;
	return 0;
}



