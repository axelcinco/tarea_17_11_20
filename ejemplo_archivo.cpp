#include<iostream>
#include<fstream>
using namespace std;

fstream archivo3;
int suma=0,num1=0,num2=0;
int main()
{
	archivo3.open("ejemplo2.txt,",ios::app);
	cout<<"dame numero "<<endl;
	cin>>num1;
	archivo3<<num1<<endl;
	cout<<" dame numero "<<endl;
	cin>>num2;
	archivo3<<num1<<endl;
	suma=num1+num2;
	archivo3<<suma<<endl;
	cout<<"la suma de los nuemros es "<<suma ;
	archivo3.close();
	return 0;
	
}
