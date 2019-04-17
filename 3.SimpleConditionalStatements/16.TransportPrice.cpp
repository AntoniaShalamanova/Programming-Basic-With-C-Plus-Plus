// TransportPrice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int km;
	string time;
	double price;
	cin >> km >> time;

	if (km>=100)
	{
		price = km*0.06;
	}
	else if (km>=20)
	{
		price = km*0.09;
	}
	else if (km<20)
	{
		if (time =="day")
		{
			price = km*0.79 + 0.70;
		}
		else if (time == "night")
		{
			price = km*0.9 + 0.70;
		}
		
	}
	cout <<fixed<<setprecision(2)<< price << endl;
    return 0;
}

