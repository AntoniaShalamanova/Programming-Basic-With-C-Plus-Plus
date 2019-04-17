// PhotoPictures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int numbers_of_pictures;
	string size, way_of_ordering;
	cin >> numbers_of_pictures >> size >> way_of_ordering;

	double price;
	if (size == "9X13")
	{
		price = numbers_of_pictures * 0.16;
		if (numbers_of_pictures >= 50)
		{
			price = price - price * 0.05;
		}
	}
	else if (size == "10X15")
	{
		price = numbers_of_pictures * 0.16;
		if (numbers_of_pictures >= 80)
		{
			price = price - price * 0.03;
		}
	}
	else if (size == "13X18")
	{
		price = numbers_of_pictures * 0.38;
		if (numbers_of_pictures >= 50 && numbers_of_pictures <= 100)
		{
			price = price - price * 0.03;
		}
		else if (numbers_of_pictures > 100)
		{
			price = price - price * 0.05;
		}
	}
	else if (size == "20X30")
	{
		price = numbers_of_pictures * 2.9;
		if (numbers_of_pictures >= 10 && numbers_of_pictures <= 50)
		{
			price = price - price * 0.07;
		}
		else if (numbers_of_pictures > 50)
		{
			price = price - price * 0.09;
		}
	}

	if (way_of_ordering == "online")
	{
		price = price - price * 0.02;
	}

	cout << fixed << setprecision(2) << price <<"BGN"<< endl;
    return 0;
}

