// SoftUniLogo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int height = 4 * size - 2;
	int width = 12 * size - 5;

#pragma region Roof
	int points = width - 1;
	int hashtag = 0;
	for (int i = 1; i <= size * 2; i++)
	{
		cout << string(points / 2, '.')
			<< string(hashtag, '#')
			<< "#"
			<< string(hashtag, '#')
			<< string(points / 2, '.')
			<< endl;
		hashtag += 3;
		points -= 6;
	}

	int right_points = 3;
	int left_points = 2;
	hashtag = width - 6;
	for (int i = 1; i <= size - 2; i++)
	{
		cout <<"|"
			<< string(left_points, '.')
			<< string(hashtag, '#')
			<< string(right_points, '.')
			<< endl;
		left_points += 3;
		right_points += 3;
		hashtag -= 6;
	}
#pragma endregion

#pragma region Body
	for (int i = 1; i <= size - 1; i++)
	{
		cout << "|"
			<< string(left_points, '.')
			<< string(hashtag, '#')
			<< string(right_points, '.')
			<< endl;
	}

	cout << "@"
		<< string(left_points, '.')
		<< string(hashtag, '#')
		<< string(right_points, '.')
		<< endl;
#pragma endregion

    return 0;
}

