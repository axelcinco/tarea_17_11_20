#include<iostream>
#include<fstream>
int main()
{
	 std::ofstream outf{"sample.dat"};
	outf<<"axel  "<<'\n';
	outf<<"garcia"<<'\n';
	outf.close();
	
	outf.open("sample.dat",std::ios::app);
	outf<<"axel  "<<'\n';
	outf<<"garcia"<<'\n';
	outf.close();

}
