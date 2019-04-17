// ConcatenateData.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string town;
	string first_name, last_name;
	int age;
	getline(cin, town);
	cin >> first_name;
	cin >> last_name;
	cin>> age;
	printf("You are %s %s, a %d-years old person from %s.", first_name.c_str(), last_name.c_str(), age, town.c_str());
    return 0;
}

