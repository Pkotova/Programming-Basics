// Problem3_Avrg.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int collection[7];
	double sum = 0, avrg;
	for (int i = 0; i < 7; i++)
	{
		cin >> collection[i];
		sum += collection[i];
	}
	avrg = sum / 7;
	cout << avrg << endl;
    return 0;
}

