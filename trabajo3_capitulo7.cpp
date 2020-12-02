#include<iostream>
#include<string>
int  main()
{
	std::cout<<"ingrese su nombre completo:";
	std::string name{};
	std::cin>>name;
	
	std::cout<<"ingrese tu edad";
	std::string age{};
	std::cin>>age;
	std::cout<< " tu nombre es:"<<name<<" , "<<" tu edad es: "<<age<<'\n';
	return 0;
}
