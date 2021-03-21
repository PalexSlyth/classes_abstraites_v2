#include "CRectangle.h"
#include"CFigure.h"



//constructeurs
CRectangle::CRectangle(int x, int y, int l, int h) :CFigure(x, y), m_Largeur(l), m_Hauteur(h)
{
	m_Largeur = l;
	m_Hauteur = h;
}

//fonctions virtuelles
int CRectangle::aire(int m_Largeur, int m_Hauteur , int ) const
{
	int aire = m_Largeur * m_Hauteur;
	return aire;
}

int CRectangle::perimetre(int m_Largeur, int m_Hauteur, int) const
{
	int perimetre = (m_Largeur + m_Hauteur) * 2;
	return perimetre;
}

//Assesseurs
void CRectangle::Set_m_Largeur(int l)
{
	this->m_Largeur = l;
}

void CRectangle::Set_m_Hauteur(int h)
{
	this->m_Hauteur = h;
}

//mutateurs
int CRectangle::Get_m_Largeur()
{
	return m_Largeur;
}
int CRectangle::Get_m_Hauteur()
{
	return m_Hauteur;
}

//Destructeur
/*CRectangle::~CRectangle()
{
};*/

