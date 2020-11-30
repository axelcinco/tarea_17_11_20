

#include<iostream>
int g_mode;

void dosomething()
{
	g_mode=2;
	
}
   int main()
   {
   	g_mode=1;
   	dosomething();
   	
   	if(g_mode==1)
   	{
   		std::cout<<"no se detecto ninguna amenaza"<<'\n';
   		
	   }
	   else
	   {
	   	std::cout<<"lanzamiento de misiles nucleares"<<'\n';
	   }
	   return 0;
   }
