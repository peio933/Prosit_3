// Inclusion du fichier d'en-tête Point3D.h pour avoir accès à la déclaration de la classe.
#include "Point3D.h"

// Définition de la méthode Point de la classe Point3D prenant un paramètre v3
void Point3D::Point(float v3)
{
	// Assignation de la valeur v3 à la coordonnée z.
	this->z = v3;
}

// Définition de la méthode setZ de la classe Point3D
void Point3D::setZ(float v3)
{
	// Demande à l'utilisateur de fournir la valeur de la coordonnée z.
	cout << "Donner la valeur de z :";
	cin >> v3;

	// Assignation de la valeur fournie à la coordonnée z.
	this->z = v3;
}

// Définition de la méthode getZ de la classe Point3D
float Point3D::getZ()
{
	// Retourne la valeur de la coordonnée z.
	return  this->z;
}







