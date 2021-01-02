#include <iostream>
#include <string>

int main()
{
	std::string firstname{};
	std::string lastname{};
	
	std::cout<<"nombre: ";
	std::cin>>firstname;
	
	std::cout<<"apellido ";
	std::cin>>lastname;
	
	if(std::string fullname {firstname + ' ' + lastname}; fullname.length()>20)
	{
		std::cout<<" "<<fullname<<"\ " "es demasiado largo \n ";
		
	}
	else
	{
		std::cout<<" tu nombre es: "<<fullname<<'\n';
		
	}
	return 0;
}
