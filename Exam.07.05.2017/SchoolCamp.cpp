// SchoolCamp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string season, type_of_group;
	int numbers_of_student, numbers_of_nights;
	cin >> season >> type_of_group >> numbers_of_student >> numbers_of_nights;

	string sport;
	double night_price;
	if (type_of_group == "girls" || type_of_group == "boys")
	{
		if (season == "Winter")
		{
			if (type_of_group == "girls")
			{
				sport = "Gymnastics";
			}
			else
			{
				sport = "Judo";
			}
			night_price = 9.6;
		}
		else if (season == "Spring")
		{
			if (type_of_group == "girls")
			{
				sport = "Athletics";
			}
			else
			{
				sport = "Tennis";
			}
			night_price = 7.2;
		}
		else if (season == "Summer")
		{
			if (type_of_group == "girls")
			{
				sport = "Volleyball";
			}
			else
			{
				sport = "Football";
			}
			night_price = 15;
		}
	}

	if (type_of_group == "mixed")
	{
		if (season == "Winter")
		{
			sport = "Ski";
			night_price = 10;
		}
		else if (season == "Spring")
		{
			sport = "Cycling";
			night_price = 9.5;
		}
		else if (season == "Summer")
		{
			sport = "Swimming";
			night_price = 20;
		}
	}

	double all_price = night_price*numbers_of_nights*numbers_of_student;

	if (numbers_of_student >= 50)
	{
		all_price -= all_price*0.5;
	}
	else if (numbers_of_student >= 20 && numbers_of_student < 50)
	{
		all_price -= all_price*0.15;
	}
	else if (numbers_of_student >= 10 && numbers_of_student < 20)
	{
		all_price -= all_price*0.05;
	}

	cout << sport << " " << fixed << setprecision(2)
		<< all_price << " lv." << endl;
    return 0;
}

