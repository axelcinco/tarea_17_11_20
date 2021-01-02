#include<iostream>
using namespace std;

enum class errorcode
{
	success,
	negative_number
};

errorcode dosomething(int value)
{
	if(value<0)
	{
		return errorcode::negative_number;
		
	}
	return errorcode::success;
	
}

  int main()
  {
  	
  	std::cout<<"ingrese un numero positivo ";
  	int x{};
  	cin>>x;
  	
  	if(dosomething(x)==errorcode::negative_number)
  	{
  	    cout<<"ingresaste un numero negativo \n ";	
	}
	else
	{
		cout<<"funciono ";
		
	}
	return 0;
  }
