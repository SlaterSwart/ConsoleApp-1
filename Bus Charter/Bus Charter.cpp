// Bus Charter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
	string input;
	int peopleOnTheBus;
	int bus;
	int van;
	string name;

	printf("What is your name?");
	cin >> name;
	printf("Hi ")
	
	while (1 < 10)
	{
		printf("How many people do you have on the whole tour?\n\t enter how many people you have:\n");
		cin >> peopleOnTheBus;
		system("CLS");

		printf("is this how many people you have on the tour?: %d\n", peopleOnTheBus);
		printf("press 1 to go back press 2 continue\n");

		cin >> input;

		if (input == "1")
		{
			continue;
			system("CLS");
		}
		else if (input == "2")
		{
			break;
		}
		else
		{
			printf("Invalid key pressed, closing program\n");
			break;

		}
		
		system("CLS");

	}

	van = peopleOnTheBus / 60;
	printf("People On The tour / 60 = how many buses you need: %d\n", van);
	van = peopleOnTheBus % 60;
	printf("The people that need to be in a van: %d\n", van);

	_getch();






}
