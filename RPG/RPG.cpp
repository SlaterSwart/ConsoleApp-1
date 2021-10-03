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
using namespace std;
int main()
{
	//intro
	string dot1 = "   ";
	string dot2 = ".  ";
	string dot3 = ".. ";
	string dot4 = "...";
	string dot5 = " ..";
	string dot6 = "  .";


	printf("Hi! I'm Slater, the devoloper of this RPG\n");
	printf("You will be plaing as a piece of paper\n");
	printf("trying to find your self a stapler so that you can get stapled.\n");
	printf("you will face other office supplies in order to get across Mr. Miyoshi's room\n");
	printf("If you make it to the end and get stapled you will be able to play the game again for more staples that might change some things the more you have.\n");
	printf("Have fun, the whole game is one big office war!\n");

	_getch();
	system("CLS");
	//real coding starts here

	float PlayerHealth; //ALWAYS CEIL/FLOOR THIS!!
	float PlayerDamage; //This will change depending on items and skill sets
	float NPCHealth = 1000;
	string PlayerName;

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

	printf("What do you want to be known as?\n");
	cin >> PlayerName;
	system("CLS");

	cout << "Hello" << PlayerName << endl;
	printf("Are you Ready to start the game?"); 
	while (1 < 2)
	{
		cout << dot1 << endl;
		dot1.replace(dot1.find("   "), 2, dot2);
		cout << dot2 << endl;
		dot2.replace(dot2.find(".  "), 2, dot3);
		cout << dot3 << endl;
		dot3.replace(dot3.find(".. "), 2, dot4);
		cout << dot4 << endl;
		dot4.replace(dot4.find("..."), 2, dot5);
		cout << dot5 << endl;
		dot5.replace(dot5.find(" .."), 2, dot6);
		cout << dot6 << endl;
		dot6.replace(dot6.find("  ."), 2, dot1);

		return EXIT_SUCCESS;
	}



	_getch();
	return 0;					
}

