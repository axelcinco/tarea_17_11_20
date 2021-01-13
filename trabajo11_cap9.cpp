#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int x{2};
	int y{4};
	cout<<"Antes del intercambio "<<x<<" y="<<y<<'\n';
	swap(x,y);
	cout<<"despues del intercambio x="<<x<<" y="<<y<<'\n';
	return 0;
}
