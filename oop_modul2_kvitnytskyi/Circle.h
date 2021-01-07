#pragma once
#include "Figure.h"

class Circle:public Figure 
{
public:
	Circle();
	Circle(double);

	void Area() override;
	void Perimeter() override;
	void Output() override;

	double getRadius();
	void setRadius(double);

	double getArea();
	void setArea(double);

	double getPerimeter();
	void setPerimeter(double);

	~Circle();
private:
	const double PI = 3.141592653589793;

	double radius{};
	double area{};
	double perimeter{};
};
