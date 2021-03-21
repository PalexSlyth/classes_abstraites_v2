#include "CCercle.h"

#define PI 3.14
//constructeur
CCercle::CCercle(int x, int y, int r) :CFigure(x, y), m_Radius(r)
{
	m_Radius =  r;
}

//fonctions virtuelles
int CCercle::aire(int , int, int r) const
{	
	//double rd = 0.0;
	//rd = static_cast<double>(r);

	return PI * (r * r);
}

int CCercle::perimetre(int r, int, int) const
{
	//double rd = 0.0;
	//rd = static_cast<double>(r);

	int Cperimetre = 2 * PI * r;
	return Cperimetre;
}

//Assesseurs
void CCercle::Set_m_Radius(int r)
{
	this->m_Radius = r;
}


//mutateurs
int CCercle::Get_m_Radius()
{
	return m_Radius;
}
