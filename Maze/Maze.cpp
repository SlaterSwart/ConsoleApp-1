/*	Name:  Slater Swart
	Project name: RPG
	Problem:a nonlooping maze 
	Pseudocode:
	puts you in room one, then you must get out using 1 2 or 3 numbers
	if you get stuck you can go back to the start or end the program
	once you win you can end the program or go back to the start
	Notes:
	Maintenance log:
		Date started:10/17/21	Done:

*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string name;
	int input;
	
	while (1 < 2)
	{
	printf("Welcome to you my maze mhmms, yes\n");
	printf("Lets get started \n");
	system("CLS");

	printf("What would you like to be called?\n");
	cin >> name;
	system("CLS");

	printf("Hi, %s!\n", name.c_str());
	_getch();

	printf("You are in a maze, and must get out, the maze is a 3 x 3.\n");
	printf("the maze.\n 1 2 3\n 4 5 6\n 7 8 9\n");
	_getch();
	system("CLS");

	printf("you are in box 1, you must get out. Good luck ");
	_getch();
	
	printf("were wouldyou like to go? 2 for right 4 for down.\n");
	cin >> input;
	if (input == 2)
	{
		system("CLS");
		printf("you are now in box two, the door closes behind you. where would you like to go next?\n 5 for down 3 for right\n");
			
	}

	if (input == 4)
	{
		system("CLS");
		printf("you are now in box 4. the door closes behind you. where would you like to go next?\n");
		printf("7 for down 5 for right\n");
		cin >> input;
		if (input == 7)
		{
			printf("you are now in box 7, the door closes behind you there is only one way out do you take it?\n");
			printf("1 for yes 2 for no.\n");
			cin >> input;
			if (input == 1)
			{
				printf("you are now in room 8 and there is only one way out do you take it?\n");
				printf("1 for yes 2 for no.\n");
				cin >> input;
				if (input == 1)
				{
					printf("You WON!!! \n CONGRATS\n would you like to play again?\n1 for yes 2 for no");
					cin >> input;
					if (input == 1)
					{
						continue;
					}
					else if (input == 2)
					{
						break;
					}
				}
				else if (input == 2)
				{
					break;
				}
			}
		}
		else if (input == 5)
		{
			printf(" you are now in room 5. the door closes behind you. i have run the calculations and it looks as though you have lost\n feel free to try again\n press 1 to restart 2 to end\n");
			cin >> input;
			if (input == 1)
			{
				continue;
			}
			else if (input == 2)
			{
				break;
			}
		}
	}
}
