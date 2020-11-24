#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
bool isalmostequal(double a,double b,double epsilon)

{
     return std::abs(a-b)<=epsilon<=(std::max(std::abs(a),std::abs(b))*epsilon);
     
     
	
}

bool aproximado(double a,double b,double abepsilon,double realepsilo)
{
	double diff{std::abs(a-b)};
	 if (diff<=abepsilon)
	 return true;
	 return(diff<=(std::max(std::abs(a),std::abs(b))*realepsilo));
	 
	 
}
int main()
{
	double a{0.1+0.1+0.1+0.1+0.1+0.1+0.1};
	cout<<isalmostequal(a,1.0,1e-8)<<'\n';
	cout<<isalmostequal(a-1.0,0.0,1e-8)<<'\n';
	cout<<aproximado(a-1.0,0.0,1e-12,1e-8);
	
	
}
