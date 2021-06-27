#include "vector2.h"

#include <cmath>
#include <limits>

Point2 Vector2::getA() const
{
    return a;
}

void Vector2::setA(const Point2 &value)
{
    a = value;
    vectorFromPoint();
}

Point2 Vector2::getB() const
{
    return b;
}

void Vector2::setB(const Point2 &value)
{
    b = value;
    vectorFromPoint();
}

Point2 Vector2::getVect() const
{
    return vect;
}

std::string Vector2::toString()
{
    std::string str;

    str.append("x: " + std::to_string(vect.x) + "\tt: " + std::to_string(vect.y) + "\n");
    str.append("vector length: " + std::to_string(length()));

    return str;
}

void Vector2::vectorFromPoint()
{
    vect.x = b.x - a.x;
    vect.y = b.y - a.y;
}

void Vector2::pointFromVector()
{
    a.x = 0;
    a.y = 0;
    b.x = vect.x;
    b.y = vect.y;
}

bool Vector2::compareDoble(const double a, const double b)
{
    return fabs(a - b) <= std::numeric_limits<double>::epsilon();
}

Vector2::Vector2(){
    std::cout << "Vector2() construct" << std::endl; // todo dbg
    vectorFromPoint();
}

Vector2::Vector2(const Point2 &a, const Point2 &b){
    std::cout << "Vector2(const Point2 &a, const Point2 &b) construct" << std::endl; // todo dbg
    this->a = a;
    this->b = b;
    vectorFromPoint();
}

Vector2::Vector2(const Point2 &vector){
    std::cout << "Vector2(const Point2 &vector) construct" << std::endl; // todo dbg
    this->vect = vector;
    pointFromVector();
}

double Vector2::length() const
{
    return sqrt(vect.x * vect.x + vect.y * vect.y);
}

bool Vector2::operator||(const Vector2 &vector)
{
    double ang = angle(*this, vector);
    if (compareDoble(ang, 0.0) || compareDoble(ang, M_PI)
            || compareDoble(length(), 0.0) || compareDoble(vector.length(), 0.0))
        return true;
    return false;
}

Vector2 Vector2::operator+(const Vector2 &vector)
{
    return Vector2(Point2(vect.x + vector.getVect().x, vect.y + vector.getVect().y));
}

Vector2 &Vector2::operator+=(const Vector2 &vector)
{
    a.x = a.x + vector.getA().x;
    a.y = a.y + vector.getA().y;

    b.x = b.x + vector.getB().x;
    b.y = b.y + vector.getB().y;

    vectorFromPoint();

    return *this;
}

double Vector2::angle(const Vector2 &v1, const Vector2 &v2)
{
    return acos((v1.getVect().x * v2.getVect().x + v1.getVect().y * v2.getVect().y) / (v1.length() * v2.length()));
}
