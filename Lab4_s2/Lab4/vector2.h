#ifndef VECTOR2_H
#define VECTOR2_H

#include <iostream> // todo dbg
#include <string>

struct Point2
{
    Point2(){}
    Point2(double x, double y){
        this->x = x;
        this->y = y;
    }
    double x = 0.0;
    double y = 0.0;
};

class Vector2
{
private:
    Point2 a;                       // vector starting point
    Point2 b;                       // vector ending point
    Point2 vect;                    // vector

    void vectorFromPoint();         // Determining the coordinates of the vector (Transfer to origin)
    void pointFromVector();
    bool compareDoble(const double a, const double b);
public:
    Vector2();                      // zero vector
    Vector2(const Point2 &a, const Point2 &b);
    Vector2(const Point2 &vector);
    // todo dbg
    ~Vector2(){std::cout << "~Vector2() destruct" << std::endl;};


    double length() const;                      // Vector module
    bool operator||(const Vector2 &vector);     // Collinear vectors
    Vector2 operator+(const Vector2 &vector);   // !!! Create new vector
    Vector2 &operator+=(const Vector2 &vector); // !!! Modificate current vector

    static double angle(const Vector2 &v1, const Vector2 &v2);  // rad

    Point2 getA() const;
    void setA(const Point2 &value);
    Point2 getB() const;
    void setB(const Point2 &value);
    Point2 getVect() const;

    std::string toString();
};

#endif // VECTOR2_H
