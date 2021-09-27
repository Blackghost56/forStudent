#pragma once

#include "Square.h"


class Parallelogram : public Square
{
protected:
	double alpha;		// in radian
public:
	Parallelogram(double a, double b, double alpha);		// alpha in deg
	virtual double square() override;
	virtual ~Parallelogram() { std::cout << "~Parallelogram()" << std::endl; };
};

