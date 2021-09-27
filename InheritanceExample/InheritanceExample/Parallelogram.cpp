#include "Parallelogram.h"
#include <cmath>
#define _USE_MATH_DEFINES
Parallelogram::Parallelogram(double a, double b, double alpha) : Square(a, b), alpha(alpha *  3.14159 / 180.0 )
{
	std::cout << "Parallelogram()" << std::endl;
}

double Parallelogram::square()
{
	return a * b * sin(alpha);
}
