#pragma once
#include "CFigure.h"


class CCercle : public CFigure
{
protected :
	int m_Radius;

public:
	double pi = 3.14;

	CCercle(int x = 0, int y = 0, int r = 0);//constructeur

	//fonction virtuelle
	int aire(int, int, int) const;
	int perimetre(int, int, int) const;

	//mutateurs
	void Set_m_Radius(int l);

	//assesseurs 
	int Get_m_Radius();


};

