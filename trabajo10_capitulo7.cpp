#include<iostream>
#include<string>
std::string str{" vi un auto azul ayer "};
void remplazar()
{
	str.replace(11,str.length()," rojo ayer");
}

int main()
{

	remplazar();
	std::cout<<str;
	return 0;
}
