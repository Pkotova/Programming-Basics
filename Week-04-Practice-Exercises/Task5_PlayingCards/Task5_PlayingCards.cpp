// Task5_PlayingCards.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{

	int cardInDeck, item, type;

	do
	{
		cout << "Check day of week: ";
		cin >> cardInDeck;
	} while (!(cardInDeck >= 1 && cardInDeck <= 52));

	item = cardInDeck / 4 - 1;
	
	switch (item)
	{
	case 0:
		cout << "2" << endl;
		break;
	case 1:
		cout << "3" << endl;
		break;
	case 2:
		cout << "4" << endl;
		break;
	case 3:
		cout << "5" << endl;
		break;
	case 4:
		cout << "6" << endl;
		break;
	case 5:
		cout << "7" << endl;
		break;
	case 6:
		cout << "8" << endl;
		break;
	case 7:
		cout << "9" << endl;
		break;
	case 8:
		cout << "10" << endl;
		break;
	case 9:
		cout << "10" << endl;
		break;
	case 10:
		cout << "J" << endl;
		break;
	case 11:
		cout << "Q" << endl;
		break;
	case 12:
		cout << "K" << endl;
		break;
	case 13:
		cout << "A" << endl;
		break;
	default:cout << "Wrong input:" << endl;
		break;
	}

//TODO
    return 0;
}

