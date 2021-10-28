
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

	while (1 < 2)
	{


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
			break;
		case 2:
			str_tens == "XX";
			break;
		case 3:
			str_tens == "XXX";
			break;
		case 4:
			str_tens == "XL";
			break;
		case 5:
			str_tens == "L";
			break;
		case 6:
			str_tens == "LX";
			break;
		case 7:
			str_tens == "LXX";
			break;
		case 8:
			str_tens == "XXC";
			break;
		case 9:
			str_tens == "XC";
			break;
		}

		switch (final1)
		{
		case 1:
			str_ones == "I";

		case 2:
			str_ones == "II";
			break;
		case 3:
			str_ones == "III";
			break;
		case 4:
			str_ones == "IV";
			break;
		case 5:
			str_ones == "V";
			break;
		case 6:
			str_ones == "VI";
			break;
		case 7:
			str_ones == "VII";
			break;
		case 8:
			str_ones == "IIX";
			break;
		case 9:
			str_ones == "IX";
			break;
		}

		printf("your number: %s %s %s %s\n", str_th.c_str(), str_hu.c_str(), str_tens.c_str(), str_ones.c_str());
		printf("press one to restart Press 2 to end\n");
		cin >> input;
		if (input == 1)
		{
			continue;
		}
		else if (input == 2)
		{
			break;
		}
	}
	printf("Olin is really cool.\n"); // -Olin 
	return 0;
}

