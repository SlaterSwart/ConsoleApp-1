// elipseGSProblem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;
#include "ellipse.h"

int main()
{
	ellipse E;
	E.setRadii(3.6, 7.8);
	printf("circumference: %f\nArea: %f\nRadii: %f %f", E.circumference(), E.area(), E.getRadius1(), E.getRadius2());
	return 0;
}

