// Java.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int width = 3 * size + 6;
	int height = 3 * size + 1;

	int spaces = size;
	for (int i = 1; i <= size; i++)
	{
		cout << string(spaces, ' ')
			 << "~ ~ ~"
			 << endl;
	}

	cout << string(width - 1, '=')
		 << endl;

	for (int i = 0; i < size - 2; i++)
	{
		int middle = (size - 2) / 2;
		if (i == middle)
		{
			cout << "|"
				 << string(size, '~')
				 << "JAVA"
				 << string(size, '~')
				 << "|"
				 << string(size - 1, ' ')
				 << "|"
				 << endl;
		}
		else
		{
			cout << "|"
				 << string(size * 2 + 4, '~')
				 << "|"
				 << string(size - 1, ' ')
				 << "|"
				 << endl;
		}
	}

	cout << string(width - 1, '=')
		 << endl;

	int simbol = size * 2 + 4;
	spaces = 0;
	for (int i = 1; i <= size; i++)
	{
		cout << string(spaces, ' ')
			 << "\\"
			 << string(simbol, '@')
			 << "/"
			 << endl;
		simbol -= 2;
		spaces += 1;
	}

	cout << string(width - size, '=')
		 << endl;
	return 0;
}

