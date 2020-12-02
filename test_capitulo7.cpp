#include<iostream>
#include<string>

int main()
{
	std::string myname{" axel"};
	std::string age{" 18"};
	std::cout<<myname<<" tinene "<<myname.length()<<" caracteres"<<'\n';
	std::cout<<"usted tiene "<<age<<" años"<<age.length()<<" caracteres "<<'\n';
	std::cout<<" ha vivido: "<<age.length()<<"."<< myname.length();
	return 0;
}
