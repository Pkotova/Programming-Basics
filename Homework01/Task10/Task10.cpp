// Task10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	double number, avrg, counter = 0, sum = 0;

	do {
		cout << "Enter a number: ";
		cin >> number;
		if (!cin) //checking for correct input
		{
			cout << "Wrong input" << endl;
			return 0;
		}
		sum += number; // calculating the sum of numbers
		counter++;

	} while (!(number < 1));

	avrg = (sum - number) / (counter - 1); // calculating averange
	cout <<"Inputted numbers are: "<< counter - 1 << endl; // because the "do" part of the loop will be calculating count of the legit numbers + 1
	cout <<"Their sum is: "<< sum - number << endl; // because it will add to the sum the last inputed number, we dont want it cuz, its < 1
	cout <<"The average: "<< avrg << endl;
	
	brk:
    return 0;
}

