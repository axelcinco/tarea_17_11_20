#include<iostream>
using namespace std;

int main()
{
	char nom[200];
	cout<<"Ingrese su nombre: ";cin>>nom;
	cin.getline(nom,sizeof(nom)/sizeof(*nom));
	cout<<"Su nombre es: "<<nom<<endl;
	return 0;
}

