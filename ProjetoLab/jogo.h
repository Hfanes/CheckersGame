#pragma once
#include "peca.h"
#include "tabuleiro.h"
#include "jogador.h"
class jogo
{
public:
	jogo();
	~jogo();
	void start(peca *p, tabuleiro tabuleiro);
};

