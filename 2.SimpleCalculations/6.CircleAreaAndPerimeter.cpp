// CircleAreaAndPerimeter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double radius;
	cin >> radius;
	double pi = 3.14159265359;
	cout << pi * radius * radius<<endl;
	cout << 2 * pi * radius;
    return 0;
}

