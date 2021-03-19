#include "CRectangle.h"
#include"CFigure.h"



//constructeur
CRectangle::CRectangle(int x, int y, int l, int h) //:CFigure(x, y)//, m_Largeur(l), m_Hauteur(h)
{
	m_Largeur = l;
	m_Hauteur = h;
}

//fonction virtuelle
int CRectangle::aire(int, int) const
{
	int aire = m_Largeur * m_Hauteur;
	return aire;
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
CRectangle::~CRectangle()
{
};

