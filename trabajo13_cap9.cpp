#include<iostream>
using namespace std;
int main()
{
	char micadena[]{"axel"};
	const int length{static_cast<int>(sizeof(micadena)/sizeof(*micadena))-1};
	cout<<micadena<<" Tiene "<<length<<" Caracteres. \n";
	
	for(int index=0;index<length;++index)
		cout<<static_cast<int>(micadena[index])<<" ";
		cout<<endl;
		return 0;
}
