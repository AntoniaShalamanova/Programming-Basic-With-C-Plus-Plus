// AnimalType.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string animal;
	cin >> animal;
	if (animal =="dog")
	{
		cout << "mammal" << endl;
	}
	else if (animal=="crocodile" ||animal=="tortoise" || animal == "snake")
	{
		cout << "reptile" << endl;
	}
	else
	{
		cout << "unknown" << endl;
	}
    return 0;
}

