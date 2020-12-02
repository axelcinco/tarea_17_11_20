#include<iostream>

struct point3d
{
	double x;
	double y;
	double z;
	
};

point3d getzeropoint()
{
	point3d temp{0.0,0.0,0.0};
	return temp;
}

point3d getzeropoint2()
{
	point3d temp{0.0,0.0,0.0};
	
}
point3d getzeropoint3()
{
	point3d temp{};
	
}

int main()
{
	
	point3d zero=getzeropoint();
	
	if(zero.x==0.0 && zero.y==0.0 && zero.z==0.0)
	{
		std::cout<<" este punto es cero";
		
	}
	else
	{
		std::cout<<"este punto no es cero";
		
	}
	return 0;
}
