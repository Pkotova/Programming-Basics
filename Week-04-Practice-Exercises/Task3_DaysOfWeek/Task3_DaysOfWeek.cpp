// Task3_DaysOfWeek.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int dayOfWeek;

	do
	{
		cout << "Check day of week: ";
		cin >> dayOfWeek;
	} while (!(dayOfWeek >= 0 && dayOfWeek <= 6));
	switch (dayOfWeek)
	{
	case 0:
		cout << "Sunday is no working day" << endl;
		break;
	case 1:
		cout << "Monday is working day" << endl;
		break;
	case 2:
		cout << "Tuesday is working day" << endl;
		break;
	case 3:
		cout << "Wednesday is working day" << endl;
		break;
	case 4:
		cout << "Thrustday is working day" << endl;
		break;
	case 5:
		cout << "Friday is working day" << endl;
		break;
	case 6:
		cout << "Saturday is no working day" << endl;
		break;
	default:cout << "Wrong input:" << endl;
		break;
	}
    return 0;
}

