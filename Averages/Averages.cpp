/*
	Name:  Slater Swart
	Problem:  find out the average MPH and MPG the user was going and display it to them
	Pseudocode: 
	Get the users name
	get the miles the traveled
	get the gallons they used
	get the time traveled in hours
	do the math to find the correct MPH and MPG 
	display it on the screen to the tenth decimal point.
	Notes: N/A
	Maintenance log:
		Date:10/2		Done:10/2
		10/2: 1 started the program and used the Bus Charter(my last project) to help me as a reference.
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{

	string name;
	string input; 
	float MilesTraveled;
	float HoursTraveled;
	float GallonsUsed;

	float MPG;
	float MPH;

	printf("What would you like to be called?(No spaces)\n");
	cin >> name;
	system("CLS");

	printf("Hi, %s!\n", name.c_str());//how to printf a string
	_getch();

	printf("I'm here to here to try to fine out how fast you were going and how many gallons per mile you use on your trip!\n");
	printf("Okay, so let's get started");
	system("CLS");

	while (1 < 10)
	{
		printf("to get things started off I'm going to need to know how many Miles you traveled %s\n", name.c_str());
		printf("Please enter that info here:  ");
		cin >> MilesTraveled;
		system("CLS");

		printf("Next I need to know how many hours you traveled for.\n");
		printf("Please enter that info here:  ");
		cin >> HoursTraveled;
		system("CLS");

		printf("lastly I need to know how many gallons of gas you used in your trip.\n");
		printf("Please enter that info here:  ");
		cin >> GallonsUsed;
		system("CLS");

		printf("is this the correct info?\n");
		printf("Miles\tHours\tGallons\n");
		printf("%.1f\t%.1f\t%.1f\n", MilesTraveled, HoursTraveled, GallonsUsed);
		printf("Press 1 for yes Press 2 for no\n");

		cin >> input;
		if (input == "1")
		{
			break;
		}
	
		else if (input == "2")
		{
			continue;
		}

		else
		{
			printf("invalid key pressed. try again\n");
		}
		// in the loop
	}

	//not in the loop
	MPG = MilesTraveled / GallonsUsed;
	MPH = MilesTraveled / HoursTraveled;
	printf("your average speed was %.0f\n", MPH);
	printf("You taveled %.1f miles for every gallon of gas you used.\n", MPG);

	_getch();
	return 0;

}
