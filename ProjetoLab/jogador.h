#pragma once
#include "peca.h"
#include "iostream"
#include <string>
#include "tabuleiro.h"
using namespace std;


class jogador
{
private: 
	string nome;
public:
	jogador();
	virtual ~jogador();

	void jogar(int numplayer ,peca *p, tabuleiro tabuleiro);
};

