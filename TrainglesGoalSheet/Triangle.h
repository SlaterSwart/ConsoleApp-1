#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

class triangle {
public:
	triangle();
	triangle(float leng, float widt);
	triangle(triangle& E);
	void setSides(float leng, float widt);
	float getLength();
	float getWidth();
	float Perimeter();
	float area();
private:
	float L, W;
};