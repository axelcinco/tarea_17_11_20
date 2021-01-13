#include<iostream>
#include<string_view>

using namespace std;

void println(string s)
{
	cout<<s<<endl;
}

int main()
{
	string_view sv {"Pelota"};
	
	sv.remove_suffix(3);
	
	string str{sv};
	
	println(str);
	println(static_cast<string>(sv));
	return 0;
}
