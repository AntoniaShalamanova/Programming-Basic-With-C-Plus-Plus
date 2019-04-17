// DogHouse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double length, height;
	cin >> length >> height;

	double lateral_walls_area = 2 * length * (length / 2);
	double back_wall_area = (length / 2)*(length / 2) + 
							(length / 2 * (height - length / 2)) / 2;
	double front_wall_area = back_wall_area - (length / 5)*(length / 5);
	double roof_area = (length*length / 2) * 2;

	double liters_green_paint = (lateral_walls_area + back_wall_area + front_wall_area) / 3;
	double liters_red_paint = roof_area / 5;

	cout << fixed << setprecision(2) << liters_green_paint << endl;
	cout << fixed << setprecision(2) << liters_red_paint << endl;
    return 0;
}

