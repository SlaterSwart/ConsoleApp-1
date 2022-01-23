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
#include <wincrypt.h>

using namespace std;




class player {
	int health;
	int strength;
	string name;
};

void gameover() {

	printf("you lost :/ ");
	exit(0);
	
}

int Playerattack(int &health, int &damage, int EnemyDamage, int Enemyhealth) {
	int choice;
	bool EnemyAlive = true;
	while (EnemyAlive == true) {
		if (health <= 0) {
			gameover();
		}
		if (Enemyhealth <= 0) {
			printf("Wow! you killed the enemy. Honestly i didn't think you could do it.\n");
			printf("because you did so well i will be rewarding you with a strength buff\n");
			damage += 5;
			break;
		}
		prinft("How to you want to deal with the enemy. 1 = dodge | 2 = hit |\n")
			cin << choice;
		int dodgechance = (rand() % 3) + 1;
		if (choice == 1) {
			print("coward >:( you dodged, no damage taken.\n");
		}
		else if (choice == 2) {
			Enemyhealth = Enemyhealth - damage;
			if (dodgechance == 1 || 2) {
				printf("the Enemy just hit you!\n ");
				printf("narrator: oh no, this is the downfall.\n");
				health = health - EnemyDamage;
			}
			else {
				printf("this Bozo Enemy just missed! can you beleive this guy lol\n");
			}
		}
		else {
			printf("invalid key detected, try again\n");
			printf("%d\t", health);
			health--;
			printf("--> %d\n", health);
		}
	}
}

int room1 (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room2 (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room3 (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room4 (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room5 (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room6 (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room7 (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room8 (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room9 (int& health, &damage, int EnemyDamage, int Enemyhealth) {}
int room10 (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room11  (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room12  (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room13  (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room14  (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room15  (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room16  (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room17  (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room18  (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room19  (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room20 (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room21  (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room22  (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room23  (int &health, &damage, int EnemyDamage, int Enemyhealth){}
int room24  (int &health, &damage, int EnemyDamage, int Enemyhealth){}


int bossRoom(int &health, int &damage, int EnemyDamage, int Enemyhealth ) {


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


	while (1 < 2) {
		int nameInput;
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

