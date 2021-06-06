#pragma once
#include "ponto.h"
#include <iostream>
#include <fstream>
using namespace std;
class ponto
{
private:
	int x, y;
public:
	ponto();
	~ponto();
	bool Set_x(int m_x);
	bool Set_y(int m_y);
	void Set_P(int m_x, int m_y); 
	void Set_P(ponto m_P); 
	bool Ask2Set_P(void); 

	int Get_x(void) const { return  x; }
	int Get_y(void) const { return  y; }

	bool IsValid(void);
	void ShowPonto(void); 

	bool operator == (const ponto ponto) const; 
	bool operator != (const ponto ponto) const; 
	void operator = (ponto ponto); 

	void Save(ofstream &os); 
	void Read(ifstream &is);
};


