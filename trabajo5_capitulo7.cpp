#include<iostream>
#include<string>
int  main()
{
	
	std::cout<<"ingrese su nombre completo:";
	int  choice{};
	std::cin>>choice;
	
	std::cout<<"ingrese su nombre completo:";
	std::string name{};
	
	std::getline(std::cin,name);
	
	
	std::cout<< " hola "<<name<<" , "<<" la opcion que dijitaste es: "<<choice<<'\n';
	return 0;
}
