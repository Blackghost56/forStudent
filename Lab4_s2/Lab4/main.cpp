#include <iostream>

#include "vector2.h"
#include <cmath>


int main()
{
    Vector2 vector1;

    vector1.setA(Point2(0, 0));
    vector1.setB(Point2(3, 3));
    std::cout << "vector 1"<< std::endl << vector1.toString() << std::endl;

    std::cout << "------------------" << std::endl;

    //    Vector2 vector2(Point2(4, 4), Point2(0, 0));
    Vector2 vector2(Point2(0, 0), Point2(0, 0));
    std::cout << "vector 2" << std::endl << vector2.toString() << std::endl;

    std::cout << "------------------" << std::endl;

    std::cout << "angle rad: " << Vector2::angle(vector1, vector2)
              << "\tdeg: " << Vector2::angle(vector1, vector2) * 180.0 / M_PI << std::endl;

    std::cout << "------------------" << std::endl;

    std::cout << "colen: " << ((vector1 || vector2) ? "yes" : "no") << std::endl;

    std::cout << "------------------" << std::endl;

    std::cout << "sum: " << (vector1 + vector2).toString() << std::endl;

    std::cout << "------------------" << std::endl;

    std::cout << "sum extended: " << (vector1 += vector2).toString() << std::endl;

    std::cout << "------------------" << std::endl;

    return 0;
}
