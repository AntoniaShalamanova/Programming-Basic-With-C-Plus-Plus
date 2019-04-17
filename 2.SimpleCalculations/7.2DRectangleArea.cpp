// 2DRectangleArea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x1, y1, x2, y2;
	cin>> x1>> y1>> x2>> y2;
	double small_side = abs(x1-x2);
	double large_side = abs(y1 - y2);
	cout << small_side*large_side<<endl;
	cout << 2 * (small_side+large_side);
    return 0;
}

