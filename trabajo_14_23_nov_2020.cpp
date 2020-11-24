#include<iostream>
using namespace std;

int main()
{
	int x=0;
cout<<"ingres algun valor ";cin>>x;
cout<<endl;
	if(x>10 && x<20)
	{
		cout<<"ingresasaste un nmero mayor que 10 pero menor que 20";
		cout<<endl;
	}
	else
	{
		cout<<"ingresaste un numero menor que 10 o mayor que 20";
	}
	return 0;
}
