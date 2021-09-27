#pragma once
#include "Parallelogram.h"
class Rhombus : public Parallelogram
{
public:
	Rhombus(double a, double alpha);
	virtual ~Rhombus() { std::cout << "~Rhombus()" << std::endl; };
};

