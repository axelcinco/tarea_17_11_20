#include<iostream>
using namespace std;
int main()
{
	char text[]{"Hola"};
	string str{text};
	string more{str};
	
	cout<<text <<" "<< str <<" "<< more <<'\n';
	return 0;
}
