// Remaining.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	do 
	{

		cout << "Leva: ";
		cin >> a;

	} while (a <= 0);

	do
	{
		cout << "Stotinki: ";
		cin >> b;

	} while (b < 0);
	
	do
	{

		cout << "Leva: ";
		cin >> c;

	} while (c <= 0);

	do
	{
		cout << "Stotinki: ";
		cin >> d;

	} while (d < 0);

	if (a - c < 0)
	{
		cout << 0<<endl;
	}
	else cout << a - c << endl;
	if (b - d < 0)
	{
		cout << 0 << endl;;
	}
	else if (c == 99)
	{
		cout << 1;
	}
	else cout << b - d << endl;
    return 0;
}

