// HousePainting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double height, length, h;
	cin >> height >> length >> h;

	double front_and_back_walls = (height*height) * 2 - (1.2 * 2);
	double lateral_walls = (height*length) * 2 - (1.5*1.5) * 2;
	double rectangles_of_roof = (height*length) * 2;
	double triangles_of_roof = (height*h);

	double liters_green_paint = (front_and_back_walls + lateral_walls) / 3.4;
	double liters_red_paint = (rectangles_of_roof + triangles_of_roof) / 4.3;

	cout << fixed << setprecision(2) << liters_green_paint << endl;
	cout << fixed << setprecision(2) << liters_red_paint << endl;
    return 0;
}

