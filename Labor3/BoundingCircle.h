#pragma once
#include "Rectangle.h"
#include "Circle.h"

class BoundingCircle
{
private:
	Rectangle InnerSquare;
	Circle OuterCircle;
public:
	BoundingCircle();
	BoundingCircle(double x);
	Rectangle getInnerSquare();
	Circle getOuterCircle();
	double getPerimeter();
	double getArea();
	void print();
};

