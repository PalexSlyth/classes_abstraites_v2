#pragma once
#include "CFigure.h"




class CRectangle : public CFigure
{

protected : 
	int m_Largeur, m_Hauteur; //protéger pour qu'il soit accessible depuis les classe ayant l'accès public 
public:


	CRectangle(int x = 0, int y = 0, int l = 0, int h = 0);//constructeur

//fonction virtuelle
	int aire(int, int, int) const;
	int perimetre(int, int, int) const;

	//mutateurs
	void Set_m_Largeur(int l);
	void Set_m_Hauteur(int h);

	//assesseurs 
	int Get_m_Largeur();
	int Get_m_Hauteur();

	 //~CRectangle();//Destructeur

};