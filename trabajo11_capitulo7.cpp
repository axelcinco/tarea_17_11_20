#include<iostream>
#include<string>

enum itemtype
{
	itemtype_sword,
	itemtype_torch,
	itemtype_potion
	
};

std::string getitemname(itemtype itemtype)
{

if(itemtype==itemtype_sword)
    return "sword";
    
    if(itemtype==itemtype_torch)
       return "torch";
       
     if(itemtype==itemtype_potion)
      return "potion";
      else
      return "???";
      
}

int main()
{
	
	itemtype itemtype{itemtype_torch};
	std::cout<<" you are carryng a "<<getitemname(itemtype)<<'\n';
	return 0;
}
