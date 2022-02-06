// File gs  problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{  
    size_t pos;
    string temp;
    ifstream in;
    string find = ","; string replace = "\t";
    int spaces = 0;
    int newline = 0;
    int tabs = 0;
    int numbers = 0;
    in.open("Data.txt");
    while(getline(in, temp, ',')){}
        
    while ((pos = temp.find(find)) != string::npos) {
            temp.replace(pos, 1, replace);
        }
    ofstream out;
    out.open("finalFile.txt");
    cout << temp;
    out << temp;
    out.close();
    return 0;
}


