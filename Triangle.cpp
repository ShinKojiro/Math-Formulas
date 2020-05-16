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
	return sideA;
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
	
}

double Triangle::calculateHeight()
{
	//figure out how to put this into programming logic
	//sinA = opposite/hypotenuse --- sinA = h/b
	//h = b * sinA
	return 0;
}

double Triangle::calculateArea()
{
	// Area = 1/2b * c * sinA = 1/2a *b * sinC = 1/2a * c * SinB
	return 0;
}

double Triangle::calculateVolume()
{
	return 0;
}

double Triangle::calculatePerimeter()
{
	return 0;
}