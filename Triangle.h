#pragma once

#include <cmath>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;

#ifndef TRIANGLE_H
#define TRIANGLE_H



class Triangle
{
private:
	double sideA, sideB, sideC, angleA, angleB, angleC;

public:
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

	void setSideA(double);
	void setSideB(double);
	void setSideC(double);
	void setAngleA(double);
	void setAngleB(double);
	void setAngleC(double);

	double calculateHeight();
	double calculateArea();
	double calculateVolume();
	double calculatePerimeter();
};

#endif // !TRIANGLE_H

