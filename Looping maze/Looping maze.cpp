
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <sstream>
#include <Windows.h>
using namespace std;

int main()
{
	string name;
	int input;
	bool room1;
	bool room2;
	bool room3;
	bool room4;
	bool room5;
	bool room6;
	bool room7;
	bool room8;
	bool room9;
	bool quit = false;
	printf("what is your name?\n");
	cin >> name;
	printf("Hi %s!\n", name.c_str());
	getch();
	system("CLS");
	printf("you are in a maze that is a 3 by 3.\n");
	printf("you must get out and this time the doors don't close behind you\n");
	printf("Lets get started!\n");
	getch();
	system("CLS");
	room1 = true;
	while (quit == false) {
		while (room1 == true) { // Start
			printf(" you are in room 1.you can go right or down 1 for right 2 for down\n");
			cin >> input;
			if (input == 1) {
				room1 = false;
				room2 = true;
				break;
			}
			if (input == 2) {
				room1 = false;
				room4 = true;
				break;
			}
			system("CLS");
		}

		while (room2 == true) {
			printf(" you are in room 2. you can go left, down, and right. 1 for left. 2 for down. 3 for right. \n");
			cin >> input;
			if (input == 1) {
				room1 = true;
				room2 = false;
				break;
			}
			else if (input == 2) {
				room5 = true;
				room2 = false;
				break;
			}
			else if (input == 3) {
				room3 = true;
				room2 = false;
				break;
			}
			system("CLS");
		}

		while (room3 == true) {
			printf(" you are in room 3. you can go left. press 1 to go left\n");
			cin >> input;
			if (input == 1) {
				room2 = true;
				room3 = false;
				break;
			}
			system("CLS");
		}

		while (room4 == true) {
			printf(" you are in room 4. you can go up, right and down. 1 for up. 2 for right. 3 for down.\n");
			cin >> input;
			if (input == 1) {
				room1 = true;
				room4 = false;
				break;
			}
			else if (input == 2) {
				room5 = true;
				room4 = false;
				break;
			}
			else if (input == 3) {
				room7 = true;
				room4 = false;
				break;
			}
			system("CLS");
		}

		while (room5 == true) {
			printf(" you are in room 5. you can go left, up and right. 1 for left. 2 for up 3 for right.\n");
			cin >> input;
			if (input == 1) {
				room4 = true;
				room5 = false;
				break;
			}
			else if (input == 2) {
				room2 = true;
				room5 = false;
				break;
			}
			system("CLS");
		}

		while (room6 == true) {
			printf(" you are in room 6. you can go go left. 1 for left.\n");
			cin >> input;
			if (input == 1) {
				room6 = false;
				room5 = true;
				break;
			}
		}

		while (room7 == true) {
			printf(" you are in room 7. you can go up and right. 1 for up. 2 for right \n");
			cin >> input;
			if (input == 1) {
				room4 = true;
				room7 = false;
				break;
			}
			else if (input == 2) {
				room8 = true;
				room7 = false;
				break;
			}
		}

		while (room8 == true) {
			printf(" you are in room 8. you can go left and right.\n");
		}

		while (room9 == true) {
			printf(" you are in room 9. you have beat the game! would you like to got back? 1 for yes 2 for \n");
		}
		return 0;
	}
}