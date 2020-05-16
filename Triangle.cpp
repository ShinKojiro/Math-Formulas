#include "Triangle.h"

Triangle::Triangle()
{
	sideA = 0;
	sideB = 0;
	sideC = 0;
	angleA = 0;
	angleB = 0;
	angleC = 0;
}

Triangle::Triangle(double sA, double sB, double sC, double aA, double aB, double aC)
{
	sideA = sA;
	sideB = sB;
	sideC = sC;
	angleA = aA;
	angleB = aB;
	angleC = aC;
}

Triangle::~Triangle()
{

}

double Triangle::getSideA()
{
	if (sideA == 0)
	{
		cout << "unknown";
		return 0;
	}
	else
	{
		return sideA;
	}
	
}

double Triangle::getSideB()
{
	return sideB;
}

double Triangle::getSideC()
{
	return sideC;
}

double Triangle::getAngleA()
{
	return angleA;
}

double Triangle::getAngleB()
{
	return angleB;
}

double Triangle::getAngleC()
{
	return angleC;
}

void Triangle::setSideA(double sA)
{
	sideA = sA;
}

void Triangle::setSideB(double sB)
{
	sideB = sB;
}

void Triangle::setSideC(double sC)
{
	sideC = sC;
}

void Triangle::setAngleA(double aA)
{
	angleA = aA;
}

void Triangle::setAngleB(double aB)
{
	angleB = aB;
}

void Triangle::setAngleC(double aC)
{
	angleC = aC;
}

void Triangle::triangleInput()
{
	double sideA, sideB, sideC, angleA, angleB, angleC;

	cout << "Enter the sides of the triangle: a, b ,c. 0 for unknown side: ";
	cin >> sideA >> sideB >> sideC;

	cout << endl << "Enter the angles of the triangle: A, B, C. 0 for unknown angle: ";
	cin >> angleA >> angleB >> angleC;

	Triangle newTriangle(sideA, sideB, sideC, angleA, angleB, angleC);

	cout << endl << "The triangles specifications are: " << endl;
	cout << "side a = " << newTriangle.getSideA() << endl;
	cout << "side b = " << newTriangle.getSideB() << endl;
	cout << "side c = " << newTriangle.getSideC() << endl;
	cout << "angle A = " << newTriangle.getAngleA() << endl;
	cout << "angle B = " << newTriangle.getAngleB() << endl;
	cout << "angle C = " << newTriangle.getAngleC() << endl;

}

void Triangle::calculateHeight()
{
	//figure out how to put this into programming logic
	//sinA = opposite/hypotenuse --- sinA = h/b
	//h = b * sinA
	double height;

	height = getSideB() * sin(getAngleA());
	cout << "The hight of this triangle is " << height << endl;
}

void Triangle::calculateArea()
{
	// Area = 1/2b * c * sinA = 1/2a *b * sinC = 1/2a * c * SinB
	
}

void Triangle::calculateVolume()
{
	
}

void Triangle::calculatePerimeter()
{
	
}