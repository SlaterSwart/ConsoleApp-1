/*	Name:  Slater Swart
	Problem:  (Put the whole problem statement here, or use your own words.)
	Pseudocode:  (State your algorithm in English here.)
		Output message to the screen
		Declare and initialize variables
		Do some math and output results to screen
		Show modulus and output to screen
	Notes:  (Put any notes about your thoughts here)
	Maintenance log:
		Date:		Done:
		(Date here)	(What you did here)
*/
// some comment
#include <conio.h>
#include <stdio.h>
#include <iostream>

int main()
{
	printf("division problems.\n");
	int a = 3;
	int b = 4;
	int d = 20;
	int u = 15;
	int c;

	float x = 3.3;
	float y = 4.4;
	float z;
	float g = 6.9;
	float s = 3.7826;

	bool j = 1;
	bool k = 1;
	bool o;

	printf("int division\n");
	//Int stuff
	c = a / b;
	printf("a / b = %d\n", c);  //int division 

	/*
	c = a + b;
	printf("a + b = %d\n", c); //test for math
	*/
	c = j / k;
	printf("j / k = %d\n", c); //int division 

	c = d / b;
	printf("d / b = %d\n", c); //int division 

	_getch();
	system("CLS");

	printf("Float division\n");
	//float division 
	z = x / y;
	printf("X / Y = %f\n", z);

	z = a / b;
	printf("a / b = %f\n", z);

	z = g / y;
	printf("g / y = %f\n", z);

	_getch();
	system("CLS");

	printf("int multiplication\n");
	//int multiplication
	c = j * b;
	printf("j x b = %d\n", c);

	c = d * k;
	printf("d x k = %d\n", c);

	c = u * d;
	printf("u x d = %d\n", c);

	_getch();
	system("CLS");

	printf("float multiplication\n");
	//float multiplication

	z = x * b;
	printf("x * b = %f\n", z);

	z = g * x;
	printf("g * b = %f\n", z);

	z = g * s;
	printf("g * b = %f\n", z);

	printf("press any bottom to continuesjkasdhg\n");

	_getch();
	return 0;

}

