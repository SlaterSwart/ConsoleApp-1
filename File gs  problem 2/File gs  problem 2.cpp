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
    string temp2;
    char ch;
    int i;
    float f;
    ifstream in;
    ofstream out;

    in.open("Data.txt");
    out.open("finalFile.txt");

    while (getline(in, temp, ','))
    {
        i = stoi(temp);
        f = stof(temp);
        getline(in, temp2, ',');

        ch = temp2.at(0);
        getline(in, temp2);

       
        out << temp << '\t' << ch << '\t' << i << '\n';
    }
    out.close();
    in.close();
    
    return 0;
}


