#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	std::ifstream inf{"sample.dat",ifstream::binary};
	if(!inf)
	{
			std::cerr<<"ohh no se puede estar en modo abierto "<<'\n';
			return 1;
			
	}
	std::string strdata;
	inf.seekg(5);
   getline(inf,strdata);
	std::cout<<strdata<<'\n';
	
	inf.seekg(8,ios::cur);
	std::getline(inf,strdata);
	std::cout<<strdata<<'\n';
	
	inf.seekg(-15,ios::end);
	std::getline(inf,strdata);
	std::cout<<strdata<<'\n';
	return 0;
}
