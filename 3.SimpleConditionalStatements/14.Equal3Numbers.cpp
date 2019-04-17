// Equal3Numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	if (n1 == n2)
	{
		if (n2==n3)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	else
	{
		cout << "no" << endl;
	}
    return 0;
}

