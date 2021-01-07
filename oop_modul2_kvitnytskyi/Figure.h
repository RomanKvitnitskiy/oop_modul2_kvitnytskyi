#pragma once
#include <iostream>
using namespace std;

class Figure
{
public:
	Figure() {}
	
	/*
		abstract area counting method
	*/
	virtual void Area() = 0;

	/*
		abstract perimeter counting method
	*/
	virtual void Perimeter() = 0;

	/*
		abstract counts derivation method
	*/
	virtual void Output() = 0;

	~Figure() {}
};
