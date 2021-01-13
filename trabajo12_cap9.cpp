#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	
	int array[]{30,50,20,10,40};
    sort(begin(array),end(array));
    
    for(int i=0;i<sizeof(array)/sizeof(*array);++i)
    {
    	cout<<array[i]<<'\n';
	}
	return 0;
}
