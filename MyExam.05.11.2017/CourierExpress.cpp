// CourierExpress.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	double shipment_weight;
	string type_of_service;
	int km;
	cin >> shipment_weight >> type_of_service >> km;

	double price;
	if (type_of_service == "standard")
	{
		if (shipment_weight < 1)
		{
			price = km*0.03;
		}
		else if (shipment_weight >= 1 && shipment_weight <= 10)
		{
			price = km*0.05;
		}
		else if (shipment_weight >= 11 && shipment_weight <= 40)
		{
			price = km*0.1;
		}
		else if (shipment_weight >= 41 && shipment_weight <= 90)
		{
			price = km*0.15;
		}
		else if (shipment_weight >= 91 && shipment_weight <= 150)
		{
			price = km*0.2;
		}
	}

	if (type_of_service == "express")
	{
		if (shipment_weight < 1)
		{
			price = km*0.03 + (km*shipment_weight*0.8*0.03);
		}
		else if (shipment_weight >= 1 && shipment_weight <= 10)
		{
			price = km*0.05 + (km*shipment_weight*0.4*0.05);
		}
		else if (shipment_weight >= 11 && shipment_weight <= 40)
		{
			price = km*0.1 + (km*shipment_weight*0.05*0.1);
		}
		else if (shipment_weight >= 41 && shipment_weight <= 90)
		{
			price = km*0.15 + (km*shipment_weight*0.02*0.15);
		}
		else if (shipment_weight >= 91 && shipment_weight <= 150)
		{
			price = km*0.2 + (km*shipment_weight*0.01*0.2);
		}
	}

	cout << "The delivery of your shipment with weight of "
		<< fixed << setprecision(3) << shipment_weight << " kg. would cost "
		<< fixed << setprecision(2) << price << " lv." << endl;
	return 0;
}

