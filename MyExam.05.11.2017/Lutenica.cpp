// Lutenica.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double kg_tomatoes;
	int boxes, jars;
	cin >> kg_tomatoes >> boxes >> jars;

	double kg_lutenica = kg_tomatoes / 5;
	double full_jars = kg_lutenica / 0.535;
	double full_boxes = full_jars / jars;

	int floated_kg_lutenica = float(kg_lutenica);
	int floated_more_boxes = float(boxes - full_boxes);
	int floated_more_jars = float(boxes*jars - full_jars);
	int floated_left_boxes = float(full_boxes - boxes);
	int floated_left_jars = float(full_jars - boxes*jars);

	cout << "Total lutenica: " << floated_kg_lutenica << " kilograms." << endl;
	if (full_boxes < boxes)
	{
		cout << floated_more_boxes << " more boxes needed." << endl;
		cout << floated_more_jars << " more jars needed." << endl;
	}
	else
	{
		cout << floated_left_boxes << " boxes left." << endl;
		cout << floated_left_jars << " jars left." << endl;
	}
	return 0;
}

