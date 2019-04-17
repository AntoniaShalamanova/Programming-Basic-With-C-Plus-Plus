// DanceHall.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double length, width, side_of_wardrobe;
	cin >> length >> width >> side_of_wardrobe;

	double area = (length * 100)*(width * 100);
	double area_of_wardrobe = (side_of_wardrobe * 100) * (side_of_wardrobe * 100);
	double area_of_bench = area / 10;
	double free_area = area - (area_of_bench + area_of_wardrobe);
	double number_of_dancers = free_area / (40 + 7000);
	cout << floor(number_of_dancers) << endl;
    return 0;
}

