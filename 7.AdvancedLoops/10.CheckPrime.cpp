// CheckPrime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int num;
	cin >> num;

	bool isPrime = true;
	int increment = 2;
	
	if (num < 2)
	{
		isPrime = false;
	}

	else if (num == 2 || num == 3)
	{
		isPrime = true;
	}

	else if (num > 3)
	{
		while (increment < num)
		{
			if (num % increment == 0)
			{
				isPrime = false;
				break;
			}
			else
			{
				isPrime = true;
			}
			increment++;
		}
	}


	if (isPrime == true)
	{
		cout << "Prime" << endl;
	}
	else if (isPrime == false)
	{
		cout << "Not prime" << endl;
	}
    return 0;
}

