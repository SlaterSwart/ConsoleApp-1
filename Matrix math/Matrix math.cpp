// Matrix math.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <time.h>
#include <conio.h>
using namespace std;

int main()
{
	vector<vector<int>> A
	{
		{39, 47, 33},
		{20, 26, 57},
		{10, 11, 85}
	};
	vector<vector<int>> B
	{
		{42, 36, 13},
		{95, 49, 79},
		{66, 86, 26}
	};
	vector<vector<int>> C;
	vector<int> DotValue;
	DotValue.push_back(A[0][0] * B[0][0]);//because you a mulitpling the first row of A and the first colum of B it goes in the first row first colom, if i were to to first row of A ans second row of B it would go in first row second colum. and same goes for the opposite 

}

