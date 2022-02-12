#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
public:
	// Constructors
	Circle()
	{
		radius = 10;
	}

	Circle(double r) //overloaded constructor -- Takes in arguments
	{
		radius = r;
	}

	// Behaviors (functions)
public:
	void setRadius(double);
	double getRadius()
	{
		return radius;
	}
	double calcArea() 
	{ 
		//Area of a circle is Pi*r^2
		return 3.14 * pow(radius, 2);
	}
	// Properties (variables)
private:
	double radius;
};

void Circle::setRadius(double r)
{
	if (r > 0)
	{
		radius = r;
	}
	else
	{
		cout << "Enter a positive number!";
	}
}

//int main()
//{
//	Circle circle1, circle2(2.5);
//
//	circle1.setRadius(1);
//	circle2.setRadius(2.5);
//
//	// print out the area
//	cout << "The area of circle 1 is " << circle1.calcArea() << endl;
//	cout << "The area of circle 2 is " << circle2.calcArea() << endl;
//
//	return 0;
//} 