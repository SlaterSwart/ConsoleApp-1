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

	printf("Question #1\n");
	printf("%s, What does the Branching Statment, Break, do?\n", name.c_str());//.c_str() allows you to printf strings
	printf("1\t\t\t2\t\t\t\t\t3\t\t\t\t\t4\n");
	printf("break your code\t\tgoes to the end of the program\t\t");
	printf("Makes custom t-shirts for you\t\tterminates the existing structure and ends a loop\n");
	cin >> input;
	switch (input)
	{
	case 1://if the input is 1 then will excute the code below 
		printf("Incorrect answer. removing .25 points.\n");
		score = score - wrongAnswer;
		printf("your score: %.2f\n", score);
		break;
	case 2://if the input is 2 then will excute the code below 
		printf("Incorrect answer. removing .25 points.\n");
		score = score - wrongAnswer;
		printf("your score: %.2f\n", score);
		break;
	case 3://if the input is 3 then will excute the code below 
		printf("Incorrect answer. removing .25 points.\n");
		score = score - wrongAnswer;
		printf("your score: %.2f\n", score);
		break;
	case 4://if the input is 4 then will excute the code below 
		printf("Correct! Nice Job! adding one point.\n");
		++score;
		printf("your score: %.2f\n", score);
		break;
	default://if the user presses a incorrect input this will happen. 
		printf("invalid key pressed. not adding and points");
		break;
	}
	_getch();
	system("CLS");

	printf("Quesion #2\n");
	printf("%s, What Header do you have to use to be able to use _getch()?\n", name.c_str());
	printf("1\t\t2\t\t3\t\t4\n");
	printf("<conio.h>\t<string>\t<stdio.h>\t<stdlib.h>\n");
	cin >> input;
	switch (input)
	{
	case 1:
		printf("Woo Hoo! you got it! adding one point.\n");
		++score;
		printf("your score: %.2f\n", score);
		break;
	case 2:
		printf("Incorrect answer better luck next time. removing .25 points.\n");
		score = score - wrongAnswer;
		printf("your score: %.2f\n", score);
		break;
	case 3:
		printf("not quite right. removing .25 points.\n");
		score = score - wrongAnswer;
		printf("your score: %.2f\n", score);
		break;
	case 4:
		printf("ooooh close but no cigar. removing .25 points.\n");
		score = score - wrongAnswer;
		printf("your score: %.2f\n", score);
		break;
	default:
		printf("invalid key pressed. not adding and points");
		break;
	}
	_getch();
	system("CLS");

	printf("Question #3\n");
	printf("%s, What identifier if true or false?\n", name.c_str());
	printf("1\t2\t3\t4\n");
	printf("Int\tBool\tFloat\tString\n");
	cin >> input;
	switch (input)
	{
	case 1:
		printf("Incorrect answer, you were close. removing .25 points.\n"); //if i were you i would remove the score display on the last question, it's not needed
		score = score - wrongAnswer;
		break;
	case 2:
		printf("Yeahhhh! you got it! adding one point.\n");
		++score;
		break;
	case 3:
		printf("not quite correct. removing .25 points.\n");
		score = score - wrongAnswer;
		break;
	case 4:
		printf("Almost there but not quite. removing .25 points.\n");
		score = score - wrongAnswer;
		break;
	default:
		printf("invalid key pressed. not adding and points");
		break;
	}

	printf("%s, ", name.c_str()); printf("Your Test Score!:   %.2f\n", score);
	percentDecimal = score / TotalPoints;
	percentAfter = percentDecimal * 100;
	printf("your percentage: %%%.0f\n", percentAfter);

	_getch();
	return 0;
}
