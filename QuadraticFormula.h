#pragma once

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#ifndef QUADRATICFORMULA_H
#define QUADRATICFORMULA_H

class QuadraticFormula
{
private:
	double newQFa, newQFb, newQFc;

public:
	QuadraticFormula();
	QuadraticFormula(double, double, double);
	~QuadraticFormula();

	double getA();
	double getB();
	double getC();

	void setA(double);
	void setB(double);
	void setC(double);

	double calculateQF();
};

#endif // !QUADRATICFORMULA_H

