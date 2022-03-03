#pragma once
class Rectangle
{
private:
	double a;
	double b;
public:
	Rectangle();
	Rectangle(double x);
	Rectangle(double x, double y);
	double geta() const;
	double getb() const;
	void seta(double x);
	void setb(double y);
	double getPerimeter();
	double getArea();
	void print();

};

