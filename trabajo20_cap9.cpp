#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char buffer[255];
	cout<<"Ingrese una cadena: ";
	
	cin.getline(buffer,sizeof(buffer));
	
	int spaceFound{0};
	
	int bufferLength{static_cast<int>(strlen(buffer))};
	
	for(int index=0;index<bufferLength;++index)
	{
		if(buffer[index]==' ')
		
		++spaceFound;
	}
	cout<<"Ingresaste "<<spaceFound<<" Espacios! \n";
	return 0;
}
