

#include <iostream>
using namespace std;
#include <conio.h>
#include <string>
#include <stdio.h>
#include <math.h>

int rootReducer(int num1)
{
	int factor = 1;
	for (int i = 1; 1 <= num1; i++) {
		if (num1 % (i * i) == 0) {
			factor = i;
		}
	}
	return factor;
}

int main()
{
	int num1;
	int factor;
	printf("Enter the number that you want to get the root of.\n");
	cin >> num1;
	factor = rootReducer(num1);
	num1 = num1 / factor;
	num1 = num1 / factor;
	cout << "here is your root(s) :)" << factor << " " << num1 << endl;
	return 0;

}

