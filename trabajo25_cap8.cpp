#include<iostream>
using namespace std;

int main()
{
	int sum{0};
	for(int count{0};count<10;count++)
	{
		cout<<"ingrese un numero para sumar o 0 para salir ";
		int num{};
		cin>>num;
		if(num==0)
			break;
			
			sum+=num;	
	}
	cout<<" el resultado de la suma es: "<<sum;
}
