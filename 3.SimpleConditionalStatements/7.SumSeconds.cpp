// SumSeconds.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int sec_1, sec_2, sec_3;
	cin>> sec_1>> sec_2>> sec_3;
	int sum= sec_1 + sec_2 + sec_3;
	int min = sum / 60;
	int sec = sum % 60;
	if (sec<=9)
	{
		cout << min << ":0" << sec<<endl;
	}
	else
	{
		cout << min << ":" << sec;
	}
    return 0;
}

