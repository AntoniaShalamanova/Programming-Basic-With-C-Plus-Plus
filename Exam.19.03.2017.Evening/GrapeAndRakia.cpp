// GrapeAndRakia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double vineyard_area, kg_from_square_m, waste;
	cin >> vineyard_area >> kg_from_square_m >> waste;

	double total_kg_grape = (vineyard_area * kg_from_square_m) - waste;
	double kg_for_brandy = total_kg_grape*0.45;
	double kg_for_sale = total_kg_grape*0.55;
	double money_from_brandy = (kg_for_brandy / 7.5) * 9.8;
	double money_from_sale = kg_for_sale*1.5;

	cout << fixed << setprecision(2) << money_from_brandy << endl;
	cout << fixed << setprecision(2) << money_from_sale << endl;
    return 0;
}

