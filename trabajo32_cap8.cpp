#include<iostream>
#include<random>
#include<ctime>

namespace myrandom
{
	std::mt19937 mersenne{static_cast<std::mt19937::result_type>(std::time(nullptr))};
}

int getrandomnumber(int min,int max)
{
	std::uniform_int_distribution<>die{min,max};
	return die(myrandom::mersenne);
	
}

 int main()
 {
 	std::cout<<getrandomnumber(1,6)<<'\n';
 	std::cout<<getrandomnumber(1,10)<<'\n';
 	std::cout<<getrandomnumber(1,20)<<'\n';
 	return 0;
 }
