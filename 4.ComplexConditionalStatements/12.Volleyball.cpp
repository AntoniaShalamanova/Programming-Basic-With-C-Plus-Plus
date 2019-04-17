// Volleyball.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string year_length;
	int holidays, weekends_in_hometown;
	cin >> year_length >> holidays >> weekends_in_hometown;
	double games_in_Sofia = (48 - weekends_in_hometown)*(3.0 / 4);
	double games_in_holidays = holidays*(2.0 / 3);
	double total_games = games_in_Sofia + games_in_holidays + weekends_in_hometown;
	if (year_length=="leap")
	{
		total_games = total_games + (total_games*0.15);
		cout << floor(total_games);
	}
	else if(year_length == "normal")
	{
		cout << floor(total_games);
	}
    return 0;
}

