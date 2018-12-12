// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int Abs(int n)
{
	return n * ((2 * n + 1) % 2);
}
double Pow(double n, int k)
{
	int pow = 1;
	for (int i = 0; i < k ; i++)
	{
		pow *= n;
	}

	return pow;
}
double Min(double n, double k)
{
	if (n < k)
		return n;
	else return k;
}
double Max(double n, double k)
{
	if (n > k)
		return n;
	else return k;
}
double MaxOf3(double a,double b,double c)
{
	if (a > b && a > c)
	{
		return a;
	}
	else if (b > a && b > c)
		return b;
	else return c;
}
double MinOf3(double a, double b, double c)
{
	if (a < b && a < c)
	{
		return a;
	}
	else if (b < a && b < c)
		return b;
	else return c;
}
bool isAlpha(char symbol)
{
	return (symbol >= 65 && symbol <= 90) || (symbol >= 97 && symbol <= 122);
}
bool isDigit(int symbol)
{
	return (symbol >= 48 && symbol <= 57);
}
int main()
{
	int n;
	double k, l,m;
	char symbol;
	//cin >> n;
	//cin >> k;
	//cin >> l;
	//cin >> m;
	//cin >> symbol;
	//cout << Abs(n) << endl;
	//cout << Pow(k, n) << endl;
	//cout << Min(k, l) << endl;
	//cout << Max(k, l) << endl;
	//cout << MaxOf3(k, l, m) << endl;
	//cout << MinOf3(k, l, m)<<endl;
	//cout << isAlpha('k') << endl;
	cout << isDigit('6') << endl;

    return 0;
}

