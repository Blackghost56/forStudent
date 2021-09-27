#include <iostream>
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

int main()
{
    std::cout.precision(3);

    Square *figurePointer = new Square(1, 2);
    std::cout << "Square: " << figurePointer->square() << std::endl;
    delete figurePointer;
    std::cout << std::endl;

    figurePointer = new Parallelogram(1, 2, 45);
    std::cout << "Parallelogram: " << figurePointer->square() << std::endl;
    delete figurePointer;
    std::cout << std::endl;

    figurePointer = new Rhombus(1, 45);
    std::cout << "Rhombus: " << figurePointer->square() << std::endl;
    delete figurePointer;

}
