#include "peca.h"



peca::peca()
{
}


peca::~peca()
{
}

int peca::ocupado(peca * p, int x, int y)
{
	if (this->num < 12)
	{
		if (findnum(p, x, y) < 12)
			return 0;
		if (findnum(p, x, y) >= 12)
			return 1;
	}
}

int peca::moveavailable(peca *p, const int x, const int y)
{
	int aux = 0;
	if (findnum(p, this->Getpeca_x(), this->Getpeca_y()) < 12)
	{
		if (this->Getpeca_y() + 1 == y && (this->Getpeca_x() - 1 == x || this->Getpeca_x() + 1 == x)&& findnum(p,x,y) == 24)
		{
			if ((eatavailable(p, 1)))
			{
				cout << "Captura obrigatoria.";
				return 0;
			}
			else 
			{
				return 1;
			}
		}
		else if(this->Getpeca_y() + 2 == y && (this->Getpeca_x() - 2 == x ) && findnum(p, x, y) == 24)
		{
			if (findnum(p, x + 1, y - 1) >= 12 && findnum(p, x + 1, y - 1) < 24)
			{
				p[findnum(p, x + 1, y -1)].mover(-1,-1);
				this->mover(x, y);
				if (y == 6 || y == 7)
				{
					return 1;
				}
				else if (x == 0 || x == 1)
				{
					if (findnum(p, x + 1, y + 1) < 24 && findnum(p, x + 1, y + 1) >= 12)
					{
						if (findnum(p, x + 2, y + 2) == 24)
						{
							cout << "Captura novamente possivel;";
							return 2;
						}
					}
				}
				else if (x == 6 || x == 7)
				{
					if (findnum(p, x - 1, y + 1) < 24 && findnum(p, x - 1, y + 1) >= 12)
					{
						if (findnum(p, x - 2, y + 2) == 24)
						{
							cout << "Captura novamente possivel;";
							return 2;
						}
					}
				}
				else if (findnum(p, x - 1, y + 1) < 24 && findnum(p, x - 1, y + 1) >= 12)
				{
					if (findnum(p, x - 2, y + 2) == 24)
					{
						cout << "Caputra nova;";
						return 2;
					}
				}
				else if (findnum(p, x + 1, y + 1) < 24 && findnum(p, x + 1, y + 1) >= 12)
				{
					if (findnum(p, x + 2, y + 2) == 24)
					{
						cout << "Captura novamente possivel;";
						return 2;
					}
				}
				
				return 1;
			}
		}
		else if ( (this->Getpeca_y() + 2 == y && (this->Getpeca_x() + 2 == x)) && findnum(p, x, y) == 24)
		{
			if (findnum(p, x - 1, y - 1) >= 12 && findnum(p,x-1,y-1) < 24)
			{
				
				p[findnum(p, x - 1, y - 1)].mover(-1, -1);
				this->mover(x, y);
				
				system("pause");
				if (y == 6 || y == 7)
				{
					
					return 1;
				}
				if (x == 0 || x == 1)
				{
					if (findnum(p, x + 1, y + 1) < 24 && findnum(p, x + 1, y + 1) >= 12)
					{
						if (findnum(p, x + 2, y + 2) == 24)
						{
							cout << "Captura novamente possivel;";
							return 2;
						}
					}
				}
				if (x == 6 || x == 7)
				{
					if (findnum(p, x - 1, y + 1) < 24 && findnum(p, x - 1, y + 1) >= 12)
					{
						if (findnum(p, x - 2, y + 2) == 24)
						{
							cout << "Captura novamente possivel;";
							return 2;
						}
					}
				}
				if (findnum(p, x - 1, y + 1) < 24 && findnum(p, x - 1, y + 1) >= 12)
				{
					if (findnum(p, x - 2, y + 2) == 24)
					{
						cout << "Captura novamente possivel;";
						return 2;
					}
				}
				if (findnum(p, x + 1, y + 1) < 24 && findnum(p, x + 1, y + 1) >= 12)
				{
					if (findnum(p, x + 2, y + 2) == 24)
					{
						cout << "Captura novamente possivel;";
						system("pause");
						return 2;
					}
				}
				return 1;
			}
			return 0;
		}
	}
	else if (findnum(p, this->Getpeca_x(), this->Getpeca_y() < 24))
	{
		if (this->Getpeca_y() - 1 == y && (this->Getpeca_x() - 1 == x || this->Getpeca_x() + 1 == x) && findnum(p, x, y) == 24)
		{;
			eatavailablep2(p);
			/*return 1;*/
			if (eatavailablep2(p))
			{
				cout << "Captura obrigatória";
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else if (this->Getpeca_y() - 2 == y && (this->Getpeca_x() - 2 == x) && findnum(p, x, y) == 24)
		{
			if (findnum(p, x + 1, y + 1) < 12)
			{
				p[findnum(p, x + 1, y + 1)].mover(-1, -1);
				this->mover(x, y);
				if (y == 6 || y == 7)
				{
					return 1;
				}
				if (x == 0 || x == 1)
				{
					if (findnum(p, x + 1, y + 1) < 24 && findnum(p, x + 1, y + 1) >= 12)
					{
						if (findnum(p, x + 2, y + 2) == 24)
						{
							cout << "Captura novamente possivel;";
							return 2;
						}
					}
				}
				if (x == 6 || x == 7)
				{
					if (findnum(p, x - 1, y + 1) < 24 && findnum(p, x - 1, y + 1) >= 12)
					{
						if (findnum(p, x - 2, y + 2) == 24)
						{
							cout << "Captura novamente possivel;";
							return 2;
						}
					}
				}
				if (findnum(p, x - 1, y + 1) < 24 && findnum(p, x - 1, y + 1) >= 12)
				{
					if (findnum(p, x - 2, y + 2) == 24)
					{
						cout << "Captura novamente possivel;";
						return 2;
					}
				}
				if (findnum(p, x + 1, y + 1) < 24 && findnum(p, x + 1, y + 1) >= 12)
				{
					cout << "AQUIeatagain";
					if (findnum(p, x + 2, y + 2) == 24)
					{
						cout << "Captura novamente possivel;";
						return 2;
					}
				}
				return 1;
			}
		}
		else if ((this->Getpeca_y() - 2 == y && (this->Getpeca_x() + 2 == x)) && findnum(p, x, y) == 24)
		{
			if (findnum(p, x - 1, y + 1))
			{
				p[findnum(p, x - 1, y + 1)].mover(-1, -1);
				this->mover(x, y);
				if (y == 6 || y == 7)
				{
					return 1;
				}
				if (x == 0 || x == 1)
				{
					if (findnum(p, x + 1, y + 1) < 24 && findnum(p, x + 1, y + 1) >= 12)
					{
						if (findnum(p, x + 2, y + 2) == 24)
						{
							cout << "Captura novamente possivel;";
							return 2;
						}
					}
				}
				if (x == 6 || x == 7)
				{
					if (findnum(p, x - 1, y + 1) < 24 && findnum(p, x - 1, y + 1) >= 12)
					{
						if (findnum(p, x - 2, y + 2) == 24)
						{
							cout << "Caputura novamente possivel;";
							return 2;
						}
					}
				}
				if (findnum(p, x - 1, y + 1) < 24 && findnum(p, x - 1, y + 1) >= 12)
				{
					if (findnum(p, x - 2, y + 2) == 24)
					{
						cout << "Captura novamente possivel";
						return 2;
					}
				}
				if (findnum(p, x + 1, y + 1) < 24 && findnum(p, x + 1, y + 1) >= 12)
				{

					if (findnum(p, x + 2, y + 2) == 24)
					{
						cout << "Captura novamente possivel;";
						return 2;
					}
				}
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}

}

void peca::mover(int x, int y)
{
	this->Setpeca_x(x);
	this->Setpeca_y(y);
}

bool peca::eatavailable(peca *p, int numplayer)
{
	int i, aux = 0;
	if (numplayer == 1)
	{
		
		for (i = 0; i < 12; i++)
		{
			if (p[i].Getpeca_y() == 6 || p[i].Getpeca_y() == 7)
			{

			}
			else if (p[i].Getpeca_x() == 0 || p[i].Getpeca_x() == 1)
			{
				if (findnum(p, p[i].Getpeca_x() + 1, p[i].Getpeca_y() + 1) < 24 && findnum(p, p[i].Getpeca_x() + 1, p[i].Getpeca_y() + 1) >= 12)
				{
					if (findnum(p, p[i].Getpeca_x() + 2, p[i].Getpeca_y() + 2) == 24)
					{
						aux++;
					}
				}
			}
			else if (p[i].Getpeca_x() == 6 || p[i].Getpeca_x() == 7)
			{
				if (findnum(p, p[i].Getpeca_x() - 1, p[i].Getpeca_y() + 1) < 24 && findnum(p, p[i].Getpeca_x() - 1, p[i].Getpeca_y() + 1) >= 12)
				{
					if (findnum(p, p[i].Getpeca_x() - 2, p[i].Getpeca_y() + 2) == 24)
					{
						aux++;
					}
				}
			}
			else if (findnum(p, p[i].Getpeca_x() - 1, p[i].Getpeca_y() + 1) < 24 && findnum(p, p[i].Getpeca_x() - 1, p[i].Getpeca_y() + 1) >= 12)
			{
				if (findnum(p, p[i].Getpeca_x() - 2, p[i].Getpeca_y() + 2) == 24)
				{
					aux++;
				}
			}
			else if (findnum(p, p[i].Getpeca_x() + 1, p[i].Getpeca_y() + 1) < 24 && findnum(p, p[i].Getpeca_x() + 1, p[i].Getpeca_y() + 1) >= 12)
			{
				if (findnum(p, p[i].Getpeca_x() + 2, p[i].Getpeca_y() + 2) == 24)
				{
					aux++;
				}
			}
		}
	}
	if (aux == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool peca::eatavailablep2(peca * p)
{
	int aux = 0, i;
	for (i = 12; i < 24; i++)
	{
		if (p[i].Getpeca_y() == 1 || p[i].Getpeca_y() == 0)
		{
			
		}
		if (p[i].Getpeca_x() == 0 || p[i].Getpeca_x() == 1)
		{
			if (findnum(p, p[i].Getpeca_x() + 1, p[i].Getpeca_y() - 1) < 12 && findnum(p, p[i].Getpeca_x() + 1, p[i].Getpeca_y() - 1) >= 0)
			{
				if (findnum(p, p[i].Getpeca_x() + 2, p[i].Getpeca_y() - 2) == 24)
				{
					aux++;
				}
			}
		}
		else if (p[i].Getpeca_x() == 6 || p[i].Getpeca_x() == 7)
		{
			if (findnum(p, p[i].Getpeca_x() - 1, p[i].Getpeca_y() - 1) < 12 && findnum(p, p[i].Getpeca_x() - 1, p[i].Getpeca_y() - 1) >= 0)
			{
				if (findnum(p, p[i].Getpeca_x() - 2, p[i].Getpeca_y() - 2) == 24)
				{
					aux++;
				}
			}
		}
		else if (findnum(p, p[i].Getpeca_x() + 1, p[i].Getpeca_y() - 1) < 12 && findnum(p, p[i].Getpeca_x() + 1, p[i].Getpeca_y() - 1) >= 0)
		{
			if (findnum(p, p[i].Getpeca_x() + 2, p[i].Getpeca_y() - 2) == 24)
			{
				aux++;
			}
		}
		else if (findnum(p, p[i].Getpeca_x() - 1, p[i].Getpeca_y() - 1) >= 0 && findnum(p, p[i].Getpeca_x() - 1, p[i].Getpeca_y() - 1) < 12)
		{
			if (findnum(p, p[i].Getpeca_x() - 2, p[i].Getpeca_y() - 2) == 24)
				aux++;
		}
	}
	if (aux > 0)
	{
		return true;
	}
	return false;
}

int endgame(peca * p)
{
	int i, aux = 0;
	for (i = 0; i < 12; i++)
	{
		if (p[i].Getpeca_x() != -1)
			aux++;
	}
	if (aux == 0)
		return 1;
	for (i = 12; i < 24; i++)
	{
		if (p[i].Getpeca_x() != -1)
			aux++;
	}
	if (aux == 0)
		return 2;
	return 0;
}


void iniciar(peca * p)
{
	{
		int i, x = 0;
		for (i = 0; i < 24; i++)
		{
			if (i < 4)
			{
				p[i].ponto.Set_y(0);
				p[i].ponto.Set_x((i) * 2);
				p[i].num = x;

			}
			else if (i < 8)
			{
				p[i].ponto.Set_y(1);
				p[i].ponto.Set_x(((i - 4 /*+ 1*/) * 2) + 1);
				p[i].num = x;

			}
			else if (i < 12)
			{
				p[i].ponto.Set_y(2);
				p[i].ponto.Set_x((i - 8 /*+ 1*/) * 2);
				p[i].num = x;

			}
			else if (i < 16)
			{
				p[i].ponto.Set_y(5);
				p[i].ponto.Set_x(((i - 12) * 2) + 1);
				p[i].num = x;
			}
			else if (i < 20)
			{
				p[i].ponto.Set_y(6);
				p[i].ponto.Set_x(((i - 16 /*+ 1*/) * 2) /*- 1*/);
				p[i].num = x;

			}
			else if (i < 24) {
				p[i].ponto.Set_y(7);
				p[i].ponto.Set_x(((i - 20) * 2) + 1);
				p[i].num = x;
			}
		}
	}
}

int findnum(peca * p, int x, int y)
{
	int i;
	for (i = 0; i < 24; i++)
	{
		if (p[i].Getpeca_x() == x && p[i].Getpeca_y() == y)
			break;
	}
	return i;
}


void SaveFile(ofstream & os, peca * p)
{
	int i;
	for (i = 0; i < 24; i++)
	{
		os << i << ";" << p[i].Getpeca_x() << ";" << p[i].Getpeca_y() << endl;;
	}
}

void ReadFile(ifstream & is, peca * p)
{
	int i= 0;
	char aux[10];
	for(i = 0; i < 24;i++)
	{
		is.getline(aux, 10, ';');
		is.getline(aux, 10, ';');
		p[i].Setpeca_x(atoi(aux));
		is.getline(aux, 10, ';');
		p[i].Setpeca_y(atoi(aux));
		is.get();
	}

}


