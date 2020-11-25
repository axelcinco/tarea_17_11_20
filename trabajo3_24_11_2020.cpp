#include<iostream>
using namespace std;

	
   
    int main()
    {
    	int num=0;
    	cout<<"ingrese un numero ";cin>>num;
    	
    	if(num>=0)
    	{
    		
    		cout<< num << "el numero es poritivo o cero"<<'\n';
    		cout<<" el doble de ese numero es: "<<num*2<<'\n';
    		
		}
		else
		{
		   	cout<< num << " es numero negativo "<<'\n';
		   	cout<< num << " el numero positivo es  "<<-num<<'\n';
    			
		}
    	
    	
    	 return 0;
	}
