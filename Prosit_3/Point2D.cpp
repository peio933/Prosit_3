#include "Point2D.h"

void Point2D::Point()
{
	this -> x = 0;
	this -> y = 0;
}

void Point2D::Point(float v1, float v2)
{
	this -> x = v1;
	this -> y = v2;

}


void Point2D::setX(float v1)
{
	cout << "Donner la valeur de x :";
	cin >> v1;

	this -> x = v1;

}

void Point2D::setY(float v2)
{
	cout << "Donner la valeur de y :";
	cin >> v2;

	this -> y = v2;
}

float Point2D::getX()
{
	return this -> x;
}

float Point2D::getY()
{
	return this -> y;
}

