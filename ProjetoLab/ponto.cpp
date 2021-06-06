#include "ponto.h"



ponto::ponto()
{
}


ponto::~ponto()
{
}

bool ponto::Set_x(int m_x)
{
	x = m_x;
	return false;
}

bool ponto::Set_y(int m_y)
{
	y = m_y;
	return false;
}

void ponto::Set_P(int m_x, int m_y)
{
	x = m_x;
	y = m_y;
}

void ponto::Set_P(ponto m_P)
{
	this->x = m_P.Get_x();
	this->y = m_P.Get_y();
}

bool ponto::Ask2Set_P(void)
{
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	return false;
}

bool ponto::IsValid(void)
{
	if (x < 7 && x>0)
	{
		if (y < 7 && y>0)
			return true;
	}
	return false;
}

void ponto::ShowPonto(void)
{
	cout << "( " << x << " , " << y << " )";
}

bool ponto::operator==(const ponto ponto) const
{
	if (this->x == ponto.x && this->y == ponto.y)
		return true;
	return false;
}

bool ponto::operator!=(const ponto ponto) const
{
	return !(operator == (ponto));
}

void ponto::operator=(ponto ponto)
{
	this->x = ponto.x;
	this->y = ponto.y;
}

void ponto::Save(ofstream & os)
{
	os << x << ";" <<y<<";";
}

void ponto::Read(ifstream & is)
{
	char aux[10];
	is.getline(aux, 10, ';');
	x = atoi(aux);
	is.getline(aux, 10, ';');
	y = atoi(aux);
}
