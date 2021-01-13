#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char nom[20]{"axel garcia"};
	cout<<"mi nombre es: "<<nom<<endl;
	cout<<nom<<" tiene "<<strlen(nom)<<" letras"<<endl;
	cout<<nom<<" tiene "<<sizeof(nom)/sizeof(*nom)<<" caraceteres  "<<endl;
	
	return 0;
}
