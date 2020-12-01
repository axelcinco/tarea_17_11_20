#include<iostream>
void incrementandprint()
{
	static int value{1};
	++value;
	std::cout<<value<<'\n';
	
}
int main()
{
	incrementandprint();
	incrementandprint();
	incrementandprint();
	return 0;
	
}
