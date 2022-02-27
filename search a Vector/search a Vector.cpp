// search a Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
//if ur looking at this you should make all your programs time complex smh imao
using namespace std;

struct info {
    string name;
    int age;
    int height;
    int weight;
    string phoneNumber;
};

int main() {
    
    vector <info> ppls;

    ifstream in;
    in.open("Data.txt");

    string temp;

    if (!in.is_open()) {
        cout << "File not found\n";
    }

    info person;//temporary instance of the struct

    while (getline(in, temp, '|')) {

    }
    for (int i = 0; i < ppls.size(); i++) {
        cout << ppls[i].name << " " << ppls[i].age << " " << ppls[i].height << " " << ppls[i].weight << " " << ppls[i].phoneNumber << endl;
    }
    return 0;
}