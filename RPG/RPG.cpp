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
#include <algorithm>


using namespace std;



void saveFiles(int Dificulty, int health, int damage, int name, ofstream out, bool save_game) {
	int A;
	cout << "do you want to save? 1 = yes 2 = no\n";
	cin >> A;
	if (A == 1) {
		out << Dificulty << ',' << health << ',' << damage << ',' << name << endl;
	}
}
void getFiles(int &Dificulty, int &health, int &damage, int &name, ofstream out, bool save_game) {
	string temp;
	while (getline(out, temp, ',')) {
		Dificulty = stio(temp);
		getline(out, temp, ',');
		health = stio(temp);
		getline(out, temp, ',');
		damage = stio(temp);
		getline(out, temp, ',');
		name = temp;
		break; // just incase
	}
	cout << "pull complete\n";
}



struct player {
	int health;
	int damage;
	string name;
};


class Npc
{
public:
	int A;
	void Purchase(int& Money, int& choice, int Item, int& health, int& damage);

private:

};
void Npc::Purchase(int& Money, int& choice, int Item, int& health, int& damage) {
	cout << "Weapons: \nPencil: Cost 20 | Damage 20\nPen: Cost 30 | Damage 25\nRubber Band Whip: Cost 35 | Damage 30\n";
	cin >> choice;
	if (choice == 1 && Money >= 20) {
		damage = 20;
		Money -= 20;
	}
	else if (choice == 2 && Money >= 30) {
		damage = 25;
		Money -= 30;
	}
	else if (choice == 3 && Money > 35) {
		damage = 30;
		Money -= 35;
	}

	cout << "\n Good choice I guess\n";
}

int Attack(int &Dificulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName, int &Money) {
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
			Money++;
			cout << "Money: " << Money << endl;
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

int bossRoom(int &Difficulty, int &health, int &damage, int EnemyDamage, int Enemyhealth, string EnemyName, int &Money) {
	EnemyDamage = 35;
	Enemyhealth = 150;
	bool bossfight = true;
	while (bossfight == true) {
		printf("Now that you have defeated all of my enemys you will now have to face the boss.\n");
		printf("the boss is one of Mr. Miyoshi's evil printing machines! The printer doesn't mess around, so be careful");
		Attack(Difficulty, health, damage, EnemyDamage, Enemyhealth, EnemyName, Money);
	}
	return 0;
}


int main()
{
	int choice;
	int Money = 0;
	bool Call_Data = false;
	bool save_game = false;
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
	Dialog.push_back("You're going to get shreded when I'm done with you! mwahha\n");
	Dialog.push_back("oh nooo! our table, it's broken!\n");
	Dialog.push_back("You should give up. NOW!\n");
	Dialog.push_back("You're pretty much shreded paper at this point!\n");
	Dialog.push_back("STOOOOP i coulda drop my croissant.\n");
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
			

		   for (int i = 1; i <= 25; i++) {
			   Enemyhealth = 10;
			   Enemyhealth = Enemyhealth + (i * 2.5);
			   EnemyDamage = EnemyDamage + (i * 1.5);
			   cout << Dialog[rand() % Dialog.size()];
			   EnemyName = EnemyNamev[rand() % EnemyNamev.size()];
			   Attack(Difficulty, player1.health, player1.damage, EnemyDamage, Enemyhealth, EnemyName ,Money);
			   if (player1.health == 0) {
				   quit = true;
				   break;
			   }

			   if (i == 2) {
				   player1.health += 10;
				   printf("You gained ten hp! Health: %d", player1.health);
				   system("ClS");
			   }
			   if (i == 10) {
				  nPurchase(Money, choice, player1.health, player1.damage);

			   }
			   

			   dificult++;
		   }
			  if (Difficulty == 26) {
				  EnemyName = "Evil Printer";
				  bossRoom(Difficulty, player1.health, player1.damage, EnemyDamage, Enemyhealth, EnemyName, Money);
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

