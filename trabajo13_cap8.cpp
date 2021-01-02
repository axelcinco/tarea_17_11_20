#include<iostream>
using namespace std;
void colors()
{
	int opc;
  
   cout<<"digite 1.- si es rojo "<<endl;
   cout<<" digite 2.- si es verde "<<endl;
   cout<<" digite 3.- si es blanco "<<endl;
    cout<<" que color desea "; cin>>opc;
   switch(opc)
   {
   	case 1:
   		  cout<<" es rojo ";
   		break;
   		
   	case 2:
   		  cout<<" es verde ";
   		break;
   		case 3:
   			  cout<<" es blanco ";
   			  break;
   		default:
   			  cout<<" el color no pertenece ala bandera de mexico ";
   		
   }
   
}

int main()
{

   colors();
}
