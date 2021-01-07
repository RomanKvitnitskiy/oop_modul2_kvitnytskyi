#pragma once
#include "Figure.h"

class Square:public Figure
{
public:
	Square();
	Square(double);

	void Area() override;
	void Perimeter() override;
	void Output() override;

	double getSide();
	void setSide(double);

	double getArea();
	void setArea(double);

	double getPerimeter();
	void setPerimeter(double);

	~Square();
private:
	double side{};
	double area{};
	double perimeter{};
};
