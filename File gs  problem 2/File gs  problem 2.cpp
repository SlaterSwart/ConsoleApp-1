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
    string temp2;
    char ch;
    int i;
    float f;
    ifstream in;
    ofstream out;
    in.open("Data.txt");
    out.open("finalFile.txt");
    i = 0;
    while (getline(in, temp, ','))
    {
        i = stoi(temp);
        getline(in, temp, ',');
        f = stof(temp);
        getline(in, temp, ',');
        temp2 = temp;
        getline(in, temp, ',');
        ch = temp.at(0);
       
        out << i << '\t' << f << '\t' << temp2 << ch << '\t' << '\n';
    }
    out.close();
    in.close();
    
    return 0;
}


