// HotelRoom.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string month;
	int nights;
	cin >> month >> nights;
	double studio_price, apartment_price;

	if (month=="May" || month=="October")
	{
		if (nights <= 7)
		{
			studio_price = 50;
			apartment_price = 65;
		}
		else if (nights > 7 && nights <= 14)
		{
			studio_price = 50 - (50 * 0.05);
			apartment_price = 65;

		}
		else if (nights > 14)
		{
			studio_price = 50 - (50 * 0.3);
			apartment_price = 65 - (65 * 0.1);
		}
	}

	else if (month == "June" || month == "September")
	{
		if (nights <= 14)
		{
			studio_price = 75.2;
			apartment_price = 68.7;
		}
		else if (nights > 14)
		{
			studio_price = 75.2 - (75.2 * 0.2);
			apartment_price = 68.7 - (68.7 * 0.1);
		}
	}

	else if (month == "July" || month == "August")
	{
		if (nights <= 14)
		{
			studio_price = 76;
			apartment_price = 77;
		}
		else if (nights > 14)
		{
			studio_price = 76;
			apartment_price = 77 - (77 * 0.1);
		}
	}

		cout<<"Apartment: "<< fixed<<setprecision(2)
		    <<apartment_price * nights<<" lv."<<endl;
		cout << "Studio: " << fixed << setprecision(2) 
		     << studio_price * nights << " lv." << endl;
    return 0;
}

