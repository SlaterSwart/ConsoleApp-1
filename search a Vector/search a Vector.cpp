// search a Vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <conio.h>
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
    string input;
    vector <info> people(6);

    ifstream in;
    in.open("Data.txt");

    string temp;

    if (!in.is_open()) {
        cout << "File not found\n";
    }

    info person;//temporary instance of the struct

    while (getline(in, person.name, ',')) {

        getline(in, temp, ',');
        person.age = stoi(temp);
        getline(in, temp, ',');
        person.height = stoi(temp);
        getline(in, temp, ',');
        person.weight = stoi(temp);
        getline(in, person.phoneNumber);
        people.push_back(person);
    }
    in.close();


    while (true) {
        cout << "What would you like to search for?\n Age|A|\n Name|N|\n Height|H|\n Weight|W|\n PhoneNumber|#|\n" << endl;
        cin >> input;
        switch (input) {
        case "N":
            cout << "Name search: ";
            cin >> input;
            for (int pos = 0; pos < 6; pos++) {
                if (people[pos].age != input) {
                    cout << "nothing matches your search... searching again.\n";
                }
                if (people[pos].age == input) {
                    cout << "Name: " << people[pos].name << "\n";
                    cout << "Age: " << people[pos].age << "\n";
                    cout << "Height: " << people[pos].height << "\n";
                    cout << "Weight: " << people[pos].weight << "\n";
                    cout << "Phone number: " << people[pos].phoneNumber << "\n" << "\n";
                    _getch();
                    system("CLS");
                }
            }
        }
    }


    return 0;
}