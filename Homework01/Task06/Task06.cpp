// Task06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

// Petya Kotova - 71866 , 2group, Information systems

int main()
{
	long long number, fact = 1; // long long for very big numbers

	cout << "N: ";
	cin >> number;

	if (!cin || number <= 0) //checking for correct input
	{
		cout << "Wrong input";
		return 0;
	}

	for (int i = 1; i <= number; i++)
	{
		fact *= i; //calculating n!
	}

	cout <<"N! = " << fact << endl;
    return 0;
}

