#include<iostream>

void addprint(auto x ,auto y)
{
	
	std::cout<<x+y;
	
}
int main()
{
	addprint(2,3);
	std::cout<<'\n';
	addprint(4.5,6.7);
	return 0;
}
