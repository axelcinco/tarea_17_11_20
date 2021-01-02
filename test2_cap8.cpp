#include<iostream>
using namespace std;

void animales()
{
	int opc;
	cout<<" digite 1.- si es gato"<<endl;
	 	cout<<"digite 2.- si es cerdo "<<endl;
	 	cout<<"digite 3.- si es pollo "<<endl;
	 	cout<<" digite 4.- si es avestruz "<<endl;
	 	cout<<" digite su opcion: ";cin>>opc;
	switch(opc)
	{
		case 1:
			cout<<" es un gato y tiene 4 patas "<<endl;
			 break;
	    case 2:
	    	cout<<" es un cerdo y tiene 4 patas "<<endl;
	    	break;
	    case 3:
	    	 cout<<" es un pollo y tiene 2 patas "<<endl;
	    case 4:
	    	cout<<"es un avestruz y tiene dos patas "<<endl;
		    break;
		default:
		   cout<<"el animal que digito no esta en mi lista "<<endl;
		   break;	
	}
}

int main()
{
	animales();
	return 0;
}

