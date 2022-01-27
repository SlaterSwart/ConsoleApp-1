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


using namespace std;




struct player {
	int health;
	int damage;
	string name;
};

vector<vector<string>> NpcLines{
	{"Hmm I like these pants, Very comfy... \n Oh! Hello Traveler! I didn't see you there. How are you?", "Yeah, I got my Up & Up hand sanitizer playlist on.\n oh! hello "}
};

int Attack(int &Dificulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName) {
	int choice;
	bool EnemyAlive = true;
	while (EnemyAlive == true) {
		if (health <= 0) {
		 // end func
			break;
		}
		if (Enemyhealth <= 0) {
			printf("Wow! you killed the %s. Honestly i didn't think you could do it.\n", EnemyName.c_str());
			printf("because you did so well i will be rewarding you with some tape to patch your self up.\n");
			health += 20;
			printf("Health: %d\n", health);
			break;
		}
		printf("How to you want to deal with the %s. 1 = dodge | 2 = hit | 3 = hard hitter (2x the damage 2x the pain) |\n", EnemyName.c_str());
			cin >> choice;
		int dodgechance = (rand() % 3) + 1;
		if (choice == 1) {
			printf("coward >:( you dodged, no damage taken.\n");
		}
		else if (choice == 2) {
			Enemyhealth = Enemyhealth - damage;
			if (dodgechance == 1 || 2) {
				printf("%s just hit you!\n ", EnemyName.c_str());
				printf("narrator: oh no, this is the downfall.\n");
				health = health - EnemyDamage;
				cout << "enemy health:" << Enemyhealth << endl;
				cout << "Health:" << health << endl;
			}
			else {
				printf("@s Missed!\n", EnemyName.c_str());
				printf("this Bozo Enemy just missed! can you beleive this guy lol\n");
				cout << "enemy health:" << Enemyhealth << endl;
				cout << "health:" << health << endl;
			}
		}
		else if (choice == 3) {
			Enemyhealth = Enemyhealth - (damage * 2);
			if (dodgechance == 1 || 2) {
				printf("%s just hit you for 2 times the amount of damage\n", EnemyName.c_str());
				printf("narrator: oh no, this is the downfall.\n");
				health = health - (EnemyDamage * 2);
				cout << "enemy health:" << Enemyhealth << endl;
				cout << "Health:" << health << endl;
			}
			else {
				printf("The %s Missed!\n", EnemyName.c_str());
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

int room1 (int &Difficulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName){
	 EnemyDamage = 10;
	 Enemyhealth = 20;
	 EnemyName = "Group of Paper Clips";
	 bool RoomActive = true;
	 while (RoomActive == true) {
		 printf("it's getting pretty dark in Miyoshi's room. I better find some shelter for the night before the office supplies find me (foreshadowing)\n");
		 for (int i = 0; i <= 5; i++) {
			 printf("A wild Paper clip appeared!\n");
			 Attack(Difficulty, health, damage, EnemyDamage, Enemyhealth, EnemyName);
			 printf("health: %d Damage: %d\n", health, damage);

		}
		 printf("wow! that was close! Now that they are dealt with, you can finally find shelter.\n\n");
		 _getch();
		 printf("you found a abandoned I-Mac (because no one uses them)\n you decided to make that your shelter\n");
		 printf("waiting for input.");
		 _getch();
		 break;
	 }
	 Difficulty = 1;
	 return 0;
}
int room2 (int &Difficulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName){
	EnemyDamage = 12;
	Enemyhealth = 30;
	EnemyName = "Pencil";
	bool RoomActive = true;
	while (RoomActive == true) {
		printf("When dawn breaks, you start to continue on your adventure to find a stapler\n When walking to the next desk you think that you see something in the distance...\n");
		for (int i = 0; i <= 1; i++) {
			printf("I'm going to right my essay on you! -mystery voice ");
			_getch();
			system("CLS");
			printf("A wild Pencil appeared!\n it will deface you if your not careful!\n");
			Attack(Difficulty, health, damage, EnemyDamage, Enemyhealth, EnemyName);
			printf("health: %d Damage: %d\n", health, damage);

		}
		printf("\n\n");
		_getch();
		printf("you need to keep on moving\n you decided to skip sleeping (who needs it anyways) and continue with your travles\n");
		printf("waiting for input.\n");
		_getch();
		system("CLS");
		break;
	}
	Difficulty = 2;
	return 0;
}
int room3 (int &Difficulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName){
	EnemyDamage = 1;
	Enemyhealth = 20;
	EnemyName = "tumble weed";
	bool RoomActive = true;
	while (RoomActive == true) {
		printf("you need to find some more tape for later incase you get hurt, so you go looking for some\n you happen to find some in between the desks\n");
		health += 20;
		printf("health: %d", health);
		for (int i = 0; i <= 5; i++) {
			printf("A single tumble weed appeared! (no one has been here in a while)\n");
			Attack(Difficulty, health, damage, EnemyDamage, Enemyhealth, EnemyName);
			printf("health: %d Damage: %d\n", health, damage);

		}
		printf("ummm, I just wanted to give you a free-bee. so here you go.\n\n");
		printf("waiting for input.\n");
		_getch();
		system("CLS");
		break;
	}
	Difficulty = 3;
	return 0;
}
int room4 (int &Difficulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName){
	EnemyDamage = 10;
	Enemyhealth = 20;
	EnemyName = "Group of Paper Clips";
	bool RoomActive = true;
	while (RoomActive == true) {
		printf("it's getting pretty dark in Miyoshi's room... again.\n");
		for (int i = 0; i <= 5; i++) {
			printf("A wild group of Paper clips appeared!\n");
			Attack(Difficulty, health, damage, EnemyDamage, Enemyhealth, EnemyName);
			printf("health: %d Damage: %d\n", health, damage);

		}
		printf("wow! that was close! or was it?\n\n");
		printf("waiting for input.\n");
		_getch();
		break;
	}
	Difficulty = 4;
	return 0;
}
int room5 (int &Difficulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName){
	EnemyDamage = 15;
	Enemyhealth = 10;
	EnemyName = "Group of key caps";
	bool RoomActive = true;
	while (RoomActive == true) {
		printf("after you healed up you take a break and get ambushed.\n");
		_getch();
		for (int i = 0; i <= 7; i++) {
			printf("A wild group of computer Key caps appeared!\n");
			Attack(Difficulty, health, damage, EnemyDamage, Enemyhealth, EnemyName);
			
			printf("health: %d Damage: %d\n", health, damage);

		}
		printf("since you dealt with then, you got stronger. the strength of 2 peices of paper behind just one.\n");
			damage += 15;
			cout << damage << endl;
		_getch();
		printf("waiting for input.\n");
		_getch();
		break;
	}
	Difficulty = 5;
	return 0;
}
int room6 (int &Difficulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName){
	EnemyDamage = 10;
	Enemyhealth = 20;
	bool RoomActive = true;
	while (RoomActive == true) {
		printf("you see a large teacher walk in to the room...\n it's Mr. Miyoshi! he's here to fix the printer! a dangerous foe. it has murdered thousands of your brothers and sisters.\n");
		printf("waiting for input.\n");
		_getch();
		health += 20;
		break;
	}
	Difficulty = 6;
	return 0;
}
int room7 (int &Difficulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName){
	EnemyDamage = 15;
	Enemyhealth = 20;
	EnemyName = "Group of Paper Clips";
	bool RoomActive = true;
	while (RoomActive == true) {
		printf("you get pretty tired and fall asleep. that doesn't last long though...\n");
		for (int i = 0; i == 5; i++) {
			printf("A wild group of Paper clips appeared!\n");
			Attack(Difficulty, health, damage, EnemyDamage, Enemyhealth, EnemyName);
			printf("health: %d Damage: %d\n", health, damage);

		}
		printf("might as well have just murder their whole blood line, you didn't have to do em that dirty. c'mon\n");
		printf("waiting for input.\n");
		_getch();
		break;
	}
	Difficulty = 7;
	return 0;
}
int room8 (int &Difficulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName){
	EnemyDamage = 20;
	Enemyhealth = 60;
	EnemyName = "Big Expo marker";
	bool RoomActive = true;
	while (RoomActive == true) {
		printf("you get close to the whiteboard. maybe a little too close...\n");
		for (int i = 0; i == 1; i++) {
			printf("A Really big expo marker appears!\n");
			Attack(Difficulty, health, damage, EnemyDamage, Enemyhealth, EnemyName);
			printf("health: %d Damage: %d\n", health, damage);

		}
		printf("i guess someone was drawing and left it out. don't they know that that could kill someone. (shaking my head)\n\n");
		_getch();
		printf("waiting for input\n.");
		_getch();
		damage = 30;
		break;
	}
	Difficulty = 8;
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


int bossRoom(int &Difficulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName) {
	EnemyDamage = 35;
	Enemyhealth = 150;
	EnemyName = "Evil Printer";
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

	player player1;
	player1.damage = 5;
	player1.health = 100;
	bool quit = false;
	int input;
	int EnemyDamage = 0;
	int Enemyhealth = 0;
	int Difficulty = 0;
	string EnemyName;
	






	//intro

	printf("Hi! I'm Slater, the devoloper of this RPG\n");
	printf("You will be plaing as a piece of paper\n");
	printf("trying to find your self a stapler so that you can get stapled.\n");
	printf("you will face other office supplies in order to get across Mr. Miyoshi's room\n");
	printf("If you make it to the end and get stapled you will be able to play the game again for more staples that might change some things the more you have.\n");

	_getch();
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
		   /*int room1played = 0;
		   int room2played = 0;
		   int room3played = 0;
		   int room4played = 0;
		   int room5played = 0;
		   int room6played = 0;
		   int room7played = 0;
		   int room8played = 0;
		   int room9played = 0;
		  /* int room10played = 0;
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
		   int room24played = 0;*/
		   bool ifRoom1 = false;
		   bool ifRoom2 = false;
		   bool ifRoom3 = false;
		   bool ifRoom4 = false;
		   bool ifRoom5 = false;
		   bool ifRoom6 = false;
		   bool ifRoom7 = false;
		   bool ifRoom8 = false;
		   bool ifRoom9 = false;
		   bool ifRoom10 = false;
		   bool ifRoom11 = false;
		   bool ifRoom12 = false;
		   bool ifRoom13 = false;
		   bool ifRoom14 = false;
		   bool ifRoom15 = false;
		   bool ifRoom16 = false;
		   bool ifRoom17 = false;
		   bool ifRoom18 = false;
		   bool ifRoom19 = false;
		   bool ifRoom20 = false;
		   bool ifRoom21 = false;
		   bool ifRoom22 = false;
		   bool ifRoom23 = false;
		   bool ifRoom24 = false;
		   bool ifRoom25 = false;
		   int roomChoice;
		   int dificult = 0;
		   
		   printf("What room would you like to start in? As the number gets higher, the difficulty gets harder! room 1 is advised.\n");
		   printf(" room 1\n room 2\n room 3\n room 4\n room 5\n room 6\n room 7\n room 8\n");
		   cin >> roomChoice;
		   switch (roomChoice)
		   {

		   case 1:
			   ifRoom1 = true;
			   break;

		   case 2:
			   ifRoom2 = true;
			   break;

		   case 3:
			   ifRoom3 = true;
			   break;

		   case 4:
			   ifRoom4 = true;
			   break;

		   case 5:
			   ifRoom5 = true;
			   break;

		   case 6:
			   ifRoom6 = true;
			   break;

		   case 7:
			   ifRoom7 = true;
			   break;

		   case 8:
			   ifRoom8 = true;
			   break;

			   /* case 9:

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

				case 25: */
		   }
			  if (ifRoom1 == true) {
				  room1(Difficulty, player1.health, player1.damage, EnemyDamage, Enemyhealth, EnemyName);
				  ifRoom2 = true;
				  ifRoom1 = false;
			  }
			  if (ifRoom2 == true) {
				  room2(Difficulty, player1.health, player1.damage, EnemyDamage, Enemyhealth, EnemyName);
				  ifRoom3 = true;
				  ifRoom2 = false;
			  }
			  if (ifRoom3 == true) {
				  room3(Difficulty, player1.health, player1.damage, EnemyDamage, Enemyhealth, EnemyName);
				  ifRoom4 = true;
				  ifRoom3 = false;
			  }
			  if (ifRoom4 == true) {
				  room4(Difficulty, player1.health, player1.damage, EnemyDamage, Enemyhealth, EnemyName);
				  ifRoom5 = true;
				  ifRoom4 = false;
			  }
			  if (ifRoom5 == true) {
				  room5(Difficulty, player1.health, player1.damage, EnemyDamage, Enemyhealth, EnemyName);
				  ifRoom6 = true;
				  ifRoom5 = false;
			  }
			  if (ifRoom6 == true) {
				  room6(Difficulty, player1.health, player1.damage, EnemyDamage, Enemyhealth, EnemyName);
				  ifRoom7 = true;
				  ifRoom6 = false;
			  }
			  if (ifRoom7 == true) {
				  room7(Difficulty, player1.health, player1.damage, EnemyDamage, Enemyhealth, EnemyName);
				  ifRoom8 = true;
				  ifRoom7 = false;
			  }
			  if (ifRoom8 == true) {
				  room8(Difficulty, player1.health, player1.damage, EnemyDamage, Enemyhealth, EnemyName);
				  ifRoom8 = false;
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

