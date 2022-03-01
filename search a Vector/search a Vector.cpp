// search a Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <vector>
using namespace std;


int main()
{
	struct Info {
		string name;
		int age;
		int Height;
		int Weight;
		string phone;
	};
	ifstream in;
	in.open("data.txt");
	string temp;
	vector <Info> ppls;
	Info search;


	while (getline(in, temp, '|')) {

	}

}

