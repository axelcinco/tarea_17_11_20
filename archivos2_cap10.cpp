#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	std::ifstream inf{"sample.dat"};
	if(!inf)
	{
			std::cerr<<"ohh no se puede estar en modo abierto "<<'\n';
			return 1;
			
	}
	while(inf)
	{
		std::string strinput;
		std::getline(inf,strinput);
		cout<<strinput<<endl;
		
	}
	return 0;
	
}
