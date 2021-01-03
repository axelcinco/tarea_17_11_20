#include<iostream>
double getdouble()
{
	
	std::cout<<"ingrese un valor double: ";
	double x{};
	std::cin>>x;
	return x;
	
}
char getoperator()
{
	std::cout<<"ingrese uno de  de los siguientes caracteres +,-,*,/ ";
	char op{};
	std::cin>>op;
	return op;
	
}

void printresult(double x,char operation,double y)
{
	
	switch(operation)
	{
		case '+':std::cout<<x<<"+"<<y<<"is"<<x+y<<'\n';break;
		case '-':std::cout<<x<<"-"<<y<<"is"<<x-y<<'\n';break;
		case '*':std::cout<<x<<"*"<<y<<"is"<<x*y<<'\n';break;
		case '/':std::cout<<x<<"/"<<y<<"is"<<x/y<<'\n';break;
		
	}
}

int main()
{
	double x{getdouble()}; char operation{getoperator()};
	double y{getdouble()};
	
	printresult(x,operation,y);
	return 0;
}
