/*
 *                          Inheritance
 *
 * It is a process of inheriting properties and behaviour of existing class into a new class
 * Existing class = old class = parent class = Base class
 * New class = child class = Derived Class
 * Type of Inheritance 
 * 1) Single Inheritance
 * 2) Multilevel Inheritance 
 * 3) Multiple Inheritance 
 * 4) Hierarchical Inheritance
 * 5) Hybrid Inheritance  
 */
#include<iostream>
using namespace std;
class Base_class
{
	private:
		int a,b,c;
	protected:
		void addvalue()
		{c = a + b;}
	public:
		void setvalue(int x,int y)
		{ a =x;b=y;}
		void display()
		{ cout<<c<<endl;}
};
class Drived_class:public Base_class
{
	public:
		void sum()
		{addvalue();}
};
int main()
{
	Drived_class obj1;
	int a,b;
	cout<<"please enter the value of a and b:";
	cin>>a>>b;
	obj1.setvalue(a,b);
	obj1.sum();
	obj1.display();
	return 0;
}
/*
 * visibility Mode 
 * private,protected,public
 * 
 * /
