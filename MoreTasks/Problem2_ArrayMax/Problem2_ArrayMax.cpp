// Problem2_ArrayMax.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int collection[7], max;

	for (int i = 0; i < 7; i++)
	{
		cin >> collection[i];
	}

	max = collection[0];

	for (int i = 0; i < 7; i++)
	{
		
		if (max < collection[i+1])
		{
			max = collection[i+1];
		}
	}
	cout << max << endl;
	return 0;
}
