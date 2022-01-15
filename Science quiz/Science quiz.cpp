/*
Name:  Slater Swart
	Project name: science quiz
	Problem: make a quiz that will score it's self
	Pseudocode:
	name
	input
	questions
	grades
	give percent
	Notes:
	Maintenance log:
		Date started:9/13/21		Done:9/13/21
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <chrono>
#include <thread>
#include <windows.h>
#include <cwchar>
using namespace std;
int main()
{

	using namespace this_thread;     // sleep_for, sleep_until
	using namespace chrono_literals; // ns, us, ms, s, h, etc.
	using chrono::system_clock;
	string name;
	string input;
	int score = 0;
	float percent;
	float questions = 12;
	float outof100;
	string joe;

	printf("Enter your name here:  ");
	cin >> name;
	if (name == "joe")//joe easter egg because my friend wanted it in here
	{
		printf("joe who?\n");
		cin >> joe;
		if (joe == "mama")
		{
			printf("not funny >:(");
			return 0; //closees the program
		}
	}

	system("CLS");
	printf("Hi, %s!\n", name.c_str());
	printf("We are about to start the quiz.\n");
	_getch();
	system("CLS");
	printf("Starting quiz...");
	sleep_for(10ns);
	sleep_until(system_clock::now() + 1s);
	system("CLS");

	printf("Question #1\n");
	printf("%s, How Many Planets Are In Our Solar System?(not including pluto)\n", name.c_str());
	printf("A\tB\tC\tD\n");
	printf("None\t12\t8\t9\n");
	cin >> input;
	if (input == "a")
	{
		printf("Incorrect, subtracting 1 point.\n");
		--score;
		printf("your score: %d\n", score);
	}
	else if (input == "b")
	{
		printf("Incorrect, subtracting 1 point.\n");
		--score;
		printf("your score: %d\n", score);
	}
	else if (input == "c")
	{
		printf("Correct! Awarding 4 points!\n");
		score = score + 4;
		printf("your score: %d\n", score);
	}
	else if (input == "d")
	{
		printf("Incorrect, subtracting 1 point.\n");
		--score;
		printf("your score: %d\n", score);
	}
	else
	{
		printf("invalid key pressed. no points awarded");
	}
	_getch();
	system("CLS");

	printf("Question #2\n");
	printf("%s, The concept of gravity was discovered by which famous physicist?\n", name.c_str());
	printf("A\t\tB\t\tC\t\tD\n");
	printf("Isaac Newton\tRosa Parks\tAlbert Einstein\tColonel Sanders\n");
	cin >> input;

	if (input == "a")
	{
		printf("Correct! Awarding 4 points!\n");
		score = score + 4;
		printf("your score: %d\n", score);
	}
	else if (input == "b")
	{
		printf("Incorrect, subtracting 1 point.\n");
		--score;
		printf("your score: %d\n", score);
	}
	else if (input == "c")
	{
		printf("Incorrect, subtracting 1 point.\n");
		--score;
		printf("your score: %d\n", score);
	}
	else if (input == "d")
	{
		printf("Incorrect, subtracting 1 point.\n");
		--score;
		printf("your score: %d\n", score);
	}
	else
	{
		printf("invalid key pressed. no points awarded");
	}
	_getch();
	system("CLS");

	printf("Question #3\n");
	printf("%s, Which oath of ethics taken by doctors is named after an Ancient Greek physician?\n", name.c_str());
	printf("A\t\t\tB\t\t\tC\t\t\tD\n");
	printf("Pledge of allegiance\tSanitary oath\t\tMagician's oath\t\tHippocratic Oath\n");
	cin >> input;
	if (input == "a")
	{
		printf("Incorrect, subtracting 1 point.\n");
		--score;
	}
	else if (input == "b")
	{
		printf("Incorrect, subtracting 1 point.\n");
		--score;
	}
	else if (input == "c")
	{
		printf("Incorrect, subtracting 1 point.\n");
		--score;
	}
	else if (input == "d")
	{
		printf("Correct! Awarding 4 points!\n");
		score = score + 4;
	}
	else
	{
		printf("invalid key pressed. no points awarded");
	}

	_getch();
	system("CLS");

	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 25;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, L"Lucida"); // Choose font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	printf("%s, ", name.c_str()); printf("Your Test Score!:   %d\n", score);
	outof100 = score / questions;
	percent = outof100 * 100;
	printf("your percentage: %%%.0f\n", percent);

	_getch();
	return 0;
}



