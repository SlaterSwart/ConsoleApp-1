
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
			fortunes = printf("You will find a bushel of money\n");
		case 2:
			fortunes = printf("Your smile will tell you what makes you feel good.\n");
		case 3:
			fortunes = printf("The best year - round temperature is a warm heart and a cool head\n");
		case 4:
			fortunes = printf("It could be better, but it’s good enough.\n");
		case 5:
			fortunes = printf("You will find a thing.It may be important\n");
		case 6:
			fortunes = printf("Two days from now, tomorrow will be yesterday.\n");
		case 7:
			fortunes = printf("Stop eating now. Food poisoning no fun.\n");
		case 8:
			fortunes = printf("Person who eat fortune cookie get lousy dessert.\n");
		case 9:
			fortunes = printf("You will soon have an out of money experience.\n");
		case 10:
			fortunes = printf("Person who rests on laurels gets thorn in backside.\n");
		 
	}
}


int main()
{
	int choice;
	string fortunes = fortunethingcookie(choice)




		SixSidedDie = (minimum)+rand() % (maximum - minimum + 1); // random 6 sided dice
	printf("6 sided dice:%d\n", SixSidedDie);
}