#include<iostream>
using namespace std;


const int g_y {1};
constexpr int g_z {2};

void dosomething()
{
	cout<<g_y<<'\n';
	cout<<g_z<<'\n';
	
}
 
 int main()
 {
 	
 	dosomething();
 	cout<<g_y<<'\n';
 	cout<<g_z<<'\n';
 	return 0;
 }
