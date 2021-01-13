#include<iostream>
using namespace std;

int main()
{
	constexpr int scores[]{84,92,76,81,56};
	constexpr int numStudents{static_cast<int>(sizeof(scores)/sizeof(scores))};
	int maxIndex{0};
	for(int student=0;student<numStudents;++student)
	{
		if(scores[student]>scores[maxIndex])
		
			maxIndex=student;	
		
		
	}
	cout<<"El indice con la mayor calificacion fue: "<<maxIndex<<'\n';
	return 0;
}
