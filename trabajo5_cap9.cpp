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
	int testcores[static_cast<int>(studentnames::max_students)]{};
	testcores[static_cast<int>(studentnames::stan)]=76;
	
	
	
	return 0;
}

