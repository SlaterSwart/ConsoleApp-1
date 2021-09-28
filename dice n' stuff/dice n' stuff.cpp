// dice n' stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	int i = 0;

	while (1 < 10)
	{
		int secMax = 12;
		int minimum = 1;
		int maximum = 6;

		int SixSidedDie;
		int _12sidedDice;

		float FloatMaximum = 5.0;
		float FloatMinimum = 0.0;
		float FloatRun;

		string input;

		char characters;
		srand(0);
		srand((unsigned)time(NULL));

		SixSidedDie = (minimum)+rand() % (maximum - minimum + 1); // random 6 sided dice
		printf("6 sided dice:%d\n", SixSidedDie);

		_12sidedDice = (minimum)+rand() % (secMax - minimum + 1); //random 12 sided dice
		printf("12 sided dice:%d\n", _12sidedDice);

		FloatRun = FloatMinimum + (float)(rand()) / ((float)(RAND_MAX) / (FloatMaximum - FloatMinimum)); //for the random floats
		printf("Random floats:%f\n", FloatRun);

		characters = 'a' + rand() % 26 - 32; //a random char
		/*
		What this code above this does is make a random number between 1-26 then converts it to letters in binnary
		then it will make it upper case using -32
		*/
		printf("Random character:%c\n", characters);

		printf("Press 1 to repeat, 2 to exit\n");

		cin >> input;

		if (input == "1")
		{
			system("CLS");
			continue;
		}
		else if (input == "2")
		{
			break;
		}	
		else
		{
			printf("Incorect input detected, exiting program");
			break;
		}
		
	}
	return 0;
}

