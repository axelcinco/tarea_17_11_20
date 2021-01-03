#include<iostream>
using namespace std;

double getdouble()
{
	while(true)
	{
		std::cout<<"ingrese un valor double: ";}
		double x{};
		std::cin>>x;
		
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767,'\n');
			std::cout<<"oops, ingreso no valido.intente nuevo \n";
			
		}
		else
		{
			std::cin.ignore(32767,'\n');
			return x;
			
		}
	}
int main()
{
	getdouble();
}

