#pragma once

class CFigure
{
protected:
    int m_x, m_y;
public:

	//constructeur
	CFigure(int x = 0, int y = 0)// : m_x(x), m_y(y)
	{
		m_x = x;
		m_y = y;
	}
//Assesseurs
	void Set_m_x(int x)
	{
		this->m_x = x;
	}

	void Set_m_y(int y)
	{
		this->m_y = y;
	}

	//mutateurs
	int Get_m_x()
	{
		return m_x;
	}
	int Get_m_y()
	{
		return m_y;
	}

	//fonctions virtuelles pures
	virtual void dessiner() = 0;
	virtual int aire() const = 0;
	virtual int perimetre() = 0;

	virtual ~CFigure();//destructeur
};