// Problem1_Operations_Switch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	char operation;
	int a, b;

	cout << "Enter a number a = ";
	cin >> a;
	if (!cin)
	{
		cout << "Wrong input!" << endl;
		goto brk;
	}

	cout << "Enter a number b = ";
	cin >> b;
	if (!cin)
	{
		cout << "Wrong input!" << endl;
		goto brk;
	}

	cout << "Choose operation (*, / , % , + , -): ";
	cin >> operation;
	if (!cin)
	{
		cout << "Wrong input!" << endl;
		goto brk;
	}

	switch (operation)
	{
		case '*': cout << "a * b = ";
				  cout << a * b << endl;
					break;
	
		case '/': cout << "a / b = ";
			if ( b == 0) 
			{
				cout << "Imposible! " << endl;
				goto brk;
			}
			else cout << a / b << endl;
					break;
		case '%': cout << "a % b = ";
			if ( b == 0)
			{
				cout << "Imposible! " << endl;
				goto brk;
			}
			else cout << a % b << endl;
					break;
		
		case '-': cout << "a - b = ";
				  cout << a - b << endl;
					break;
		case '+': cout << "a + b = ";
				  cout << a + b << endl;
				   break;
		default:
			cout << "Invalid operation! " << endl;
			break;
	}

	brk:
    return 0;
}

