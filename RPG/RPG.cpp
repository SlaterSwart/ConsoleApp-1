//	Name:  Slater Swart
/*	Project name : RPG
	Problem: make a RPG
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
#include <vector>
#include <Windows.h>
#include <fstream>


using namespace std;

void saveFiles(int Dificulty, int health, int damage, int name, ofstream out, bool save_game) {
	if (save_game == true) {
		out << Dificulty << ',' << health << ',' << damage << ',' << name << endl;
	}

	while()
}



struct player {
	int health;
	int damage;
	string name;
};

int Attack(int &Dificulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName) {
	int choice;
	ofstream out;
	out.open("save.txt");
	bool EnemyAlive = true;
	while (EnemyAlive == true) {
		if (health <= 0) {
		 // end func
			break;
		}
		if (Enemyhealth <= 0) {
			printf("Wow! you killed the %s. Honestly i didn't think you could do it.\n", EnemyName);
			printf("because you did so well i will be rewarding you with some tape to patch your self up.\n");
			health += 20;
			printf("Health: %d\n", health);
			break;
		}
		printf("How to you want to deal with the %s. 1 = dodge | 2 = hit | 3 = hard hitter (2x the damage 2x the pain) |\n", EnemyName);
			cin >> choice;
		int dodgechance = (rand() % 3) + 1;
		if (choice == 1) {
			printf("coward >:( you dodged, no damage taken.\n");
		}
		else if (choice == 2) {
			Enemyhealth = Enemyhealth - damage;
			if (dodgechance == 1 || 2) {
				printf("%s just hit you!\n ", EnemyName);
				printf("narrator: oh no, this is the downfall.\n");
				health = health - EnemyDamage;
				cout << "enemy health:" << Enemyhealth << endl;
				cout << "Health:" << health << endl;
			}
			else {
				printf("@s Missed!\n", EnemyName);
				printf("this Bozo Enemy just missed! can you beleive this guy lol\n");
				cout << "enemy health:" << Enemyhealth << endl;
				cout << "health:" << health << endl;
			}
		}
		else if (choice == 3) {
			Enemyhealth = Enemyhealth - (damage * 2);
			if (dodgechance == 1 || 2) {
				printf("%s just hit you for 2 times the amount of damage\n", EnemyName);
				printf("narrator: oh no, this is the downfall.\n");
				health = health - (EnemyDamage * 2);
				cout << "enemy health:" << Enemyhealth << endl;
				cout << "Health:" << health << endl;
			}
			else {
				printf("The %s Missed!\n", EnemyName);
				printf("this Bozo Enemy just missed! can you beleive this guy lol\n");
				cout << "enemy health:" << Enemyhealth << endl;
				cout << "Health:" << health << endl;
			}

		}
		else {
			printf("invalid key detected, try again\n");
			printf("%d\t", health);
			health--;
			printf("--> %d\n", health);
		}
	}
	return 0;
}

int bossRoom(int &Difficulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName) {
	EnemyDamage = 35;
	Enemyhealth = 150;
	bool bossfight = true;
	while (bossfight == true) {
		printf("Now that you have defeated all of my enemys you will now have to face the boss.\n");
		printf("the boss is one of Mr. Miyoshi's evil printing machines! The printer doesn't mess around, so be careful");
		Attack(Difficulty, health, damage, EnemyDamage, Enemyhealth, EnemyName);
	}
	return 0;
}


int main()
{
	bool save_game = 0;
	srand((unsigned)time(NULL));
	float Covert_movement = 0.0;
	player player1;
	player1.damage = 5;
	player1.health = 100;
	bool quit = false;
	int input;
	int EnemyDamage = 0;
	int Enemyhealth = 0;
	int Difficulty = 0;
	vector<string> EnemyNamev;
	EnemyNamev.push_back("Paper clip"); 
	EnemyNamev.push_back("marker");
	EnemyNamev.push_back("paper shreder");
	EnemyNamev.push_back("300 page book");
	EnemyNamev.push_back("eraser");
	EnemyNamev.push_back("ruler");
	EnemyNamev.push_back("mouse pad");
	string EnemyName = "";
	vector<string> Dialog;
	Dialog.push_back("You're going to get shreded when I'm done with you! mwahha");
	Dialog.push_back("oh nooo! our table, it's broken!");
	Dialog.push_back("You should give up. NOW!");
	Dialog.push_back("You're pretty much shreded paper at this point!");
	Dialog.push_back("STOOOOP i coulda drop my croissant.");
	//intro

	/*printf("Hi! I'm Slater, the devoloper of this RPG\n");
	printf("You will be plaing as a piece of paper\n");
	printf("trying to find your self a stapler so that you can get stapled.\n");
	printf("you will face other office supplies in order to get across Mr. Miyoshi's room\n");
	printf("If you make it to the end and get stapled you will be able to play the game again for more staples that might change some things the more you have.\n");

	_getch();*/
	system("CLS");


	while ( quit == false) {
		printf(" what is your name\n");
		cin >> player1.name;
		cout << "Hello " << player1.name << endl;
		printf("Are you Ready to start the game?\n | 1 = yes | 2 = no |\n");
	

		cin >> input;
		if (input == 1)
		{
			system("CLS");
			printf("Okay!\n");
			_getch();
			system("CLS");
		   
		   int roomChoice;
		   int dificult = 0;
		   
		   printf("Do you want to start the game? 1 for yes||2 of no");
		   cin >> roomChoice;
			

		   for (int i = 0; i <= 25; i++) {
			  
			   cout << Dialog[rand() % Dialog.size()];
			   Attack(Difficulty, player1.health, player1.damage, EnemyDamage, Enemyhealth, EnemyName);
			   if (i == 2) {
				   player1.health += 10;
				   printf("You gained ten hp! Health: %d", player1.health);
				   system("ClS");
			   }


		   }
			  if (Difficulty == 8) {
				  bossRoom(Difficulty, player1.health, player1.damage, EnemyDamage, Enemyhealth, EnemyName);
				  printf("ahh you beat my great masterpiece. this is so sad. Would you like to try again and maybe try to lose this time to boost my ego?| 1 = yes | 2 = no |\n");
				  int restart = 0;
				  cin >> restart;
				  break; 
				  if (restart == 1) {
					  continue;
				  }
				  if (restart == 2) {
					  break;
				  }

			  }
	
		   
		 
		
		}
		else if (input == 2)
		{
			printf("Closing program...");

			quit = true;
		}
		
	}
	return 0;
	
}

