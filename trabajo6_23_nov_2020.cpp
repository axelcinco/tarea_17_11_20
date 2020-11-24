#include<iostream>
using namespace std;

int main()
{
	int x, y;
	
	cout<<"ingrese un numero: ";cin>>x;
	cout<<endl;
	cout<<"ingrese otro numero:";cin>>y;
	cout<<endl;
	
	if(x==y)
	{
		
		cout<<x<<"  es igual: " <<y<<'\n';
			
	}
	if(x!=y)
	{
	
	  cout<<x<<"  es diferente: " <<y<<'\n';	
		
	}
	if(x>y)
	{
		  cout<<x<<"  es mayor: " <<y<<'\n';	
	}
	if(x<y)
	{
		  cout<<x<<"  es menor: " <<y<<'\n';	
	}
	if(x>=y)
	{
		  cout<<x<<"  es mayor igual : " <<y<<'\n';	
	}
		if(x<=y)
	{
		  cout<<x<<"  es menor igual : " <<y<<'\n';	
	}
	
	return 0;
	
}
