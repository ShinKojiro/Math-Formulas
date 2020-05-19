#include "Triangle.h"

Triangle::Triangle()
{
	sideA = 0;
	sideB = 0;
	sideC = 0;
	angleA = 0;
	angleB = 0;
	angleC = 0;
	height = 0;
	area = 0;
	volume = 0;
	perimeter = 0;
}

Triangle::Triangle(double sA, double sB, double sC, double aA, double aB, double aC)
{
	sideA = sA;
	sideB = sB;
	sideC = sC;
	angleA = aA;
	angleB = aB;
	angleC = aC;
	height = 0;
	area = 0;
	volume = 0;
	perimeter = 0;
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

double Triangle::getHeight()
{
	return height;
}

double Triangle::getArea()
{
	return area;
}

double Triangle::getVolume()
{
	return volume;
}

double Triangle::getPerimeter()
{
	return perimeter;
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

void Triangle::setHeight(double h)
{
	height = h;
}

void Triangle::setArea(double a)
{
	area = a;
}

void Triangle::setVolume(double v)
{
	volume = v;
}

void Triangle::setPerimeter(double p)
{
	perimeter = p;
}

void Triangle::triangleInput()
{
	cout << "Enter the sides of the triangle: a, b ,c. 0 for unknown side: ";
	cin >> sideA >> sideB >> sideC;
	setSideA(sideA);
	setSideB(sideB);
	setSideC(sideC);

	cout << endl << "Enter the angles of the triangle: A, B, C. 0 for unknown angle: ";
	cin >> angleA >> angleB >> angleC;
	setAngleA(angleA);
	setAngleB(angleB);
	setAngleC(angleC);

	cout << endl << "The triangles specifications are: " << endl;
	cout << "side a = " << getSideA() << endl;
	cout << "side b = " << getSideB() << endl;
	cout << "side c = " << getSideC() << endl;
	cout << "angle A = " << getAngleA() << endl;
	cout << "angle B = " << getAngleB() << endl;
	cout << "angle C = " << getAngleC() << endl;
}

//void Triangle::calculateHeight(double sA, double sB, double sC, double aA, double aB, double aC)
void Triangle::calculateHeight()
{
	//figure out how to put this into programming logic
	//sinA = opposite/hypotenuse --- sinA = h/b
	//h = b * sinA

	setHeight(getSideB() * sin(getAngleA()));
	cout << "The hight of this triangle is " << getHeight() << endl;
}

void Triangle::calculateArea()
{
	// Area = 1/2b * c * sinA = 1/2a *b * sinC = 1/2a * c * SinB
	setArea((0.5 * getSideB() * getSideC() * sin(getAngleA())));
	cout << "The area of this triangle is " << getArea() << endl;
	
}

void Triangle::calculatePerimeter()
{
	setPerimeter(getSideA() + getSideB() + getSideC());
	cout << "The perimeter of this triangle is " << getPerimeter() << endl;
}