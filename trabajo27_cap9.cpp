#include<iostream>
#include<cstring>
#include<string_view>
using namespace std;

int main()
{
	string_view sv{"pelota"};
	
	sv.remove_suffix(3);
	
	string str{sv};
	
	auto szNullTerminated{str.c_str()};
	
	cout<<"Tiene "<<strlen(szNullTerminated)<<" Letra(s)"<<endl;
	return 0;
}
