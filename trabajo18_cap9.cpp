#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	 char source[]{"copia esta cadena "};
	  char destino[50];
	  strcpy(destino,source);
	  cout<<destino<<endl;
	  
	return 0;
}
