#include <iostream>
#include <math.h>
#pragma once

using namespace std;

class Point2D
{
 protected:
	float x;
	float y;
	float z;
	double A;

public:
	void Point();
	void Point(float, float);
	void setX(float);
	void setY(float);
	float getX();
	float getY();
};

