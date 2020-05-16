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
	double sideA, sideB, sideC, angleA, angleB, angleC;

	cout << "Enter the sides of the triangle: a, b ,c. 0 for unknown side: ";
	cin >> sideA >> sideB >> sideC;

	cout << endl <<  "Enter the angles of the triangle: A, B, C. 0 for unknown angle: ";
	cin >> angleA >> angleB >> angleC;

	Triangle newTriangle(sideA, sideB, sideC, angleA, angleB, angleC);

	cout << endl << "The triangles specifications are: " << endl;
	cout << "side a = " << newTriangle.getSideA() << endl;
	cout << "side b = " << newTriangle.getSideB() << endl;
	cout << "side c = " << newTriangle.getSideC() << endl;
	cout << "angle A = " << newTriangle.getAngleA() << endl;
	cout << "angle B = " << newTriangle.getAngleB() << endl;
	cout << "angle C = " << newTriangle.getAngleC() << endl;


	newTriangle.calculateHeight();
	newTriangle.calculateArea();
	newTriangle.calculateVolume();
	newTriangle.calculatePerimeter();

	// Volumes
	// more soon

}