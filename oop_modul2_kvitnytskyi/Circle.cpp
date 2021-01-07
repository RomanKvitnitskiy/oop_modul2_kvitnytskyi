#include "Circle.h"

Circle::Circle() {}
Circle::Circle(double radius) : radius(radius) {}

void Circle::Area()
{
	area = PI * pow(radius, 2);

	cout << "Radius = " << radius << "; " << endl
		<< "Area = " << area << "; " << endl;
}
void Circle::Perimeter()
{
	perimeter = 2 * PI * radius;

	cout << "Radius = " << radius << "; " << endl
		<< "Perimeter = " << perimeter << "; " << endl;
}
void Circle::Output()
{
	cout << "Radius = " << radius << "; " << endl;
	cout << "Area of a circle = " << area << endl;
	cout << "Perimeter of a circle = " << perimeter << endl << endl;
}

double Circle::getRadius() { return radius; }
void Circle::setRadius(double radius) { this->radius = radius; }

double Circle::getArea() { return area; }
void Circle::setArea(double area) { this->area = area; }

double Circle::getPerimeter() { return perimeter; }
void Circle::setPerimeter(double perimeter) { this->perimeter = perimeter; }

Circle::~Circle() {}
