// Task12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

// Petya Kotova - 71866 , 2group, Information systems

int main()
{
	int metres, dayCounter = 0, nightCounter = 1, holder;

	do {

		cout << "Input metres [10;101]: ";
		cin >> metres;
		if (!cin)	// cheking for correct input
		{
			cout << "Wrong number" << endl;
			return 0;
		}

	} while (!(metres >= 10 && metres <= 101));

	holder = metres; //holding value of metres, used only in the output

	while (metres != 0)
	{
		dayCounter++;
		metres--;
	}

	cout <<holder<<" will be climbed in "<<dayCounter - nightCounter<<" days!" << endl;
    return 0;
}

