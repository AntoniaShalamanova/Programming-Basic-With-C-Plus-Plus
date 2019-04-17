// EqualWords.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string first_sentence, second_sentence;
	getline(cin, first_sentence);
	getline(cin, second_sentence);

	for (int i = 0; i < first_sentence.length(); i++)
	{
		first_sentence[i] = tolower(first_sentence[i]);
	}
	
	for (int i = 0; i < second_sentence.length(); i++)
	{
		second_sentence[i] = tolower(second_sentence[i]);
	}

	if (first_sentence==second_sentence)
	{
		cout << "yes"<<endl;
	}
	else
	{
		cout << "no"<<endl;
	}
    return 0;
}

