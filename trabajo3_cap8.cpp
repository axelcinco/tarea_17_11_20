#include<iostream>

int main()
{
	
	std::cout<<"ingrese un numero: ";
	int x{};
	std::cin>>x;
	
	if(x>10)
	{
		std::cout<<"ingresaste el numero "<<x<<'\n';
		std::cout<<x<<" es mayor que 10 "<<'\n';
			
	}
	else if(x<10)
	{
		std::cout<<"ingresaste el numero "<<x<<'\n';
		std::cout<<" es menor que 10 ";
		
	}
	else 
	{
			std::cout<<"ingresaste el numero "<<x<<'\n';
		std::cout<<" son el mismo numero";
	}
	return 0;
	
}
