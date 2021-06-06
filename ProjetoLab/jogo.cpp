#include "jogo.h"



jogo::jogo()
{
}

jogo::~jogo()
{
}

void jogo::start(peca * p, tabuleiro tabuleiro)
{
	cout << "JOGO DAS DAMAS" << endl;;
	system("pause");
	jogador player1, player2;
	
	tabuleiro.desenhar(p);
	while (endgame(p) == 0)
	{
		player1.jogar(1, p, tabuleiro);
		tabuleiro.desenhar(p);
		if (endgame(p) == 2)
		{
			cout << "O jogador 1 ganhou";
			system("pause");
			exit(-1);
		}
		player2.jogar(2, p, tabuleiro);
		if (endgame(p) == 1)
		{
			cout << "O jogador 2 ganhou";
			system("pause");
			exit(-1);
		}
		tabuleiro.desenhar(p);
		ifstream is;
		is.open("datas.txt");
		if (!is) {
			cout << "ERRO: não é possível abrir o ficheiro datas.txt" << '\n';
			exit(1);
		}
		ReadFile(is, p);
	}



}

