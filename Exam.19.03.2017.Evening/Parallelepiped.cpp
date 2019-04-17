// Parallelepiped.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int height = 4 * size + 4;
	int width = 3 * size + 1;
	int simbol = size - 2;
	int right_points = width - simbol - 2;
	
	cout << "+"
		<< string(simbol, '~')
		 <<"+"
		 << string(right_points, '.')
		 << endl;

	right_points--;
	int left_points = 0;
	for (int i = 1; i <= height / 2 - 1; i++)
	{
		cout << "|"
			 << string(left_points, '.')
			 << "\\"
			 << string(simbol, '~')
			 <<"\\"
			 << string(right_points, '.')
			 << endl;
		left_points++;
		right_points--;
	}
	left_points--;
	right_points++;

	right_points = left_points;
	left_points = 0;
	for (int i = 1; i <= height / 2 - 1; i++)
	{
		cout << string(left_points, '.')
			<< "\\"
			<< string(right_points, '.')
			<< "|"
			<< string(simbol, '~')
			<<"|"
			<< endl;
		left_points++;
		right_points--;
	}

	cout << string(left_points, '.')
		 << "+"
		 << string(simbol, '~')
		 <<"+"
		 << endl;
    return 0;
}

