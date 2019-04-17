// OnTimeForTheExam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int h_exam, m_exam, h_arrive, m_arrive;
	cin >> h_exam >> m_exam>> h_arrive >> m_arrive;
	int exam_time = h_exam * 60 + m_exam;

	int arrive_time = h_arrive * 60 + m_arrive;
	int difference = exam_time - arrive_time;

	if (0<difference && difference<=30)
	{
		cout << "On time" << endl<< difference <<" minutes before the start"<<endl;
	}
	else if (difference == 0)
	{
		cout << "On time" << endl;
	}
	else if (difference > 30)
	{
		cout << "Early" << endl;
		if (difference >= 60)
		{
			int hours = difference / 60;
			int minutes = difference % 60;
			cout << hours<<":"<<setw(2)<<setfill('0')<<minutes 
				 << " hours before the start" << endl;
		}
		else (difference > 30 && difference < 60);
		{
			cout << difference << " minutes before the start" << endl;
		}
	}
	else if (difference < 0)
	{
		cout << "Late" << endl;
		difference = abs(difference);
		if (difference >= 60)
		{
			int hours = difference / 60;
			int minutes = difference % 60;
			cout << hours << ":" << setw(2) << setfill('0') << minutes 
				 << " hours after the start" << endl;
		}
		else (difference < 60);
		{
			cout << difference << " minutes after the start" << endl;
		}
	}
    return 0;
}

