#pragma once

#include <iostream>  // dbg


class Square
{
protected:
	double a;
	double b;
public:
	Square(double a, double b) : a(a), b(b){ std::cout << "Square()" << std::endl; }
	virtual double square();
	virtual ~Square() { std::cout << "~Square()" << std::endl; };
	// ������ ���, ����������� ���������� ����� ��� ���� ��� ��
	// ��������� ����� ������� ����������� ���� ������� ����� ������� ���������
};

