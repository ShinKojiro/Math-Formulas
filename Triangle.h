#pragma once

#include <cmath>
#include <math.h>
#include <iostream>
#include <string>

#define PI 3.14159265

using namespace std;

#ifndef TRIANGLE_H
#define TRIANGLE_H



class Triangle
{
private:
	double sideA, sideB, sideC, angleA, angleB, angleC, height, area, volume, perimeter;

public:

	/*double nSideA, nSideB, nSideC, nAngleA, nAngleB, nAngleC;*/

	Triangle();
	Triangle(double, double, double, double, double, double);
	// Side A, Side B, Side C, Angle A, Angle B, Angle C. 0 = unknown angle or side.
	~Triangle();

	double getSideA();
	double getSideB();
	double getSideC();
	double getAngleA();
	double getAngleB();
	double getAngleC();
	double getHeight();
	double getArea();
	double getPerimeter();

	void setSideA(double);
	void setSideB(double);
	void setSideC(double);
	void setAngleA(double);
	void setAngleB(double);
	void setAngleC(double);
	void setHeight(double);
	void setArea(double);
	void setPerimeter(double);

	void triangleInput();
	void calculateHeight();
	void calculateArea();
	void calculatePerimeter();
};

#endif // !TRIANGLE_H

