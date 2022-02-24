// file test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Slater Swart


#include <iostream>
#include <string>
#include <bits.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;




int main()
{
	ifstream in;
	ofstream out;
	string temp;
	int input = 0;
	in.open("Original.txt");
	out.open("Encrypt.txt");
	if (!out.is_open()) {
		printf("Encrypt is not open!\n");
	}
	if (!in.is_open()) {
		printf("Oringinal is not open\n");
	}
	printf("enter the number you want to encrypt the message by: ");
	cin >> input;
	while (1) {
		if (input > 94) {
			input = input - 94;
			break;
		}
		else if (input < -94) {
			input = input + 94;
			break;
		}
		else {
			break;
		}

	}
	while (getline(in, temp)) {
		for (int i = 0; i < temp.length(); i++) {
			if (temp[i] == ' ') {
				out << temp[i];
				cout << temp[i];
				continue;
			}
			unsigned char ch = temp[i] + input;
			out << ch;
			cout << ch;
		}
		out << endl;
		cout << endl;
	}
	out.close();
	in.close();

	in.open("Encrypt.txt");
	out.open("Decrypt.txt");
	while (getline(in, temp)) {
		for (int i = 0; i < temp.length(); i++) {
			if (temp[i] == ' ') {
				out << temp[i];
				continue;
			}
			unsigned char ch = temp[i] - input;
			out << ch;
		}
		out << endl;
	}
	return 0;
}