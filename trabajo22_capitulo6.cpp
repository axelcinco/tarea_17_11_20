#include<iostream>
using namespace std;
int main()
{
	
	cout<<"ingresa un numero positivo :";
	int num{};
	cin>>num;
	
	if(num<0){
		
		cout<<"usted ingreso un numero negativo "<<'\n';
		num=-num;
		cout<<"tu ingresaste el numero: "<<num;
	}
	else
	{
		cout<<"el numero que ingresaste es: "<<num;
	}
	return 0;
}
