// TrainglesGoalSheet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Slater Swart

#include <iostream>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;
#include "triangle.h"

int main()
{
	triangle E;
	E.setSides(3, 4);
	printf("perimeter: %f\n Area: %f\nLength and width: %f %f", E.Perimeter(), E.area(), E.getLength(), E.getWidth());
	return 0;
}
