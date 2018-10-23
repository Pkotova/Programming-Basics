// Task4_Morse-Alphabet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int digitForCheking;

	do
	{
		cout << "Check the digit: ";
		cin >> digitForCheking;
	} while (!(digitForCheking >= 0 && digitForCheking <= 9));

	switch (digitForCheking)
	{
	case 0:
		cout << "-----" << endl;
		break;
	case 1:
		cout << "...." << endl;
		break;
	case 2:
		cout << "...-" << endl;
		break;
	case 3:
		cout << "..--" << endl;
		break;
	case 4:
		cout <<  "..---" << endl;
		break;
	case 5:
		cout << ".----" << endl;
		break;
	case 6:
		cout << "-..." << endl;
		break;
	case 7:
		cout << "--.." << endl;
		break;
	case 8:
		cout << "---.." << endl;
		break;
	case 9:
		cout << "----." << endl;
		break;
	default:cout << "Wrong input:" << endl;
		break;
	}
    return 0;
}

