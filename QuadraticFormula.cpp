#include "QuadraticFormula.h"

QuadraticFormula::QuadraticFormula()
{
	newQFa = 0;
	newQFb = 0;
	newQFc = 0;
}

QuadraticFormula::QuadraticFormula(double a, double b, double c)
{
	newQFa = a;
	newQFb = b;
	newQFc = c;
}

QuadraticFormula::~QuadraticFormula()
{

}

int QuadraticFormula::getA()
{
	return newQFa;
}

int QuadraticFormula::getB()
{
	return newQFb;
}

int QuadraticFormula::getC()
{
	return newQFc;
}

void QuadraticFormula::setA(double a)
{
	newQFa = a;
}

void QuadraticFormula::setB(double b)
{
	newQFb = b;
}

void QuadraticFormula::setC(double c)
{
	newQFc = c;
}

double QuadraticFormula::calculateQF()
{
	/*-b squared +- sqrt((b squared + 4ac)(/2a)) */
	cout << "Positive is: " << -newQFb + (sqrt((newQFb * newQFb) - (4 * newQFa * newQFc)) / (2 * newQFa));
	cout << "\nNegative is: " << -newQFb - (sqrt((newQFb * newQFb) - (4 * newQFa * newQFc)) / (2 * newQFa));
	return 0;
}