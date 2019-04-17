// RadiansToDegrees.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double radians, pi = 3.1415;
	cin >> radians;
	int degrees = radians*180 / pi;
	cout << degrees;
    return 0;
}

