/*
Name:  Slater Swart
	Project name: Computer programing quiz
	Problem: make a quiz that will score it's self
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
#include <chrono>
#include <thread>
using namespace std;

int main()
{
start:
	using namespace this_thread;     // sleep_for, sleep_until
	using namespace chrono_literals; // ns, us, ms, s, h, etc.
	using chrono::system_clock;

	string name;//user's name
	int input;//used to track the users inputs, has to be int beacause switch doesn't like strings
	float score = 0;
	float wrongAnswer = .25;
	float rightAnswer = 1.0;//didn't use this
	float TotalPoints = 3.0;//max points possible 
	float percentAfter;//percentDecimal times 100
	float percentDecimal;//score divided by TotalPoints

	printf("Enter your last name and First initial:  ");
	cin >> name;
	system("CLS");

	printf("Hi %s, we are geting your quiz ready.\n", name.c_str());
	sleep_for(1s);
	sleep_until(system_clock::now() + 1s);// adds a delay 
	system("CLS");
question1:
	printf("Question #1\n");
	printf("%s, What does the Branching Statment, Break, do?\n", name.c_str());//.c_str() allows you to printf strings
	printf("1\t\t\t2\t\t\t\t\t3\t\t\t\t\t4\n");
	printf("break your code\t\tgoes to the end of the program\t\t");
	printf("Makes custom t-shirts for you\t\tterminates the existing structure and ends a loop\n");
	cin >> input;
	if (input == 4)
	{
		score = score + 1;
		system("CLS");
		goto question2;
	}
	else
	{
		printf("try again");
		sleep_for(1s);
		score = score - wrongAnswer;
		system("CLS");
		goto question1;
	}
	_getch();
	system("CLS");
question2:
	printf("Quesion #2\n");
	printf("%s, What Header do you have to use to be able to use _getch()?\n", name.c_str());
	printf("1\t\t2\t\t3\t\t4\n");
	printf("<conio.h>\t<string>\t<stdio.h>\t<stdlib.h>\n");
	cin >> input;
	if (input == 1)
	{
		score = score + 1;
		system("CLS");
		goto question3;
	}
	else
	{
		printf("try again");
		sleep_for(1s);
		score = score - wrongAnswer;
		system("CLS");
		goto question2;
	}
	_getch();
	system("CLS");
question3:
	printf("Question #3\n");
	printf("%s, What identifier if true or false?\n", name.c_str());
	printf("1\t2\t3\t4\n");
	printf("Int\tBool\tFloat\tString\n");
	cin >> input;
	if (input == 2)
	{
		score = score + 1;
		system("CLS");
		goto endscreen;
	}
	else
	{
		printf("try again");
		score = score - wrongAnswer;
		sleep_for(1s);
		system("CLS");
		goto question3;
	}
	
endscreen:
	printf("%s, ", name.c_str()); printf("Your Test Score!:   %.2f\n", score);
	percentDecimal = score / TotalPoints;
	percentAfter = percentDecimal * 100;
	printf("your percentage: %%%.0f\n", percentAfter);

	printf("Press 1 to restart Press 2 to exit\n");
	cin >> input;
	if (input == 1)
	{
		system("CLS");
		goto start;
	}
	else if (input == 2)
	{
		return 0;
	}


	_getch();
	return 0;
}

