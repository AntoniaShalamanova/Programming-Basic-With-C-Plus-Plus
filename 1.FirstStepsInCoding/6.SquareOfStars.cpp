// SquareOfStars.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << "*";
	}
	cout << endl;

	for (int j = 1; j <= n - 2; j++)
	{
		cout << "*";
		for (int k = 1; k <= n - 2; k++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}

	for (int i = 1; i <= n; i++)
	{
		cout << "*";
	}

	return 0;
}

