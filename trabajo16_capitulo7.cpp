#include<iostream>

struct Mounstros
{
	
	char nombre[30];
	 int dano;
	 char persona[30];
};


void caracter(Mounstros mounstros)
{
	std::cout<<" nombre:"<<mounstros.nombre<<" ,  daño:  "<< mounstros.dano<< "  tipo de mounstro: "<< mounstros.persona<<'\n';
}

int main()
{
	Mounstros mou1{"pain", 80 ,"ogro"};
	Mounstros mou2{"rugal",100,"dragon"};
	caracter(mou1);
	std::cout<<'\n';
	caracter(mou2);
	return 0;
}
