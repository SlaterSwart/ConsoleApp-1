// Counting on a file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{   
    string temp;
    ifstream in;
    int spaces = 0;
    int newline = 0;
    int tabs = 0;
    int numbers = 0;
    in.open("File.txt");
    while (getline(in, temp)) {
		for (int i = 0; i < temp.length(); i++)
		{
			if (temp[i] == ' ')
			{
				spaces++;
			}
			else if (temp[i] == '\t')
			{
				tabs++;
			}
			else if (temp[i] == '\n')
			{
				newline++;
			}
			else if (temp[i] >= '0' || temp[i] <= '9')
			{
				numbers++;
			}
		}

    }
	printf("your string has %d spaces, %d tabs, %d new lines, and %d numbers.\n", spaces, tabs, newline, numbers);
	_getch();
	return 0;
}
