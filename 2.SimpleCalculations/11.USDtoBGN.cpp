// USDtoBGN.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double USD;
	cin >> USD;
	double BGN = USD* 1.79549;
	cout << fixed << setprecision(2) << BGN;
    return 0;
}

