// SpeedInfo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double speed;
	cin >> speed;

	if (speed > 1000)
	{
		cout << "extremely fast" << endl;
	}
	else if (speed > 150)
	{
		cout << "ultra fast" << endl;
	}
	else if (speed > 50)
	{
		cout << "fast" << endl;
	}
	else if (speed > 10)
	{
		cout << "average" << endl;
	}
	else if (speed<=10)
	{
		cout<< "slow" <<endl;
	}
    return 0;
}

