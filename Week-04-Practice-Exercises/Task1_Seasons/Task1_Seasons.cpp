// Task1_Seasons.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int season;

	do
	{
		cout << "Check season: ";
		cin >> season;
	} while (!(season>=0 && season<=3));
	switch (season)
	{
	case 0:
		cout << "Spring" << endl;
		break;
	case 1:
		cout << "Summer" << endl;
		break;
	case 2:
		cout << "Autumn" << endl;
		break;
	case 3:
		cout << "Winter" << endl;
		break;
	default:cout<<"Wrong input:" << endl;
		break;
	}

    return 0;
}

