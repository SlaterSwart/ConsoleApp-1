// Fortune cookie vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Slater Swart

#include <iostream>
#include <vector>
#include <time.h>
#include <conio.h>
using namespace std;

int main()
{
	vector<string> fortune;
		fortune.push_back("The fortune you seek is in another cookie.								 \n");
		fortune.push_back("A closed mouth gathers no feet.											 \n");
		fortune.push_back("A conclusion is simply the place where you got tired of thinking.		 \n");
		fortune.push_back("A cynic is only a frustrated optimist.									 \n");
		fortune.push_back("A foolish man listens to his heart.A wise man listens to cookies.		 \n");
		fortune.push_back("You will die aloneand poorly dressed.									 \n");
		fortune.push_back("A fanatic is one who can't change his mind, and won't change the subject. \n");
		fortune.push_back("If you look back, you’ll soon be going that way.							 \n");
		fortune.push_back("You will live long enough to open many fortune cookies.					 \n");
		fortune.push_back("An alien of some sort will be appearing to you shortly.					 \n");
		fortune.push_back("Do not mistake temptation for opportunity.								 \n");
		fortune.push_back("Flattery will go far tonight.											 \n");
		fortune.push_back("He who laughs at himself never runs out of things to laugh at.			 \n");
		fortune.push_back("He who laughs last is laughing at you.									 \n");
		fortune.push_back("He who throws dirt is losing ground.										 \n");
		fortune.push_back("Some men dream of fortunes, others dream of cookies.						 \n");
		fortune.push_back("The greatest danger could be your stupidity.								 \n");
		fortune.push_back("We don’t know the future, but here’s a cookie.							 \n");
		fortune.push_back("The world may be your oyster, but it doesn't mean you'll get its pearl.	 \n");
		fortune.push_back("You will be hungry again in one hour. olin is really cool				 \n");
		while (1 < 2) {
			printf("do you want a fortune? 1 = yes 2 = no \n");
			int input;
			cin >> input;
			if (input == 1) {
				cout << fortune[rand() % fortune.size()];
				continue;
			}
			else if (input == 2) {
				break;
			}
			else {
				printf("invalid input try again");
				continue;
			}
		}
		return 0;
}


