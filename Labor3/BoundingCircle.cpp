#include "BoundingCircle.h"
#include <stdio.h>
#include <math.h>

BoundingCircle::BoundingCircle()
{
	InnerSquare = Rectangle(1.0);
	OuterCircle = Circle(sqrt(2) / 2);
}

BoundingCircle::BoundingCircle(double x)
{
	InnerSquare = Rectangle(x);
	OuterCircle = Circle(x * (sqrt(2) / 2));
}

Rectangle BoundingCircle::getInnerSquare()
{
	return InnerSquare;
}

Circle BoundingCircle::getOuterCircle()
{
	return OuterCircle;
}

double BoundingCircle::getPerimeter()
{
	return InnerSquare.getPerimeter() + OuterCircle.getCircumference();
}

double BoundingCircle::getArea()
{
	return OuterCircle.getArea()- InnerSquare.getArea();
}

void BoundingCircle::print()
{
	printf("InnerSquare a= %lf b= %lf OuterCircle: r= %lf\n", InnerSquare.geta(), InnerSquare.getb(), OuterCircle.getr());
}
