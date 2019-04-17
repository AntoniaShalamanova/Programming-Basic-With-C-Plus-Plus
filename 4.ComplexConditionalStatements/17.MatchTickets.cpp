// MatchTickets.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	double amount;
	string tickets;
	int people;
	double for_transport;
	double for_tickets;
	cin >> amount >> tickets >> people;
	if (people>=1 && people<=4)
	{
		for_transport = amount*0.75;
	}
	else if (people >= 5 && people <= 9)
	{
		for_transport = amount*0.6;
	}
	else if (people >= 10 && people <= 24)
	{
		for_transport = amount*0.5;
	}
	else if (people >= 25 && people <= 49)
	{
		for_transport = amount*0.4;
	}
	else if (people >= 50)
	{
		for_transport = amount*0.25;
	}

	double rest = amount - for_transport;
	if (tickets == "Normal")
	{
		for_tickets = people*249.99;
	}
	else if (tickets == "VIP")
	{
		for_tickets = people*499.99;
	}

	if (for_tickets>rest)
	{
		double need = for_tickets - rest;
		cout << "Not enough money! You need "<<fixed<<setprecision(2) <<need
			 <<" leva." << endl;
	}
	else if (for_tickets<=rest)
	{
		double need = rest - for_tickets;
		cout << "Yes! You have " << fixed << setprecision(2) <<need
			 << " leva left."<< endl;
	}
    return 0;
}

