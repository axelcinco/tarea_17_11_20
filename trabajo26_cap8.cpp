#include<iostream>
using namespace std;

int breakorreturn()
{
	while(true)
	{
		cout<<"ingrese s para salir o 'r' para  regresar: ";
		char ch;
		cin>>ch;
		if(ch=='s')
		{
			break;
		}
		if(ch=='r')
		{
			return 1;
		}
		
	}
	cout<<"nos salimos del ciclo \n ";
	return 0;
}

int main()
{
	int returnvalue{breakorreturn()};
	cout<<"funcin break or return regreso "<<returnvalue<<endl;
	return 0;
}
