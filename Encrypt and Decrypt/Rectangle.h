#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

class  rectangle{
public:
	rectangle();
	float area();
	float param();
private:
	float W; float L;
};
