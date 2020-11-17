#include<iostream>
#include<conio.h>
using namespace std;


const double gravedad{9.8};
double altura,sumatoria;
int segundos;

int main()
{
	cout<<"la gravedad es: "<<gravedad;
	cout<<endl;
	cout<<"ingrese la altura de la torre : "; cin>>altura;
	cout<<"ingrese los segundos: "; cin>>segundos;
	
	
	if(altura==0)
	{
		sumatoria=((gravedad*(segundos*segundos))/2);
		cout<<" la distancia es :"<<sumatoria;
		
	}
	else if(segundos==1)
	{
		
	  sumatoria=((gravedad*(segundos*segundos))/2);
		cout<<" la distancia es :"<<sumatoria;	
	}
		else if(segundos==2)
	{
		
	  sumatoria=((gravedad*(segundos*segundos))/2);
		cout<<" la distancia es :"<<sumatoria;	
	}
		else if(segundos==3)
	{
		
	  sumatoria=((gravedad*(segundos*segundos))/2);
		cout<<" la distancia es :"<<sumatoria;	
	}
		else if(segundos==4)
	{
		
	  sumatoria=((gravedad*(segundos*segundos))/2);
		cout<<" la distancia es :"<<sumatoria;	
	}
		else if(segundos==5)
	{
		
	  sumatoria=((gravedad*(segundos*segundos))/2);
		cout<<" la distancia es :"<<sumatoria;	
	}
	
	else
	{
		cout<<" la pelota no ha sido lanzada ";
	}
	return 0;
}

