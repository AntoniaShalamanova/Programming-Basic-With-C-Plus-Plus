// FruitOrVegetable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string product;
	cin >> product;
	bool is_fruit = (product == "banana") || 
					(product=="apple") || 
					(product=="kiwi") || 
					(product=="cherry") || 
					(product=="lemon") || 
					(product=="grapes");
	bool is_vegetable = (product == "tomato") || 
						(product=="cucumber") || 
						(product=="pepper") ||  
						(product=="carrot");
	if (is_fruit)
	{
		cout<<"fruit"<<endl;
	}
	else if (is_vegetable)
	{
		cout << "vegetable" << endl;
	}
	else
	{
		cout << "unknown" << endl;
	}
    return 0;
}