// VowelsSum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentance;
	int sum = 0;
	getline(cin, sentance);

	for (int i = 0; i < sentance.length(); i++)
	{
		if (sentance[i] == 'a')
		{
			sum++;
		}
		else if (sentance[i] == 'e')
		{
			sum+=2;
		}
		else if (sentance[i] == 'i')
		{
			sum+=3;
		}
		else if (sentance[i] == 'o')
		{
			sum+=4;
		}
		else if (sentance[i] == 'u')
		{
			sum+=5;
		}
	}
	cout << sum<<endl;
    return 0;
}

