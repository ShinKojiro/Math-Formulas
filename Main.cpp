#include <iostream>
#include <math.h>
#include <cmath>
#include "QuadraticFormula.h"
#include "Triangle.h"

using namespace std;

int main()
{
	//branch selection to choose formula to calculate



	

	// basic addition
	// basic subtraction
	// basic multiplication
	// basic division
	// Quadratic Formula (a cannot be 0)

	/*double QFa, QFb, QFc;
	cout << "Quadratic Formula\nEnter A, B and C: ";
	cin >> QFa >> QFb >> QFc;

	QuadraticFormula formula1(QFa, QFb, QFc);

	cout << formula1.calculateQF();*/


	/*-b squared +- sqrt((b squared + 4ac)(/2a)) */
	// Areas
		//Triangle

	Triangle newTriangle;

	newTriangle.triangleInput();

	newTriangle.calculateHeight();
	newTriangle.calculateArea();
	newTriangle.calculateVolume();
	newTriangle.calculatePerimeter();

	// Volumes
	// more soon

}