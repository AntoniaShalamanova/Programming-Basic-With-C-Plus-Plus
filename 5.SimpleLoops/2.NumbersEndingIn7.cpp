// NumbersEndingIn7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	for (int num = 1; num <= 1000; num++)
	{
		if (num%10==7)
		{
			cout << num << endl;
		}
	}
    return 0;
}

