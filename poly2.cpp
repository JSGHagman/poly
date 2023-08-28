#include "poly2.h"
#include <cmath>
#include <iostream>

Poly2::Poly2(float a, float b, float c){
	this->a = a;
	this->b = b;
	this->c = c;
}

float Poly2::eval(float x){
    return a * x * x + b * x + c;
}

void Poly2::findRoots(int &numRoots, float &root1, float &root2){
    float discriminant = b * b - 4 * a * c;

	if (discriminant < 0) {
		numRoots = 0;
	}
	else if (discriminant == 0){
		root1 = -b / (2 * a);
		numRoots = 1;
	}
	else {
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		numRoots = 2;
	}

}