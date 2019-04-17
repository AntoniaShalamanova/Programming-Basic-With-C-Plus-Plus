// PointInTheFigure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int h, x, y;
	cin >> h >> x >> y;


	if (x<0 || x>3 * h || y<0 || y>4 * h || (y>h && x<h) || (y>h && x>2 * h))
	{
		cout << "outside" << endl;
	}
	else if ((x>0 && x<3 * h && y>0 && y<h) || (x>h && x<2 * h && y>0 && y<4 * h))
	{
		cout << "inside" << endl;
	}
	else
	{
		cout << "border" << endl;
	}
    return 0;
}

