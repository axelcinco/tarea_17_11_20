#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	std::srand(5323);
	std::rand();
	for(int count{1};count<=100;++count)
	{
		
		cout<<rand()<<'\t';
		
		if(count% 5==0)
		cout<<'\n';
		
		
	}
	return 0;
}
