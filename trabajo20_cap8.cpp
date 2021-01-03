#include<iostream>
using namespace std;

int main()
{
	int selection;
	do{
	cout<<"por favor seleccione una opcion \n";
	cout<<" 1.- sumar \n";
	cout<<"2.- restar \n ";
	cout<<"3.- multiplicar \n ";
	cout<<"4.- dividir \n ";
	cin>>selection;
	}
	 while(selection !=1 && selection !=2 && selection !=3 && selection !=4);
	 
	 cout<<"seleccione alguna opcion "<<selection<<'\n';
	 
	
}

