// Unit 6 q3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstring>
#include <iostream>
using namespace std;

int max = 50;
const int aa = 50;

int main()
{
	int v;
	
	char string01[aa];
	cout << "Enter a string:  " << "\n";
	cin.getline(string01,50);
	
	for (int count = 0; count < strlen(string01) - 1; count++)
	{    int xx = count;
		char ss1 = string01[count];
		cout << ss1 << "\n";
		
		for (int start = strlen(string01) - 1; start > count; start--)
		{
			if (ss1 == string01[start])
			{
				v = 1;
				cout << v << "ZZ    ";
				int count = xx;
			while (string01[count] != '\0')
			{
				string01[count] = string01[count + 1];
				count++;

			}
			cout << "THE STRING STATE::::::::::::::::  " << string01;
			}
			else
			{
				v = 0;
			}

			cout << start << "AA      ";
			
			cout << "\n";
			cout << "V IS ::: " << v << "\n";
			cout << "\n";
			

		}
		
		
		cout << count << "BB         "; cout << v << "FF    " << "\n";

		
	}
	cout << "\n";
	cout << v << "\n";
	cout << string01;
	return 0;
}

