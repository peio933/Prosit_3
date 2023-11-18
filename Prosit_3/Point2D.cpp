// Inclusion du fichier d'en-t�te Point2D.h pour avoir acc�s � la d�claration de la classe.
#include "Point2D.h"

// D�finition de la m�thode Point de la classe Point2D
void Point2D::Point()
{
	// Initialisation des coordonn�es x, y et z � 0.
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

// D�finition de la m�thode Point prenant deux param�tres de la classe Point2D
void Point2D::Point(float v1, float v2)
{
	// Assignation des valeurs v1 et v2 aux coordonn�es x et y respectivement.
	this->x = v1;
	this->y = v2;
}

// D�finition de la m�thode setX de la classe Point2D
void Point2D::setX(float v1)
{
	// Demande � l'utilisateur de fournir la valeur de la coordonn�e x.
	cout << "Donner la valeur de x :";
	cin >> v1;

	// Assignation de la valeur fournie � la coordonn�e x.
	this->x = v1;
}

// D�finition de la m�thode setY de la classe Point2D
void Point2D::setY(float v2)
{
	// Demande � l'utilisateur de fournir la valeur de la coordonn�e y.
	cout << "Donner la valeur de y :";
	cin >> v2;

	// Assignation de la valeur fournie � la coordonn�e y.
	this->y = v2;
}

// D�finition de la m�thode getX de la classe Point2D
float Point2D::getX()
{
	// Retourne la valeur de la coordonn�e x.
	return this->x;
}

// D�finition de la m�thode getY de la classe Point2D
float Point2D::getY()
{
	// Retourne la valeur de la coordonn�e y.
	return this->y;
}

