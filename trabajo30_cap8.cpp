#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
	srand(static_cast<unsigned int>(std::time(nullptr)));
	for(int count{1};count<=100;++count)
	{
		std::cout<<std::rand()<<'\t';
		
		if(count % 5==0)
		std::cout<<'\n';
	}
	return 0;
	
}
