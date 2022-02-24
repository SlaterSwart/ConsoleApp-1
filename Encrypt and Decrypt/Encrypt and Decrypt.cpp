// Encrypt and Decrypt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
	in.open("Orginal.txt");
	out.open("Encrypt.txt");
	printf("enter the number you want to encrypt the message by: ");
	cin >> input;
	while (1) {
		if (input > 94) {
			input = input - 94;
			break;
		}
		if (input < -94) {
			input = input + 94;
			break;
		}
	}
	while (getline(in, temp)) {
		for (int i = 0; i < temp.length(), i++;) {
			if (temp[i] == ' ') {
				continue;
			}
			unsigned char ch = temp[i] + input;
			out << ch;
		}
	}


}
