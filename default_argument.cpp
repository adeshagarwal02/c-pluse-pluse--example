/*
 * Default argument
 * we can set default value to the argument if the same number of argument is not passed during calling time of the function 
 */
#include<iostream>
using namespace std;
int add(int = 0,int =0,int =0);
int main()
{
	int a,b;
	cout<<add()<<endl;
	cout<<add(4)<<endl;
	cout<<add(4,3)<<endl;
	cout<<add(5,6,7)<<endl;
}
int add(int x, int y,int z)
{
	return(x+y+z);
}
