// OperationsBetweenNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int n1, n2;
	char sign;
	int result;
	cin >> n1 >> n2 >> sign;

	if (sign=='+')
	{
		result = n1 + n2;
		cout << n1 << " " << sign << " " << n2 << " = " << result << " - ";
		if (result % 2 == 0)
		{
			cout << "even" << endl;
		}
		else
		{
			cout << "odd" << endl;
		}
	}
	else if (sign == '-')
	{
		result = n1 - n2;
		cout << n1 << " " << sign << " " << n2 << " = " << result << " - ";
		if (result % 2 == 0)
		{
			cout << "even" << endl;
		}
		else
		{
			cout << "odd" << endl;
		}
	}
	else if (sign == '*')
	{
		result = n1 * n2;
		cout << n1 << " " << sign << " " << n2 << " = " << result << " - ";
		if (result % 2 == 0)
		{
			cout << "even" << endl;
		}
		else
		{
			cout << "odd" << endl;
		}
	}
	else if (sign == '/')
	{
		if (n2==0)
		{
			cout << "Cannot divide "<<n1<<" by zero" << endl;
		}
		else
		{
			double half_result = (n1*1.0) / (n2*1.0);
			cout << n1 << " " << sign << " " << n2 << " = " <<fixed << setprecision(2) <<half_result << endl;
		}	
	}
	else if (sign == '%')
	{
		if (n2 == 0)
		{
			cout << "Cannot divide " << n1 << " by zero" << endl;
		}
		else
		{
			result = n1 % n2;
			cout << n1 << " " << sign << " " << n2 << " = " << result << endl;
		}
	}
    return 0;
}

