// Holes-in-number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{ 
	int number;
	cin >> number;
	switch (number)
	{
	case 0: {
		cout << "1";
		break;
	}
	case 1:{
		cout << "0";
			break;
		}
	case 2: {
		cout << "0";
		break;
	}
	case 3: {
		cout << "0";
		break;
	}
	case 4: {
		cout << "1";
		break;
	}
	case 5: {
		cout << "0";
		break;
	}
	case 6: {
		cout << "1";
		break;
	}
	case 7: {
		cout << "0";
		break;
	}
	case 8: {
		cout << "2";
		break;
	}
	case 9: {
		cout << "1";
		break;
	}
	default: cout << "not a digit" << endl;
		break;
	}
    return 0;
}

