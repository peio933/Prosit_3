#include "Point3D.h"


void Point3D::Point(float v3)
{
	this -> z = v3;
}

void Point3D::setZ(float v3)
{
	cout << "Donner la valeur de z :";
	cin >> v3;

	this->z = v3;
}

float Point3D::getZ()
{
	return  this -> z;
}







