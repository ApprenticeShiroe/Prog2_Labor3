#include "Rectangle.h"
#include <stdio.h>


Rectangle::Rectangle()
{
	a = 0.0;
	b = 0.0;
}

Rectangle::Rectangle(double x)
{
	a = x;
	b = x;
}

Rectangle::Rectangle(double x, double y)
{
	a = x;
	b = y;
}

double Rectangle::geta() const
{
	return a;
}

double Rectangle::getb() const
{
	return b;
}

void Rectangle::seta(double x)
{
	this->a = x;
}

void Rectangle::setb(double y)
{
	this->b = y;
}

double Rectangle::getPerimeter()
{
	return (2*this->a)+(2*this->b);
}

double Rectangle::getArea()
{
	return (this->a)*(this->b);
}

void Rectangle::print()
{
	printf("Rectangle sides: a= %lf , b= %lf\n", a, b);
}
