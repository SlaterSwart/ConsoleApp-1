
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <sstream>
#include <Windows.h>

using namespace std;

string fortunethingcookie(int choice) {
	string fortunes;
	switch (choice) {
		case 1:
			fortunes = "You will find a bushel of money";
			break;
		case 2:
			fortunes = "Your smile will tell you what makes you feel good.";
			break;
		case 3:
			fortunes = "The best year - round temperature is a warm heart and a cool head";
			break;
		case 4:
			fortunes = "It could be better, but it’s good enough.";
			break;
		case 5:
			fortunes = "You will find a thing.It may be important";
			break;
		case 6:
			fortunes = "Two days from now, tomorrow will be yesterday.";
			break;
		case 7:
			fortunes = "Stop eating now. Food poisoning no fun.";
			break;
		case 8:
			fortunes = "Person who eat fortune cookie get lousy dessert.";
			break;
		case 9:
			fortunes = "You will soon have an out of money experience.";
			break;
		case 10:
			fortunes = "Person who rests on laurels gets thorn in backside.";
			break;
	}
	return fortunes;
}


int main()
{
	int choice;
	
	bool quit = false;
	while (quit == false) {
		printf("do you want a fortune? 1 = yes 2 = no\n");
		cin >> choice;
		switch (choice)
		{
		case 1:
			printf("choose a number between one and ten.\n");
			cin >> choice;
			cout << fortunethingcookie(choice) << endl;
			
			break;
		case 2:
			quit = true;
			break;
		default:
			printf("bozo");
			break;

		}

	}
	

	return 0;


}