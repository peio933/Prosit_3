// Inclusion du fichier d'en-tête Point2D.h pour avoir accès à la déclaration de la classe.
#include "Point2D.h"

// Définition de la méthode Point de la classe Point2D
void Point2D::Point()
{
	// Initialisation des coordonnées x, y et z à 0.
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

// Définition de la méthode Point prenant deux paramètres de la classe Point2D
void Point2D::Point(float v1, float v2)
{
	// Assignation des valeurs v1 et v2 aux coordonnées x et y respectivement.
	this->x = v1;
	this->y = v2;
}

// Définition de la méthode setX de la classe Point2D
void Point2D::setX(float v1)
{
	// Demande à l'utilisateur de fournir la valeur de la coordonnée x.
	cout << "Donner la valeur de x :";
	cin >> v1;

	// Assignation de la valeur fournie à la coordonnée x.
	this->x = v1;
}

// Définition de la méthode setY de la classe Point2D
void Point2D::setY(float v2)
{
	// Demande à l'utilisateur de fournir la valeur de la coordonnée y.
	cout << "Donner la valeur de y :";
	cin >> v2;

	// Assignation de la valeur fournie à la coordonnée y.
	this->y = v2;
}

// Définition de la méthode getX de la classe Point2D
float Point2D::getX()
{
	// Retourne la valeur de la coordonnée x.
	return this->x;
}

// Définition de la méthode getY de la classe Point2D
float Point2D::getY()
{
	// Retourne la valeur de la coordonnée y.
	return this->y;
}

