// Inclure le fichier d'en-tête Parcours2D.h qui définit la classe Parcours2D et la classe Point2D
#include "Parcours2D.h"

// Implémenter la fonction Parcours() de la classe Parcours2D
void Parcours2D::Parcours(Point2D p1, Point2D p2)
{

    // Calculer la distance entre les deux points à l'aide de la formule de distance euclidienne
    A = sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));

    // Afficher les coordonnées du premier point
    cout << "Les valeurs sont :" << p1.getX() << "," << p1.getY() << endl;

    // Afficher les coordonnées du deuxième point
    cout << "Les valeurs sont :" << p2.getX() << "," << p2.getY() << endl;

    // Afficher la distance entre les deux points calculée précédemment
    cout << "La distance entre les deux points est : " << A << endl;
}


