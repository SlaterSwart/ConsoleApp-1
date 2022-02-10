// File gs  problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Slater Swart

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{  
    string temp;
    ifstream in;
    ofstream out;

    in.open("Data.txt");
    out.open("finalFile.txt");

    while (getline(in, temp, ','))
    {
        out << temp << "\t";
    }

    
    return 0;
}


