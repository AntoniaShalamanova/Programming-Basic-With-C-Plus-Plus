// Sequence2k1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;
	int num = 1;

	while (num <= size)
	{
		cout << num << endl;
		num = num * 2 + 1;
	}
    return 0;
}

