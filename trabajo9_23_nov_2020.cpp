#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
bool isalmostequal(double a,double b,double epsilon)

{
     return std::abs(a-b)<=epsilon<=(std::max(std::abs(a),std::abs(b))*epsilon);
     
     
	
}
