#include<iostream>
#include<iterator>
#include<string_view>
using namespace std;

int main()
{
	char vowels[]{'a','e','i','o','u'};
	string_view str{vowels,sizeof(vowels)};
	cout<<str<<endl;
	return 0;
}

