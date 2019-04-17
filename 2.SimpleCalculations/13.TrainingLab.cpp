#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double length, width;
	cin >> length >> width;
	int h = length * 100;
	int w = width * 100;
	int rows = h / 120;
	int places_for_row = (w - 100) / 70;
	int places_count = rows*places_for_row - 3;
	cout << places_count;
	return 0;
}



