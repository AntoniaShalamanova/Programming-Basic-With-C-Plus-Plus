// AreaOfFigures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string name;
	cin >> name;
	double area;

	if (name == "square")
	{
		double a;
		cin >> a;
		area = a*a;
	}
	else if (name == "rectangle")
	{
		double a, b;
		cin >> a >> b;
		area = a*b;
	}
	else if (name == "circle")
	{
		double radius;
		cin >> radius;
		area = 3.14159265359*radius*radius;
	}
	else if (name == "triangle")
	{
		double a, ha;
		cin >> a >> ha;
		area = (a*ha)/2;
	}
	cout << fixed << setprecision(3) << area << endl;
    return 0;
}

