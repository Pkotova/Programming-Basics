// Problem1_SumArray_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	double collection[7], sum = 0;

	for (int i = 0; i < 7; i++)
	{
		cin >> collection[i];
		sum += collection[i];
	}
	cout << sum << endl;
    return 0;
}

