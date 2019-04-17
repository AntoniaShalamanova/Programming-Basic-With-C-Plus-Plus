// PointOnRectangleBorder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x1, y1, x2, y2, x, y;
	cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
	double left_border = fmin(x1, x2);
	double right_border = fmax(x1, x2);
	double top_border = fmin(y1, y2);
	double bottom_border = fmax(y1, y2);

	bool is_on_left_border = (x==left_border) && (y >= top_border) && (y<=bottom_border);
	bool is_on_right_border = (x == right_border) && (y >= top_border) && (y <= bottom_border);
	bool is_on_top_border = (y==top_border) && (x>= left_border) && (x<= right_border);
	bool is_on_bottom_border = (y == bottom_border) && (x >= left_border) && (x <= right_border);

	if (is_on_left_border || is_on_right_border || is_on_top_border || is_on_bottom_border)
	{
		cout << "Border" << endl;
	}
	else
	{
		cout << "Inside / Outside" << endl;
	}
    return 0;
}

