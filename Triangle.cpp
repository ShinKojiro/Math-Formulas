#include "Triangle.h"

Triangle::Triangle()
{
	side1 = 0;
	side2 = 0;
	side3 = 0;
}

Triangle::Triangle(double s1, double s2, double s3)
{
	side1 = s1;
	side2 = s2;
	side3 = s3;
}

Triangle::~Triangle()
{

}

double Triangle::getSide1()
{
	return side1;
}

double Triangle::getSide2()
{
	return side2;
}

double Triangle::getSide3()
{
	return side3;
}

void Triangle::setSide1(double s1)
{
	side1 = s1;
}

void Triangle::setSide2(double s2)
{
	side2 = s2;
}

void Triangle::setSide3(double s3)
{
	side3 = s3;
}