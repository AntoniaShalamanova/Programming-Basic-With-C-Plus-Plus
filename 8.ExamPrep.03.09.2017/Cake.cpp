// Cake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int length, width;
	cin >> length >> width;

	int area = length*width;
	string pieces;
	int number_of_pieces = 0, piece;

	for (int i = 1; i > 0; i++)
	{
		cin >> pieces;
		piece = atoi(pieces.c_str());
		number_of_pieces += piece;
		if (number_of_pieces > area)
		{
			cout << "No more cake left! You need " << number_of_pieces - area
				<< " pieces more." << endl;
			break;
		}
		else if (pieces == "STOP")
		{
			cout << area - number_of_pieces << " pieces are left." << endl;
			break;
		}
	}
	return 0;
}

