#include "Square.h"

Square::Square() {}
Square::Square(double side) : side(side) {}

void Square::Area()
{
	area = pow(side, 2);

	cout << "Side = " << side << "; " << endl
		<< "Area = " << area << "; " << endl;
}
void Square::Perimeter()
{
	perimeter = side * 4;

	cout << "Side = " << side << "; " << endl
		<< "Perimeter = " << perimeter << "; " << endl;
}
void Square::Output()
{
	cout << "Side = " << side << "; " << endl;
	cout << "Area of a square = " << area << endl;
	cout << "Perimeter of a square = " << perimeter << endl;
}

double Square::getSide() { return side; }
void Square::setSide(double side) { this->side = side; }

double Square::getArea() { return area; }
void Square::setArea(double area) { this->area = area; }

double Square::getPerimeter() { return perimeter; }
void Square::setPerimeter(double perimeter) { this->perimeter = perimeter; }

Square::~Square() {}
