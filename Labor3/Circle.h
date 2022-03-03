#pragma once
class Circle
{
private:
	double r;
public:
	Circle();
	Circle(double x);
	double getr() const;
	void setr(double x);
	double getArea();
	double getCircumference();
	void print();
};

