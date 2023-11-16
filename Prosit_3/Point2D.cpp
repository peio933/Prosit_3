#include "Point2D.h"

void Point2D::Point()
{
	this -> x = 0;
	this -> y = 0;
}

void Point2D::Point(float x1, float y1)
{
	this -> x = x1;
	this -> y = y1;

}


void Point2D::setX(float x1)
{
	cout << "Donner la valeur de x :";
	cin >> x1;

	this -> x = x1;

}

void Point2D::setY(float y1)
{
	cout << "Donner la valeur de y :";
	cin >> y1;

	this -> y = y1;
}

float Point2D::getX()
{
	return this -> x;
}

float Point2D::getY()
{
	return this -> y;
}

