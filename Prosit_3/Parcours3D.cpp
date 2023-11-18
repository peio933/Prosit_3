#include "Parcours3D.h"

void Parcours3D::Parcours(Point2D p1, Point2D p2, Point3D p3, Point3D p4)
{
	A = sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2) + pow(p4.getZ() - p3.getZ(), 2));
	cout << "Les valeurs sont :" << p1.getX() << "," << p1.getY() << "," << p3.getZ() << endl;
	cout << "Les valeurs sont :" << p2.getX() << "," << p2.getY() << "," << p4.getZ() << endl;
	cout << "La distance entre les deux points est : " << A << endl;
}
