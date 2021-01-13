#include<iostream>
using namespace std;
void passvalue(int value)
{
	value=99;
	
}
void passarray(int prime[5])
{
	prime[0]=11;
	prime[1]=7;
	prime[2]=5;
	prime[3]=3;
	prime[4]=2;
}
int main()
{
	int value{1};
	cout<<"antes passvalue: "<<value<<'\n';
	passvalue(value);
	cout<<"despues del passvalue: "<<value<<'\n';
	
	int prime[5]{2,3,5,7,11};
	cout<<"antes del passarray: "<<prime[0]<<""<<prime[1]<<""<<prime[2]<<" "<<prime[3]<<""<<prime[4]<<endl;
	passarray(prime);
	cout<<"antes del passarray: "<<prime[0]<<""<<prime[1]<<""<<prime[2]<<" "<<prime[3]<<""<<prime[4]<<endl;
	return 0;
	
	
}
