// TrapezoidArea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double h, a, b;
	cin >> a>>b>> h;
	cout << (a + b) *h / 2;
    return 0;
}

