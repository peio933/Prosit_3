// Inclusion du fichier d'en-t�te Point3D.h pour avoir acc�s � la d�claration de la classe.
#include "Point3D.h"

// D�finition de la m�thode Point de la classe Point3D prenant un param�tre v3
void Point3D::Point(float v3)
{
	// Assignation de la valeur v3 � la coordonn�e z.
	this->z = v3;
}

// D�finition de la m�thode setZ de la classe Point3D
void Point3D::setZ(float v3)
{
	// Demande � l'utilisateur de fournir la valeur de la coordonn�e z.
	cout << "Donner la valeur de z :";
	cin >> v3;

	// Assignation de la valeur fournie � la coordonn�e z.
	this->z = v3;
}

// D�finition de la m�thode getZ de la classe Point3D
float Point3D::getZ()
{
	// Retourne la valeur de la coordonn�e z.
	return  this->z;
}







