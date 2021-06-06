#include "jogador.h"
#include "peca.h"
#include "tabuleiro.h"
#include <iostream>
#include "jogo.h"
using namespace std;

int main(void)
{
	peca p[24];
	tabuleiro tabuleiro;
	iniciar(p);
	jogo jogo;
	
	jogo.start(p, tabuleiro);
}
