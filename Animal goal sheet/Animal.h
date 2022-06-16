#pragma once
#include <string>
using namespace std;

class animal {
public:
	animal();
	animal(string name, int speed, int age);
	animal(animal& z);
	void setName(string name);
	void setAge(int age);
	void setSpeed(int speed);
	int getSpeed();
	int getAge();
	string getName();
private:
	string n;
	int s;
	int a;
};