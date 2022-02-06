// Encrypt and Decrypt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

void DataDecrypt(string EcptData, fstream in) {
	int num = 0;
	in.open("Encrypt.txt");
	for (int i = 0; i < EcptData.length(); i++) {

		num = num * 10 + (EcptData[i] - '0');
		if (num >= 32 && <= 122) {
			char output = (char)num;
			cout << output;
			num = 0;
		}
	}
	in.close();
}
void DataEncrypt(){}


int main()
{
	string EcptData = 0; // Should be the function for encrypting the letters
	fstream in;
	string temp;





}
