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
	int newQFa, newQFb, newQFc;

public:
	QuadraticFormula();
	QuadraticFormula(double, double, double);
	~QuadraticFormula();

	int getA();
	int getB();
	int getC();

	void setA(double);
	void setB(double);
	void setC(double);

	double calculateQF();
};

#endif // !QUADRATICFORMULA_H

