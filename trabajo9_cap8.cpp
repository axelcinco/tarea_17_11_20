#include<iostream>
int main()
{
	std::cout<<"ingrese un entero: ";
	int x{};
	std::cin>>x;
	
	std::cout<<"ingrese otro entero: ";
	int y;
	std::cin>>y;
	
	if(x>0 && y>0)
	{
		std::cout<<"ambos nuemros son positivos: ";
		
	}
	else if(x>0 || y>0)
	{
		std::cout<<"alguno de los dos numeros es positivo ";
		
	}
	else
	 {
	 	std::cout<<"los dos numeros son negativos ";
	 	
	 }
	 return 0;
	 
}
