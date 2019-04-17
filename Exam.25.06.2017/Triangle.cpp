// Triangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int size;
	cin >> size;

	int hashtag = 4 * size + 1;

	cout << string(hashtag, '#') << endl;
	
	hashtag -= 3;
	int points = 1, space = 1;

	for (int i = 1; i <= size / 2; i++)
	{
		cout << string(points, '.')
			<< string(hashtag / 2, '#')
			<< string(space, ' ')
			<< string(hashtag / 2, '#')
			<< string(points, '.')
			<< endl;
		points++;
		space += 2;
		hashtag -= 4;
	}

	space -= 3;
	cout << string(points, '.')
		<< string(hashtag / 2, '#')
		<< string(space / 2, ' ')
		<<"(@)"
		<< string(space / 2, ' ')
		<< string(hashtag / 2, '#')
		<< string(points, '.')
		<< endl;

	space += 5;
	hashtag -= 4;
	points += 1;
	int length;

	if (size % 2 == 0)
	{
		length = size / 2 - 1;
	}
	else
	{
		length = size / 2;
	}
	for (int i = 1; i <= length; i++)
	{
		cout << string(points, '.')
			<< string(hashtag / 2, '#')
			<< string(space, ' ')
			<< string(hashtag / 2, '#')
			<< string(points, '.')
			<< endl;
		space += 2;
		hashtag -= 4;
		points += 1;
	}

	hashtag = (size * 4 + 1) - points * 2;
	for (int i = 1; i <= size; i++)
	{
		cout << string(points, '.')
			<< string(hashtag, '#')
			<< string(points, '.')
			<< endl;
		points++;
		hashtag -= 2;
	}
    return 0;
}

