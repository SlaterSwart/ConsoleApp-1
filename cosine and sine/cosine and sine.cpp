// cosine and sine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Slater Swart
#define _USE_MATH_DEFINES;
#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	vector<float> cosf;
	vector<float> sinf;

	for (float i = 0; i < 360; i++){
		cosf.push_back(cos((i + 1) * M_PI / 180.0));
	}

	for (float i = 0; i < 360; i++) {
		sinf.push_back(sin((i + 1) * M_PI / 180.0));
	}
	while(true)
	{
		int playerInput;
		int num;
		printf("Cosine (1) | Sine (2) | Quit (3) |\n");
		cin >> playerInput;
		if (playerInput == 1) {
			printf("Enter your degrees\n");
			cin >> num;
			cout << cosf.at(num + 1) << endl;
		}
		if (playerInput == 2) {
			printf("Enter your degrees\n");
			cin >> num;
			cout << sinf.at(num + 1) << endl;
		}
		if (playerInput == 3) {
			break;
		}
	}
	return 0;
}


