// 22-10-19-seminar-exercises.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int pulls;
	cout << "Enter how many pulls ";
	if (pulls % 4 == 0 || pulls == 1)
	{
		cout << "yess" << endl;
		cout << pulls / 4 + 1; //razmer na dyskata
	}
	cout << "no" << endl;
	

	system("pause");
    return 0;
}

