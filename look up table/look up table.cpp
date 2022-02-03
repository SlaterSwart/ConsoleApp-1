// look up table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Slater Swart

#include <iostream>
#include <vector>
#include <time.h>
#include <conio.h>
using namespace std;

int main()
{
	int LX8_Cordless_Laser_Mouse;
	int LX6_Cordless_Optical_Mouse;
	int input;
	int joke;
	srand(0);
	srand((unsigned)time(NULL));

	vector<vector<int>> table; //perm vector
	for (int i = 1; i <= 12; i++) {
	vector<int> pushVec; //temp vector
		for (int f = 1; f <= 12; f++) {
			pushVec.push_back(i * f);
		}
		table.push_back(pushVec); // populate vector 
	}

	while (true) {
		printf("do you want to start the flash cards? 1 = yes | 2 = no\n");
		cin >> input;
		if (input == 1) {
			int answer = 0;
			LX8_Cordless_Laser_Mouse = rand() % 12;
			LX6_Cordless_Optical_Mouse = rand() % 12;
			printf("Random equation: %d * %d\n", LX8_Cordless_Laser_Mouse + 1, LX6_Cordless_Optical_Mouse + 1);
			printf("what is your answer?\n");
			cin >> answer;
			if (answer == table[LX8_Cordless_Laser_Mouse][LX6_Cordless_Optical_Mouse]) {
				printf("Wow! you got it right!\n");
				_getch();
				system("CLS");
			}
			else if (answer != table[LX8_Cordless_Laser_Mouse][LX6_Cordless_Optical_Mouse]) {
				printf("You got it wrong! Did you even pass 5th grade?\n 1 = yes | 2 = no\n");
				cin >> joke;
				system("CLS");
			}
			continue;
		}
		else if (input == 2) {
			break;
		}
		else {
			printf("invalid key pressed, try again bozo\n");
			continue;
		}
	}
	return 0;
}