// TriangleArea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a, h;
	cin >> a >> h;
	cout << fixed<<setprecision(2)<<a*h/2;
    return 0;
}

