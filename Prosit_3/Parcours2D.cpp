#include "Parcours2D.h"

void Parcours2D::Parcours(Point2D p1, Point2D p2)
{
	A = sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));
	cout << "<Les valeurs sont :" << p1.getX() << "," << p1.getY() << endl;
	cout << "<Les valeurs sont :" << p2.getX() << "," << p2.getY() << endl;
	cout << "La distance entre les deux points est : " << A << endl;
}
