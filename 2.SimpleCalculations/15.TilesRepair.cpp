// TilesRepair.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double landing_meters, width_tiles, lenght_tiles, width_seat, lenght_seat;
	cin >> landing_meters >> width_tiles >> lenght_tiles >> width_seat >> lenght_seat;
	double tiles_count = (landing_meters * landing_meters - width_seat * lenght_seat) / (width_tiles * lenght_tiles);
	cout << fixed << setprecision(2) << tiles_count << endl;
	cout << fixed << setprecision(2) << tiles_count*0.2 << endl;
	return 0;
}



