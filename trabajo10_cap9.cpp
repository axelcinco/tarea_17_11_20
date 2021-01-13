#include<iostream>
#include <iterator>

int main()
{
	constexpr int score[]{84,92,76,81,56};
	constexpr int numstudents{static_cast<int>(sizeof(*score))};
	int maxcore{0};
	
	for(int student{0};student<numstudents;++student)
	if(score[student]>maxcore)
	{
		maxcore=score[student];
		
	}
	std::cout<<"la mejor calificacion es: "<<maxcore<<'\n';
	return 0;
}
