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
	
	for (int i = 0; i < 3; i++) {
		
		//int temp = 0;
		vector<int> DotValue{ 0, 0, 0 };
		for (int x = 0; x < 3; x++) {

		
			for (int e = 0; e < 3; e++) {
				//temp += A[i][e] * B[e][x];
				//DotValue.push_back(temp);
				DotValue[x] += A[i][e] * B[e][x];
				
			}
	
			
		}
		C.push_back(DotValue);
	}
	for (int i = 0; i < C.size(); i++) {
		
		for (int c = 0; c < C[i].size(); c++) {
			cout << C[i][c] << '\t';
		}
		printf("\n");
	}
	return 0;
}
