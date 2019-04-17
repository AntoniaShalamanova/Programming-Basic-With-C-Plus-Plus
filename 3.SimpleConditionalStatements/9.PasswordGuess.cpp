// PasswordGuess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string password;
	cin >> password;
	if (password=="s3cr3t!P@ssw0rd")
	{
		cout << "Welcome" << endl;
	}
	else
	{
		cout << "Wrong password!" << endl;
	}
    return 0;
}

