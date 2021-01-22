#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   std::ifstream inf{"sample.dat"};
	inf.seekg(14,ios::cur);
	inf.seekg(-18,ios::cur);
	inf.seekg(22,ios::beg);
	inf.seekg(24);
	inf.seekg(28,ios::end);
	inf.seekg(0,ios::beg);
	inf.seekg(14,ios::end);
	return 0;
}
