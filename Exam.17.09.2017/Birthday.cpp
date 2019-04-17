// Birthday.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double length, width, height, percent;
	cin >> length >> width >> height >> percent;

	double content = length*width*height;
	double liters = content*0.001;
	double total_content = liters - (liters*percent/100);
	cout << fixed << setprecision(3) << total_content << endl;
    return 0;
}

