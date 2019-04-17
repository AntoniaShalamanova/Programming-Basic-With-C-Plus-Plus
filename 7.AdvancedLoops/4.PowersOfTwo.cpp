// PowersOfTwo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int num = 0;
	long pows;
	while (num <= size)
	{
		pows = pow(2, num);
		cout << pows << endl;
		num++;
	}
    return 0;
}

