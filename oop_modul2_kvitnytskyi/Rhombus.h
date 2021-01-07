#pragma once
#include "Figure.h"

class Rhombus:public Figure
{
public:
	Rhombus();
	Rhombus(double, double);

	void Area() override;
	void Perimeter() override;
	void Output() override;

	double getSide();
	void setSide(double);

	double getHeight();
	void setHeight(double);

	double getArea();
	void setArea(double);

	double getPerimeter();
	void setPerimeter(double);

	~Rhombus();
private:
	double side{};
	double height{};
	double area{};
	double perimeter{};
};

