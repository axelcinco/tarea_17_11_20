//test visualizar cual es el mayor de los numeros con vectore 

#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int num[20],n,mayor=0;
	cout<<"digite el numero del arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;++i)
	{
		cout<<i+1<<"digite un  numero: ";
		cin>>num[i];
		
		if(num[i]>mayor)
		{
			mayor=num[i];
		}
	}
	cout<<" el numero mayor del vector es: "<<mayor<<endl;
	
	return 0;
}
