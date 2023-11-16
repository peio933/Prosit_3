#include <iostream>
#include <math.h>

using namespace std;

class Point2D
{
	protected:
		float x;
		float y;
		float z;
	public:
		void Point();
		void Point(float, float);
		void setX(float);
		void setY(float);
		float getX();
		float getY();
};

