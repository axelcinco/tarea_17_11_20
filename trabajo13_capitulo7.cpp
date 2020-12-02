#include<iostream>
using namespace std;
int main()
{
	enum class Color
	{
		red,
		blue
	};
	
	Color color{Color::red};
	
	if(color==Color::red)
	{
		
		cout<<" el color  es rojo"<<'\n';
		
	}
	else if( color==Color::blue)
	{
		cout<<"el color es azul";
	}
    return 0;
	
}
