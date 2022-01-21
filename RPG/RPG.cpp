/*	Name:  Slater Swart
	Project name: RPG
	Problem: 
	Pseudocode: 
	Notes:  
	Maintenance log: 
		Date started:9/13/21		Done:
		10/2/21: started really doing something, i added some health and damage values
*/


#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <regex>
#include <chrono>
#include <thread>
#include <wincrypt.h>

using namespace std;





struct player {
	int health;
	int strength;
	string name;
};

void gameover() {
	printf("you lost :/ ");

	exit(0);
	
}

int Playerattack(int &health, int &damage) {
	
}

int roomtype1(int &health, int &damage) {

	return health;
}

int roomtype2(int health, int &damage) {
	health = 99
	return health;
}

int roomtype3(int health, int damage) {

	return health;
}

int roomtype4(int health, int damage) {

	return health;
}
int bossRoom(int health, int damage) {

	return health;
}


int main()
{
	player player1;
	player1.damage = 5;
	player1.health = 100;


	






	//intro

	printf("Hi! I'm Slater, the devoloper of this RPG\n");
	printf("You will be plaing as a piece of paper\n");
	printf("trying to find your self a stapler so that you can get stapled.\n");
	printf("you will face other office supplies in order to get across Mr. Miyoshi's room\n");
	printf("If you make it to the end and get stapled you will be able to play the game again for more staples that might change some things the more you have.\n");

	_getch();
	system("CLS");
	//real coding starts here

	float NPCHealth = 1000;

	string input;
	bool quit = false;

	//enemy attacks damage:
	//pen
	float PenHealth = 250;
	const int PenAttack = 20;
	int PenAtkMin = 1;
	int PenAtkMax = 40;
	int PenAtkRand;
	PenAtkRand = (PenAtkMin)+rand() % (PenAtkMax - PenAtkMin + 1); // random damage for Pen
	//first Boss, scissors 
	float ScissorHealth = 1000;
	const int ScissorBaseDmg = 25;
	bool ScissorDodge = 1; // Place holder, Don't keep this as 1!
	//ScissorDodge ++1 then --1 in every fight i guess 
	int ScissorMax = 1500;
	int ScissorMin = 25;
	int ScissorRand;
	ScissorRand = (ScissorMin)+rand() % (ScissorMax - ScissorMax + 1); //Random Game end attack
	while (1 < 2) {
		printf("What do you want to be known as?\n");
		cin >> PlayerName;
		system("CLS");
		printf("are you sure that what %s want your name to be?\n", PlayerName.c_str());
	
	
	}

	while (quit == false) {

		cout << "Hello " << PlayerName << endl;
		printf("Are you Ready to start the game?\n");
		int i = 1;

		cin >> input;
		if (input == "yes")
		{
			system("CLS");
			printf("Okay!\n");
			_getch();
			system("CLS");
		}
		else if (input == "no")
		{
			printf("Closing program...");
			sleep_for(10ns);
			sleep_until(system_clock::now() + 1s);//closes the program after waiting ~1 second
			return 0;
		}
	}
	//story starts here
	
}

