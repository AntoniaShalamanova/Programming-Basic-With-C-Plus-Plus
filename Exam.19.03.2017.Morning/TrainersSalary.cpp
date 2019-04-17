// TrainersSalary.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int lecture_number;
	double budget;
	cin >> lecture_number >> budget;

	double money_for_lecrure = budget / lecture_number;
	string lecturer_name;
	int Jelev_count = 0, RoYaL_count = 0, Roli_count = 0, Trofon_count = 0,
		Sino_count = 0, guests_count = 0;

	for (int lecture = 0; lecture <= lecture_number; lecture++)
	{

		getline(cin, lecturer_name);

		if (lecturer_name == "Jelev")
		{
			Jelev_count++;
		}
		else if (lecturer_name == "RoYaL")
		{
			RoYaL_count++;
		}
		else if (lecturer_name == "Roli")
		{
			Roli_count++;
		}
		else if (lecturer_name == "Trofon")
		{
			Trofon_count++;
		}
		else if (lecturer_name == "Sino")
		{
			Sino_count++;
		}
		else
		{
			guests_count++;
		}
	}
	guests_count--;

	cout << "Jelev salary: " << fixed << setprecision(2)
		<< Jelev_count * money_for_lecrure << " lv" << endl;
	cout << "RoYaL salary: " << fixed << setprecision(2)
		<< RoYaL_count * money_for_lecrure << " lv" << endl;
	cout << "Roli salary: " << fixed << setprecision(2)
		<< Roli_count * money_for_lecrure << " lv" << endl;
	cout << "Trofon salary: " << fixed << setprecision(2)
		<< Trofon_count * money_for_lecrure << " lv" << endl;
	cout << "Sino salary: " << fixed << setprecision(2)
		<< Sino_count * money_for_lecrure << " lv" << endl;
	cout << "Others salary: " << fixed << setprecision(2)
		<< guests_count * money_for_lecrure << " lv" << endl;
	return 0;
}

