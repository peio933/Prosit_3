// Inclure le fichier d'en-t�te Parcours2D.h qui d�finit la classe Parcours2D et la classe Point2D
#include "Parcours2D.h"

// Impl�menter la fonction Parcours() de la classe Parcours2D
void Parcours2D::Parcours(Point2D p1, Point2D p2)
{

    // Calculer la distance entre les deux points � l'aide de la formule de distance euclidienne
    A = sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));

    // Afficher les coordonn�es du premier point
    cout << "Les valeurs sont :" << p1.getX() << "," << p1.getY() << endl;

    // Afficher les coordonn�es du deuxi�me point
    cout << "Les valeurs sont :" << p2.getX() << "," << p2.getY() << endl;

    // Afficher la distance entre les deux points calcul�e pr�c�demment
    cout << "La distance entre les deux points est : " << A << endl;
}


