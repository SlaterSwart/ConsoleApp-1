// Vector Multi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;



int main()
{
	srand(0);
	srand((unsigned)time(NULL));
	vector<int> num;
	for (int i = 0; i < 50; i++) {
		num.push_back(rand() % 100);
	}
	int Scalar;
	printf("Enter the numer you want to multiply 50 random numbers by...\n");
	cin >> Scalar;
	for (int a = 0; a < num.size(); a++) {
		num[a] * Scalar;
		cout << num[a] << endl;
	}
	return 0;
}

