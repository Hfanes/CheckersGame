#pragma once
#include "ponto.h"
#include <iostream>
#include <fstream>
using namespace std;

class peca
{
private:
	ponto ponto;
	int num ;
public:
	peca();
	virtual ~peca();
	friend void iniciar(peca *p);
	void Setpeca_x(const int p) { ponto.Set_x(p); }
	void Setpeca_y(const int p) { ponto.Set_y(p); }
	int Getpeca_x() { return ponto.Get_x(); }
	int Getpeca_y() { return ponto.Get_y(); }
	friend int findnum(peca *p, int x, int y);
	int ocupado(peca *p, int x, int y);
	int moveavailable(peca *p ,const int x, const int y);
	void mover(int x, int y);
	bool eatavailable(peca *p ,int numplayer);
	bool eatavailablep2(peca *p);
	friend void SaveFile(ofstream& os, peca *p);
	friend void ReadFile(ifstream& is, peca *p);
	friend int endgame(peca *p);
};

