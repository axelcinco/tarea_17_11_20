#include<iostream>
#include<conio.h>
using namespace std;
string  ope ="";
double num,num2,suma,resta,multi,divi;


int main()
{
	cout<<"ingrese un numero :"; cin>>num;
	
	cout<<endl;
	
	cout<<"ingrese otro numero: ";cin>>num2; 
	cout<<"digite la operacion aritmetica que desea hacer: ";cin>>ope;
    
    if(ope=="+")
    {
    	suma=num+num2;
    	cout<<"la suma es: "<<suma;
    	
	}
	
	else if(ope=="-")
    {
    	resta=num-num2;
    	cout<<"la resta es: "<<resta;
    	
	}
	else if(ope=="*")
    {
    	multi=num+num2;
    	cout<<"la multiplicacion  es: "<<multi;
    	
	}
		else if(ope=="/")
    {
    	divi=num/num2;
    	cout<<"la division   es: "<<divi;
    	
	}
	else {
		cout<<" la opcion que dijito no existe";
	}
	return 0;
}
