// Cup.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int inside_points, outside_points = size, hashtag = 3 * size, middle_points;

#pragma region Bowl
	for (int i = 1; i <= size / 2; i++)
	{
		cout << string(outside_points, '.')
			<< string(hashtag, '#')
			<< string(outside_points, '.')
			<< endl;
		hashtag -= 2;
		outside_points++;
	}

	inside_points = hashtag - 2;
	hashtag = 1;

	for (int i = 1; i <= size / 2 + 1; i++)
	{
		cout << string(outside_points, '.')
			<< string(hashtag, '#')
			<< string(inside_points, '.')
			<< string(hashtag, '#')
			<< string(outside_points, '.')
			<< endl;
		inside_points -= 2;
		outside_points++;
	}

	outside_points--;
	hashtag = size;

	cout << string(outside_points, '.')
		<< string(hashtag, '#')
		<< string(outside_points, '.')
		<< endl;
#pragma endregion

#pragma region Handle
	outside_points -= 2;
	hashtag += 4;
	
	for (int i = 1; i <= size / 2; i++)
	{
		cout << string(outside_points, '.')
			<< string(hashtag, '#')
			<< string(outside_points, '.')
			<< endl;
	}
	
	middle_points = (size * 5 - 10) / 2;
	
	cout << string(middle_points, '.')
		<< "D^A^N^C^E^"
		<< string(middle_points, '.')
		<< endl;
	
	for (int i = 1; i <= size / 2 + 1; i++)
	{
		cout << string(outside_points, '.')
			<< string(hashtag, '#')
			<< string(outside_points, '.')
			<< endl;
	}
#pragma endregion

    return 0;
}

