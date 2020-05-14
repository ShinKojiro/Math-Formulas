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
	double side1, side2, side3;

public:
	Triangle();
	Triangle(double, double, double);
	~Triangle();

	double getSide1();
	double getSide2();
	double getSide3();

	void setSide1();
	void setSide2();
	void setSide3();

	double calculateArea();
	double calculateVolume();
};

#endif // !TRIANGLE_H

