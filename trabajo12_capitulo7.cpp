#include<iostream>

int main()
{
	
	enum color
	{
		color_red,
		color_blue
	};
	enum fruit
	{
		
		fruit_banana,
		fruit_apple
		
	};
	
	color color{color_red};
	fruit fruit{fruit_banana};
	
	if (color==fruit)
	{
		std::cout<<"color y fruta son iguales";
	    	
		
	}
	else
	{
		std::cout<<"color y fruta no son iguales";
		
	}
	return 0;
}
