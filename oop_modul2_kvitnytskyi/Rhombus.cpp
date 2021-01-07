#include "Rhombus.h"

Rhombus::Rhombus() {}
Rhombus::Rhombus(double side, double height) : side(side), height(height) {}

void Rhombus::Area()
{
	area = side * height;

	cout << "Side = " << side << "; " << "Height = " << height << "; " << endl
		<< "Area = " << area << "; " << endl;
}
void Rhombus::Perimeter()
{
	perimeter = side * 4;

	cout << "Side = " << side << "; " << endl
		<< "Perimeter = " << perimeter << "; " << endl;
}
void Rhombus::Output()
{
	cout << "Side = " << side << "; " << endl;
	cout << "Height = " << height << "; " << endl;
	cout << "Area of a rhombus = " << area << endl;
	cout << "Perimeter of a rhombus = " << perimeter << endl;
}

double Rhombus::getSide() { return side; }
void Rhombus::setSide(double side) { this->side = side; }

double Rhombus::getHeight() { return height; }
void Rhombus::setHeight(double height) { this->height = height; }

double Rhombus::getArea() { return area; }
void Rhombus::setArea(double area) { this->area = area; }

double Rhombus::getPerimeter() { return perimeter; }
void Rhombus::setPerimeter(double perimeter) { this->perimeter = perimeter; }

Rhombus::~Rhombus() {}
