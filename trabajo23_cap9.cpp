#include<iostream>
#include<string_view>
using namespace std;

int main()
{
	string_view str{" Manzana "};
	cout<<str<<'\n';
	str.remove_prefix(1);
	cout<<str<<'\n';
	str.remove_prefix(2); 
	cout<<str<<endl; 
	return 0;
}
