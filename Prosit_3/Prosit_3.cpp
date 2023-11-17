#include "Point2D.h"
#include "Parcours2D.h"
#include "Point3D.h"
#include "Parcours3D.h"

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
		float x = 0;
		float y = 0;


		p1.Point();
		p2.Point();

		p1.setX(x);
		p1.setY(y);

		p2.setX(x);
		p2.setY(y);

		p1.getX();
		p1.getY();

		p2.getX();
		p2.getY();

		Parcours2D A;
		A.Parcours(p1, p2);




	}
	else if (choix == 2)
	{
		Point2D p1;
		Point2D p2;
		Point3D p3;
		Point3D p4;
		float x = 0;
		float y = 0;
		float z = 0;


		p1.Point();
		p2.Point();


		p1.setX(x);
		p1.setY(y);
		p3.setZ(z);

		p2.setX(x);
		p2.setY(y);
		p4.setZ(z);
		
		p1.getX();
		p1.getY();
		p3.getZ();

		p2.getX();
		p2.getY();
		p4.getZ();

		Parcours3D A;
		A.Parcours(p1, p2, p3, p4);

		
	}
	//else
	//{
		//cout << "Choix invalide" << endl;
	//}

	return 0;
}


