// ChristmasTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;

	for (int row = 0; row <= size; row++)
	{
		int number_of_stars = row;
		int number_of_spaces = size - number_of_stars;

		//Left side of the tree
		for (int spaces = 1; spaces <= number_of_spaces; spaces++)
		{
			cout << " ";
		}
		for (int stars = 1; stars <= number_of_stars; stars++)
		{
			cout << "*";
		}

		//Middle
		cout << " | ";

		//Right side of the tree
		for (int stars = 1; stars <= number_of_stars; stars++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
    return 0;
}

