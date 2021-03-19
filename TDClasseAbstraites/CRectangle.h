#pragma once
#include "CFigure.h"




class CRectangle : public CFigure
{

protected : 
	int m_Largeur, m_Hauteur; //prot�ger pour qu'il soit accessible depuis les classe ayant l'acc�s public 
public:


	CRectangle(int x = 0, int y = 0, int l = 0, int h = 0);//constructeur


	int aire(int, int) const;//fonction virtuelle


	//mutateurs
	void Set_m_Largeur(int l);
	void Set_m_Hauteur(int h);

	//assesseurs 
	int Get_m_Largeur();
	int Get_m_Hauteur();

	virtual ~CRectangle();//Destructeur

};