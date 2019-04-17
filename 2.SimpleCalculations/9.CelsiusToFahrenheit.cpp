// CelsiusToFahrenheit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double c;
	cin >> c; 
	double f = c*1.8+32;
	cout << f;
    return 0;
}

