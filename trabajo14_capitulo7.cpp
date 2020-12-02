#include<iostream>

struct Employe
{
	 short id;
	 int age;
	 double wage;
	 
};

void printinformation(Employe employe)
{
  std::cout<<" id:  "<<employe.id<<'\n';
  std::cout<<" age:  "<<employe.age<<'\n';
  std::cout<<" wage:  "<<employe.wage<<'\n';
  	
}

 int main()
 {
 	
 	Employe axel{14,32,24.5};
 	Employe maria{5,7,8};
 	printinformation(axel);
 	std::cout<<'\n';
 	printinformation(maria);
 	return 0;
 }
