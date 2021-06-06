#include "jogador.h"



jogador::jogador()
{
	cout << "Introduza o nome: ";
	cin >> nome;
}


jogador::~jogador()
{
}

void jogador::jogar(int numplayer, peca * p, tabuleiro tabuleiro)
{
	int a, b, c, d, aux, here;

	cout << endl << "TURNO DE : " << this->nome << endl;
	cout << "Introduza a linha da peca que quer mover: ";
	cin >> a;
	cout << "Introduza a coluna da peca que quer mover: ";
	cin >> b;
	aux = findnum(p, b, a);
	if (aux >= 24)
	{
		cout << "Nao ha peca";
		system("pause");
		std::cin.clear();
		jogar(numplayer, p, tabuleiro);
	}
	if (numplayer == 1)
	{
		if (aux >= 12 )
		{
			cout << "Peca invalida23";
			system("pause");
			std::cin.clear();
			jogar(numplayer, p, tabuleiro);
		}
	}
	else if (numplayer == 2)
	{
		if (aux < 12)
		{
			cout << "Peca invalid23a";
			system("pause");
			std::cin.clear();
			jogar(numplayer, p, tabuleiro);
		}
	}
	
	cout << endl << aux << endl << p[aux].Getpeca_y() << endl;
	cout <<"Introduza a nova linha da peca : ";
	cin >> c;
	cout << "Introduza a nova coluna da peca : ";
	cin >> d;
	here = p[aux].moveavailable(p, d, c);
	if (here==1)
	{
		p[aux].mover(d, c);
	}
	if(here== 0)
	{
		cout << endl << "Jogada/posicao invalida" << endl;
		system("pause");
		std::cin.clear();
		jogar(numplayer, p, tabuleiro);
	}
	if (here == 2)
	{
		
		while (here == 2)
		{
			tabuleiro.desenhar(p);
			cout << "Introduza a nova linha da peca : ";
			cin >> c;
			cout << "Introduza a nova coluna da peca : ";
			cin >> d;
			here = p[aux].moveavailable(p, d, c);
		}
		
	}


}

