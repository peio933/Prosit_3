// Inclusion du fichier d'en-tête Parcours3D.h pour avoir accès à la déclaration de la classe.
#include "Parcours3D.h"

// Définition de la méthode Parcours de la classe Parcours3D, prenant deux objets Point2D et deux objets Point3D en paramètres.
void Parcours3D::Parcours(Point2D p1, Point2D p2, Point3D p3, Point3D p4)
{
	// Calcul de la distance 3D entre les points en utilisant la formule de la distance euclidienne.
	A = sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2) + pow(p4.getZ() - p3.getZ(), 2));

	// Affichage des coordonnées du premier point 2D et du premier point 3D.
	cout << "Les valeurs sont :" << p1.getX() << "," << p1.getY() << "," << p3.getZ() << endl;

	// Affichage des coordonnées du deuxième point 2D et du deuxième point 3D.
	cout << "Les valeurs sont :" << p2.getX() << "," << p2.getY() << "," << p4.getZ() << endl;

	// Affichage de la distance calculée entre les deux points.
	cout << "La distance entre les deux points est : " << A << endl;
}

// Définition de la fonction Convertir de la classe Parcours3D, prenant deux objets en paramètres (p1 de type Point2D, p3 de type Point3D)
void Parcours3D::Convertir(Point2D p1, Point3D p3)
{
	// Calcul de la distance entre le point 2D et l'origine dans l'espace 3D
	float dist = sqrt(pow(p1.getX() - 0, 2) + pow(p1.getY() - 0, 2) + pow(p3.getZ() - 0, 2));

	// Calcul de la nouvelle coordonnée X dans le plan 2D en fonction de la distance et des coordonnées du point 2D et 3D
	float X = dist * p1.getX() / p3.getZ();

	// Calcul de la nouvelle coordonnée Y dans le plan 2D en fonction de la distance et des coordonnées du point 2D et 3D
	float Y = dist * p1.getY() / p3.getZ();

	// Affichage des nouvelles coordonnées du point 2D résultant de la conversion
	cout << "Les coordonnées du point 2D sont : " << X << "," << Y << endl;
}
