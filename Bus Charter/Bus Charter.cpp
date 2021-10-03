 /*	Name:  Slater Swart
Problem:  To find out how many busses and vans you need to hire for a certain amount of people decided by the user.
Pseudocode : 
get the users name
tell the user the task at hand
get the amount of people on the tour from the user in a loop so they can call back if needed
do math to find out how many busses and vans are needed
display the amount of busses and vans after rounding the van number up.

Notes : I had some trouble getting rounding to work but got it after looking up some videos.
Maintenance log :
Date:9/30		Done:10/2
9/30 I started to make the variables and was messing with loops the day before so was able to input that into the program
10/1 just messed around with displaying the users name
10/2 finished the program after finding out how to use ceil, floor, ect.
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <tgmath.h>
using namespace std;

int main()
{
	string input;
	int peopleOnTheBus;
	int bus;
	float VanPeople;
	float vans;
	string name;

	printf("What is your name?(with no spaces)\n");
	cin >> name;
	system("CLS");

	printf("%s, ", name.c_str()); printf("you are a Bus Charter and you need to find out how many busses and vans you need for a tour.\n");
	printf("so, it's time to start!\n");

	_getch();
	system("CLS");
	
	while (1 < 10)
	{
		printf("How many people do you have on the tour %s \n", name.c_str());
		printf("enter how many people you have: \n");
		cin >> peopleOnTheBus;
		system("CLS");

		printf("is this how many people you have on the tour?: %d\n", peopleOnTheBus);
		printf("press 1 to continue press 2 to go back\n");

		cin >> input;
		if (input == "1")
		{
			break;
			system("CLS");
		}
		else if (input == "2")
		{
			continue;
		}
		else
		{
			printf("Invalid key pressed, closing program\n");
			break;
		}
		
		system("CLS");
	}
	bus = peopleOnTheBus / 60;
	printf("People On The tour / 60 = how many busses you need: %d\n", bus);
	VanPeople = peopleOnTheBus % 60;
	printf("The people that need to be in a van: %0.f\n", VanPeople);
	const float VanCapacity = 7;
	vans = VanPeople / VanCapacity;
	//++vans; //I couldn't get rounding to work so i just did this
	printf("you will need %.0f van(s) and %d busses\n", ceil(vans), bus); 

	_getch();
	return 0;
}
