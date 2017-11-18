/*
 * constructor is a instance member fuction of a class.
 * the name of the constructor is same as the name of the class
 * it has no return type, so can't use return keyword.
 * it must be an instance member fuction, that is, it can never be static
 * costructor is implicitly invoke when an object is created 
 * used to solve problem of intialization.
 *
 */
#include<iostream>
using namespace std;
class comp
{
	private:
		int a,b;
	public:
		comp()
		{ a = 0; b = 0;
			cout<<"hello constructor"<<endl;}
};
int main()
{
	comp c1,c2,c3;
	return 0;
}
