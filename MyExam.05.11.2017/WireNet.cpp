// WireNet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int place_length, place_width;
	double net_height, net_price, net_weight;
	cin >> place_length >> place_width >> net_height >> net_price >> net_weight;

	int net_length = place_length * 2 + place_width * 2;
	double net_area = net_length*net_height;
	double all_net_price = net_length*net_price;
	double all_net_weight = net_area*net_weight;
	cout << fixed << setprecision(2) << net_length << endl;
	cout << fixed << setprecision(2) << all_net_price << endl;
	cout << fixed << setprecision(3) << all_net_weight << endl;
	return 0;
}

