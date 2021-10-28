
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int input;
	string yesno;
	int thousands;
	int hundreds;
	int tens;
	int ones;
	int final1000;
	int final100;
	int final10;
	int final1;
	string str_th;
	string str_hu;
	string str_tens;
	string str_ones;


	printf("Enter the number you want to process to roman numerals\n");
	cin >> input;
	printf("%d\n", input);
	_getch();
	system("CLS");

	thousands = (input / 1000) % 10;
	hundreds = (input / 100) % 10;
	tens = (input / 10) % 10;
	ones = (input / 1 /*not relly needed*/) % 10;

	printf("%d\n", thousands);

	//might get rid of this later, not sure if it's needed
	final1000 = thousands * 1000;
	final100 = hundreds * 100;
	final10 = tens * 10;
	final1 = ones * 1;//not needed but just to be safe

	if (final1000 == 3)
	{
		str_th = "MMM";
	}
	else if (final1000 == 2)
	{
		str_th == "MM";
	}
	else if (final1000 == 1)
	{
		str_th == "M";
	}

	switch (final100)
	{
	case 1:
		str_hu = "C";
		break;
	case 2:
		str_hu = "CC";
		break;
	case 3:
		str_hu = "CCC";
		break;
	case 4:
		str_hu = "CD";
		break;
	case 5:
		str_hu = "D";
		break;
	case 6:
		str_hu = "DC";
		break;
	case 7:
		str_hu = "DCC";
		break;
	case 8:
		str_hu = "DCCC";
		break;
	case 9:
		str_hu = "CM";
		break;

	}

	switch (final10)
	{
	case 1:
		str_tens == "X";
		break
	case 2:
		str_tens == "XX";
	case 3:
		str_tens == "XXX";
	case 4:
		str_tens == "XL";
	case 5:
		str_tens == "L";
	case 6:
		str_tens == "LX";
	case 7:
		str_tens == "LXX";
	case 8:
		str_tens == "XXC";
	case 9:
		str_tens == "XC"
	 }
	printf("Olin is really cool.\n"); // -Olin 
	return 0;
}

