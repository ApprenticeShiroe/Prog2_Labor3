#include "Circle.h"
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

Circle::Circle()
{
	r = 0;
}

Circle::Circle(double x)
{
	r = x;
}

double Circle::getr() const
{
	return r;
}

void Circle::setr(double x)
{
	r = x;
}

double Circle::getArea()
{
	return r*r*M_PI;
}

double Circle::getCircumference()
{
	return 2*r*M_PI;
}

void Circle::print()
{
	printf("Circle's radius: r= %lf\n", r);
}

