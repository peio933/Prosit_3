#include "Point2D.h"
class Point3D: protected Point2D
{
public:
	void Point();
	void Point(float, float, float);
	void setX(float);
	void setY(float);
	void setZ(float);
	float getX();
	float getY();
	float getZ();
};

