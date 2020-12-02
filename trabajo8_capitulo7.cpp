#include<iostream>

int getuserinput()
{
	int i{};
	std::cin>>i;
	return i;
	
}

int main()
{
	std::cout<<"¿ cuantas manzanas te comiste hoy?"<<'\n';
	if(int appleeaten{getuserinput()};appleeaten<=2)
	{
		
		std::cout<<"yummy";
		
	}
	else{
		std::cout<<appleeaten<<" son muchas"<<'\n';
		
	}
	return 0;
}
