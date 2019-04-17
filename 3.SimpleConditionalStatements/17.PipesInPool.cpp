// PipesInPool.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int capacity, pipe_1, pipe_2;
	double hours;
	cin >> capacity >> pipe_1 >> pipe_2 >> hours;
	double filled_volume = (pipe_1 + pipe_2)*hours;
	if (filled_volume<=capacity)
	{
		int filled_percent = filled_volume/ capacity*100;
		int pipe_1_percent = (pipe_1*hours) / filled_volume * 100;
		int pipe_2_percent = (pipe_2*hours) / filled_volume * 100;
		cout << "The pool is "<< filled_percent<<"% full. Pipe 1: "<<pipe_1_percent <<"%. Pipe 2: "<<pipe_2_percent <<"%."<<endl;
	}
	else if (filled_volume > capacity)
	{
		double overflow = filled_volume - capacity;
		cout << "For "<<hours<<" hours the pool overflows with "<<fixed<<setprecision(1)<<overflow <<" liters." << endl;
	}
    return 0;
}

