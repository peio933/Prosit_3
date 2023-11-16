#include "Point2D.h"

int main()
{
	int choix;
	

	cout << "Calcule de distance pour des points 2D ou 3D" << endl;

	cout << "Quel est le type de point ?" << endl;
	cout << "1. Point 2D" << endl;
	cout << "2. Point 3D" << endl;
	cin >> choix;

	if (choix == 1)
	{
		Point2D p1;
		Point2D p2;

		p1.Point();
		p2.Point();

		cout << "La distance entre les deux points est : " << p1.distance(p2) << endl;
	}
	//else if (choix == 2)
	//{
	//	Point3D p1;
	//	Point3D p2;

	//	p1.Point();
	//	p2.Point();

	//	cout << "La distance entre les deux points est : " << p1.distance(p2) << endl;
	//}
	//else
	//{
	//	cout << "Choix invalide" << endl;
	//}

}


