#include<iostream>
#include<cmath>



int main()
{
	double x;
	tryagain:
	std::cout<<"ingresa un numero no negativo ";
	std::cin>>x;
	if(x<0.0)
{
	goto tryagain;
	std::cout<<" la raiz cuadrada de "<<x<<" es "<<std::sqrt(x)<<std::endl;
	
}
return 0;
}
