#include "Animal.h"

animal::animal() {
	n = "";
	s = 0;
	a = 0;
}

animal::animal(string name, int speed, int age) {
	n = name;
	s = speed;
	a = age;
}
animal::animal(animal& z) {
	n = z.n;
	s = z.s;
	a = z.a;
}
void animal::getAge(int age) {
	a = age;
}
void animal::

