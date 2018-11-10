// Task01.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<iostream>
using namespace std;

// Petya Kotova - 71866 , 2group, Information systems

int main()
{ 
	int width;
	char star = '*', space = ' ';
	cin >> width;

	if (!cin || width <= 0) //check if the inputted is a number
	{
		cout << "Wrong input" << endl;
		return 0;
	}

	if (width % 2 != 0 && width != 1)
	{
		for (int i = 0; i < width; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (j == i || i == width - 1 - j || i == 0 || i == width - 1)
				{
					cout << star;
				}
				else cout << space;
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Wrong number";
	}

	cout << endl;
    return 0;
}

