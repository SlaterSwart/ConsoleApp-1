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


using namespace std;




struct player {
	int health;
	int damage;
	string name;
};

vector<vector<string>> NpcLines{
	{"Hmm I like these pants, Very comfy... \n Oh! Hello Traveler! I didn't see you there. How are you?", "Yeah, I got my Up and Up hand sanitizer playlist on.\n oh! hello "}
};

int Attack(int &quit, int Dificult, int &health, int &damage, int EnemyDamage, int Enemyhealth) {
	int choice;
	bool EnemyAlive = true;
	while (EnemyAlive == true) {
		if (health <= 0) {
			quit = true;
			break;
		}
		if (Enemyhealth <= 0) {
			printf("Wow! you killed the enemy. Honestly i didn't think you could do it.\n");
			printf("because you did so well i will be rewarding you with some tape to patch your self up.\n");
			health += 10;
			printf("Health: %d\n", health);
			break;
		}
		printf("How to you want to deal with the enemy. 1 = dodge | 2 = hit | 3 = hard hitter (2x the damage 2x the pain) |\n");
			cin >> choice;
		int dodgechance = (rand() % 3) + 1;
		if (choice == 1) {
			printf("coward >:( you dodged, no damage taken.\n");
		}
		else if (choice == 2) {
			Enemyhealth = Enemyhealth - damage;
			if (dodgechance == 1 || 2) {
				printf("the Enemy just hit you!\n ");
				printf("narrator: oh no, this is the downfall.\n");
				health = health - EnemyDamage;
			}
			else {
				printf("The Enemy Missed!\n");
				printf("this Bozo Enemy just missed! can you beleive this guy lol\n");
			}
		}
		else if (choice == 3) {
			Enemyhealth = Enemyhealth - (damage * 2);
			if (dodgechance == 1 || 2) {
				printf("the Enemy just hit you for 2 times the amount of damage;\n ");
				printf("narrator: oh no, this is the downfall.\n");
				health = health - (EnemyDamage * 2);
			}
			else {
				printf("The Enemy Missed!\n");
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
	return 0;
}

int room1 (int &quit, int &Difficult, int &health, int &damage, int EnemyDamage, int Enemyhealth){
	 EnemyDamage = 10;
	 Enemyhealth = 20;
	 bool RoomActive = true;
	 while (RoomActive == true) {
		 printf("it's getting pretty dark in Miyoshi's room. I better find some shelter for the night before the office supplies find me (foreshadowing)\n");
		 for (int i = 0; i == 5; i++) {
			 printf("A wild group of Paper clips appeared!\n");
			 Attack(quit, Difficult, health, damage, EnemyDamage, Enemyhealth);
			 printf("health: %d Damage: %d\n", health, damage);

		}
	 }
	 
	 return 0;
}
int room2 (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room3 (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room4 (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room5 (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room6 (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room7 (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room8 (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room9 (int& health, int &damage, int EnemyDamage, int Enemyhealth) {
	EnemyDamage = 11;
	return 0;
}
int room10 (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room11  (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room12  (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room13  (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room14  (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room15  (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room16  (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room17  (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room18  (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	 EnemyDamage = 11;
	 return 0;
}
int room19  (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room20 (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room21  (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room22  (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room23  (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}
int room24  (int &health, int &damage, int EnemyDamage, int Enemyhealth){
	EnemyDamage = 11;
	return 0;
}


int bossRoom(int &health, int &damage, int EnemyDamage, int Enemyhealth ) {
	EnemyDamage = 11;
	return 0;
}


int main()
{

	player player1;
	player1.damage = 5;
	player1.health = 100;
	bool quit = false;
	int input;

	






	//intro

	printf("Hi! I'm Slater, the devoloper of this RPG\n");
	printf("You will be plaing as a piece of paper\n");
	printf("trying to find your self a stapler so that you can get stapled.\n");
	printf("you will face other office supplies in order to get across Mr. Miyoshi's room\n");
	printf("If you make it to the end and get stapled you will be able to play the game again for more staples that might change some things the more you have.\n");


	system("CLS");


	while ( quit == false) {
		cin >> player1.name;
		cout << "Hello " << player1.name << endl;
		printf("Are you Ready to start the game?\n");
	

		cin >> input;
		if (input == 1)
		{
			system("CLS");
			printf("Okay!\n");
			_getch();
			system("CLS");
		   int room1played = 0;
		   int room2played = 0;
		   int room3played = 0;
		   int room4played = 0;
		   int room5played = 0;
		   int room6played = 0;
		   int room7played = 0;
		   int room8played = 0;
		   int room9played = 0;
		   int room10played = 0;
		   int room11played = 0;
		   int room12played = 0;
		   int room13played = 0;
		   int room14played = 0;
		   int room15played = 0;
		   int room16played = 0;
		   int room17played = 0;
		   int room18played = 0;
		   int room19played = 0;
		   int room20played = 0;
		   int room21played = 0;
		   int room22played = 0;
		   int room23played = 0;
		   int room24played = 0;
		   bool room1 = false;
		   bool room2 = false;
		   bool room3 = false;
		   bool room4 = false;
		   bool room5 = false;
		   bool room6 = false;
		   bool room7 = false;
		   bool room8 = false;
		   bool room9 = false;
		   bool room10 = false;
		   bool room11 = false;
		   bool room12 = false;
		   bool room13 = false;
		   bool room14 = false;
		   bool room15 = false;
		   bool room16 = false;
		   bool room17 = false;
		   bool room18 = false;
		   bool room19 = false;
		   bool room20 = false;
		   bool room21 = false;
		   bool room22 = false;
		   bool room23 = false;
		   bool room24 = false;
		   bool room25 = false;
		   int roomChoice;

		   printf("What room would you like to start in? As the number gets higher, the difficulty gets harder! room 1 is advised.\n");
		   cin >> roomChoice;
		   switch (roomChoice)
		   {
			
			  case 1:

			  case 2:

			  case 3:

			  case 4:

			  case 5:

			  case 6:

			  case 7:

			  case 8:

			  case 9:

			  case 10:

			  case 11:

			  case 12:

			  case 13:

			  case 14:

			  case 15:

			  case 16:

			  case 17:

			  case 18:

			  case 19:

			  case 20:

			  case 21:

			  case 22:

			  case 23:

			  case 24:

			  case 25:
			







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

