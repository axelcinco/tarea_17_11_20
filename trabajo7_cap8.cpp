#include<iostream>
int main()
{
	
	std::cout<<"ingresa un numero: ";
	int x{};
    std::cin>>x;
    if(x>=10)
    if(x<=20)
    std::cout<<x<<" esta entre 10 y 20";
    else
     std::cout<<x<<" es mayor que 20 ";
     return 0;
}
