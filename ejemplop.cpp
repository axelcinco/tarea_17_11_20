#include<iostream>
void foo(int *&)
{
	
}
int main()
{
	int *p;
	foo(p);
	std::cout<<p<<'\n';
	return 0;
}
