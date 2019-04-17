// BonusScore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	double bonus_score;
	if (number>1000)
	{
		bonus_score = number*0.1;
	}
	else if(number>100)
	{
		bonus_score = number*0.2;
	}
	else if(number<=100)
	{
		bonus_score = 5;
	}

	if (number%2==0)
	{
		bonus_score++;
	}
	else if (number%10==5)
	{
		bonus_score += 2;
	}
	double total_score = number + bonus_score;

	cout << bonus_score<<endl;
	cout << total_score << endl;
    return 0;
}

