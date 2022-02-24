// File gs  problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Slater Swart

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{  
    size_t pos;
    string temp;
    ifstream in;
    ofstream out;
    in.open("Data.txt");
    out.open("finalFile.txt");
    int i = 0;
    while (getline(in, temp, ','))
    {
        i++;
        if (temp[i] == ',') {
            temp[i] = '\t';
        }
        out << temp;
    }
 return 0;
}


