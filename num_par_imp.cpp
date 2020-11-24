#include<iostream>

using namespace std;
int num;

int parimp(int num)
{
	if(num==0)
	{
		cout<<"ingrese un numero mayor a 0";
		cout<<endl;
	}
	else if(num%2==0)
	{
		cout<<"el numero " <<num << " es par ";
		cout<<endl;
	}
	
	else
	{
		cout<<"el numero "<<num <<" es impar";
		cout<<endl;
	}
}

int main()
{
	
	cout<<"igrese un numero: ";cin>>num;
	
	parimp(num);
	
	system("pause");
}
