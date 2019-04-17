// ExternalEvaluation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int students_number;
	cin >> students_number;

	double points;
	int poor_mark = 0, satisfactory_mark = 0, good_mark = 0, very_good_mark = 0, excellent_mark = 0;
	for (int student = 1; student <= students_number; student++)
	{
		cin >> points;
		if (points >= 0 && points <= 22.5)
		{
			poor_mark++;
		}
		else if (points > 22.5 && points <= 40.5)
		{
			satisfactory_mark++;
		}
		else if (points > 40.5 && points <= 58.5)
		{
			good_mark++;
		}
		else if (points > 58.5 && points <= 76.5)
		{
			very_good_mark++;
		}
		else if (points > 76.5 && points <= 100)
		{
			excellent_mark++;
		}
	}

	cout << fixed << setprecision(2) << poor_mark*100.0 / students_number 
		 << "%" << " poor marks" << endl;
	cout << fixed << setprecision(2) << satisfactory_mark*100.0 / students_number 
		 << "%" << " satisfactory marks" << endl;
	cout << fixed << setprecision(2) << good_mark*100.0 / students_number 
		 << "%" << " good marks" << endl;
	cout << fixed << setprecision(2) << very_good_mark*100.0 / students_number 
		 << "%" << " very good marks" << endl;
	cout << fixed << setprecision(2) << excellent_mark*100.0 / students_number 
		 << "%" << " excellent marks" << endl;
	return 0;
}

