#include<iostream>
using namespace std;

enum studentnames
{
	kenny,
	kile,
	stan,
	butters,
	cartman,
	wendy,
	max_students
};

int main()
{
	int testcores[max_students]{};
	testcores[studentnames::stan]=76;
	
	return 0;
}

