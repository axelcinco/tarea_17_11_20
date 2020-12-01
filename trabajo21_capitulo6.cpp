#include<iostream>
#include<typeinfo>

int main()
{
	
	short d{4.0};
	short s{5};
	std::cout<<typeid(d+s).name()<<" "<<d+s<<'\n';
	return 0;
}
