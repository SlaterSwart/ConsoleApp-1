#include "Triangle.h"

triangle::triangle() {
	L = 0;
	W = 0;
}
triangle::triangle(float leng, float widt) {
	L = leng;
	W = widt;
}
triangle::triangle(triangle& E) {
	L = E.L;
	W = E.W;
}
void triangle::setSides(float leng, float widt) {
	L = leng;
	W = widt;
}
float triangle::getLength() {
	return L;
}
float triangle::getWidth() {
	return W;
}
float triangle::Perimeter() {
	return sqrt((L * L + W * W)) + L + W;
}
float triangle::area() {
	return (1 / 2.0 * W) * L;
}




