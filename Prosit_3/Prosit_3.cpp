// Inclure les fichiers d'en-t�te n�cessaires qui d�finissent les classes utilis�es dans ce programme
#include "Parcours2D.h"
#include "Parcours3D.h"

// Fonction principale du programme
int main()
{
    // D�clarer une variable 'choix' pour stocker le choix de l'utilisateur (2D ou 3D)
    int choix;

    // Afficher un message d'introduction
    cout << "Calcule de distance pour des points 2D ou 3D" << endl;

    // Afficher le menu de choix
    cout << "Quel est le type de point ?" << endl;
    cout << "1. Point 2D" << endl;
    cout << "2. Point 3D" << endl;

    // Lire le choix de l'utilisateur
    cin >> choix;

    // V�rifier le choix de l'utilisateur
    if (choix == 1)
    {
        // D�clarer deux objets Point2D
        Point2D p1;
        Point2D p2;

        // Initialiser les coordonn�es x et y avec 0
        float x = 0;
        float y = 0;

        // Appeler la fonction Point() pour initialiser les objets Point2D
        p1.Point();
        p2.Point();

        // D�finir les coordonn�es x et y des objets Point2D
        p1.setX(x);
        p1.setY(y);

        p2.setX(x);
        p2.setY(y);

        // Appeler les fonctions getX() et getY() pour obtenir les coordonn�es des objets Point2D (ces valeurs ne sont actuellement pas utilis�es)
        p1.getX();
        p1.getY();

        p2.getX();
        p2.getY();

        // Cr�er un objet Parcours2D et appeler la fonction Parcours avec les deux points en tant qu'arguments
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
	else
	{
		cout << "Choix invalide" << endl;
	}

	return 0;
}


