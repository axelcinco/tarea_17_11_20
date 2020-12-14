#include<iostream>

int main()
{
	
	std::cout<<"ingrese un numero 0 99999: ";
	int x{};
	std::cin>>x;
	
	if(x<0)
	{
		std::cout<<"ingresaste el numero "<<x<<'\n';
		std::cout<<x<<" es un numero negativo "<<'\n';
			
	}
	else if(x<10)
	{
	
		std::cout<<" tiene un digito ";
		
	}
	else if(x<100)
	{
			
		std::cout<<" tiene dos digitos";
	}
	else if(x<1000)
	{
			
		std::cout<<" tiene tres digitos";
	}
	else if(x<10000)
	{
	   std::cout<<" tiene cuatro digitos";	
	}
	else 
	{
	  std::cout<<x<<"es mayor que 9999";
	  
	}
	return 0;
	
}
