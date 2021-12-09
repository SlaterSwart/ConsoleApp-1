// I'm counting on you string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
	string name;
	string userText;
	int spaces = 0;
	int newline = 0;
	int tabs = 0;
	int numbers = 0;

	printf("Type the sentence that you would like analyzed\n");
	printf("press the tilde key(~) followed by enter to end your input.\n");
	cin >> userText;
	getline(cin, userText, '~');


	printf(R"(your string is %s characters long
)", userText.length());

	for (int i = 0; i < userText.length(); i++)
	{
		if (userText[i] == ' ')
		{
			spaces++;
		}
		else if (userText[i] == '\t')
		{
			tabs++;
		}
		else if (userText[i] == '\n')
		{
			newline++;
		}
		else if (userText[i] >= '0' || userText[i] <= '9')
		{
			numbers++;
		}
	}
	
	printf("your string has %d spaces, %d tabs, %d new lines, and %d numbers.\n", spaces, tabs, newline, numbers);
	return 0;
}

