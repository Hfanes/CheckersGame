#include "tabuleiro.h"



tabuleiro::tabuleiro()
{
}

tabuleiro::~tabuleiro()
{
}

void tabuleiro::desenhar(peca * p)
{
	int i, c_y = 0, j, c_x = 0;



	system("cls");
	cout << "       ";

	for (i = 0; i < 8; i++)
	{
		cout << "   " << c_y << "   ";
		c_y++;
	}
	cout << endl;
	cout << endl;
	for (i = 0; i < 8; i++)
	{
		cout << "   " << c_x << "   ";
		c_x++;
		for (j = 0; j < 8; j++)
		{
			if (findnum(p, j, i) < 12)
				cout << "|  X  |";
			else if (findnum(p, j, i) < 24)
				cout << "|  O  |";
			else
				cout << "|     |";
		}
		cout << endl;
		cout << "       --------------------------------------------------------" << endl;
	}
}
