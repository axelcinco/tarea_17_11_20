#include<iostream>
using namespace std;
void calcular()
{
	int num=0,num2=0,resul=0,opc;
	
	cout<<"digite un numero positivo y mayor que cero: ";cin>>num;
	cout<<endl;
	cout<<"digite un numero positivo y mayor que cero: ";cin>>num2;
	if (num<=0 || num2<=0)
	{
		cout<<"digite numeros mayores que cero "<<endl;
		
	}
	
	 else
	 {
	 	cout<<" digite 1.- si los quiere sumar "<<endl;
	 	cout<<"digite 2.- si los quiere restar "<<endl;
	 	cout<<"digite 3.- si los quiere multiplicar "<<endl;
	 	cout<<" digite 4.- si los quiere dividir "<<endl;
	 	cout<<" digite su opcion: ";cin>>opc;
	 	
	 	switch(opc)
	{
	 	case 1:
	 		  resul=num+num2;
	 		  cout<<" el resultado es: "<<resul<<endl;
		 break;	
		 case 2:
		 	resul=num-num2;
	 		cout<<" el resultado es: "<<resul<<endl;
		 break;
		 
		 case 3:
		 	resul=num*num2;
	 		cout<<" el resultado es: "<<resul<<endl;
		 	break;
		 	
		 	case 4:
            resul=num/num2;
	 		cout<<" el resultado es: "<<resul<<endl;
		   break;
		 	default:
			  cout<<"digite otra opcion ";
			  break;
			  	     
	 		
	 }//fin del switch
	 }
}

int main()
{
	calcular();
	return 0;
}
