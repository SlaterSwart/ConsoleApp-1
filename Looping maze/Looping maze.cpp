
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
	}

	while (room2 == true) {
		printf(" you are in room 2. you can go left, down and right.\n");
	}

	while (room3 == true) {
		printf(" you are in room 3. you can go left.\n");
	}

	while (room4 == true) {
		printf(" you are in room 4. you can go up, left and down.\n");
	}

	while (room5 == true) {
		printf(" you are in room 5. you can go left, up and right.");
	}

	while (room6 == true) {
		printf(" you are in room 6. you can go go left.\n");
	}

	while (room7 == true) {
		printf(" you are in room 7. you can go up and left.\n");
	}

	while (room8 == true) {
		printf(" you are in room 8. you can go left and right 
	}

	while (room9 == true) {
		printf(" you are in room 9.
	}
}