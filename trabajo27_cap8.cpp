#include<iostream>
using namespace std;
int main()
{
	int count{0};
	bool keeplooping{true};
	while(keeplooping)
	{
		cout<<"ingrese s para salir  del ciclo,otro caracter para continuar: ";
		char ch{};
		cin>>ch;
		if(ch=='s')
		keeplooping=false;
		else
		{
			++count;
			cout<<"hemos iterado "<<count<<endl;
			
		}
		
	}
	return 0;
}
