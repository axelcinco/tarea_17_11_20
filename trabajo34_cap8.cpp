#include<iostream>
#include<cstdint>

int main()
{
	std::int16_t x{};
	std::cout<<" ingrese un numero entre -32768 y 32767: ";
	std::cin>>x;
	
	std::int16_t y{};
	std::cout<<" ingrese un numero entre -32768 y 32767: ";
	std::cin>>y;
	
	std::cout<<" la suma de los numero es "<<x+y<<'\n';
	return 0;
	
	
}


