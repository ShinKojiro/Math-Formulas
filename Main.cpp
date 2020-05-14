#include <iostream>
#include <math.h>
#include <cmath>
#include "QuadraticFormula.h"
#include "Triangle.h"

using namespace std;

int main()
{
	double QFa, QFb, QFc;

	// basic addition
	// basic subtraction
	// basic multiplication
	// basic division
	// Quadratic Formula (a cannot be 0)
	cout << "Quadratic Formula\nEnter A, B and C: ";
	cin >> QFa >> QFb >> QFc;

	QuadraticFormula formula1(QFa, QFb, QFc);

	cout << formula1.calculateQF();


	/*-b squared +- sqrt((b squared + 4ac)(/2a)) */
	// Areas
	// Volumes
	// more soon

}