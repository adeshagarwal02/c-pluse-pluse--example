/*
 *                                         Inheritance CONSTRUCTOR and DISTRUTOR 
 *
 * child class construtor will call parent class construtor first than child class construtor will run 
 * So constructor of parent will exicute first than child constuctor
 * But coustructor of child will called first than perent constructor called 
 * If there is no defult construtor (paramitric constructor in present)in parent class than it is necessary to make your own constructor in child class this is because if we dont make constructor in child that compiler will try to call defult constructor of child and than try to execute defult constructor of parent since there is no defult construtor in parent class therefore there will be a compile time error.
 * 
 * In distrutor call and execution of the child will be first and then parent.
 *
 */
#include<iostream>
using namespace std;
class Base_class
{
	private:
		int a;
	public:
		Base_class(int x)
		{
			a = x;
			cout<<"Base_class construtor invoke"<<endl;
		}
		void showdata()
		{
			cout<<"Base_class:"<<a<<endl;
		}
		~Base_class()
		{
			cout<<"Base_class Distrutor invoke"<<endl;
		}
		
};

class Derived_class:public Base_class
{
	private:
		int b;
	public:
		Derived_class(int x,int y):Base_class(y) // child class constuctor calling parent class construtor 
		{
			b = x;
			cout<<"Derived_class construtor invoke"<<endl;
		}
		void showdata()
		{
			cout<<"Derive_class:"<<b<<endl;
			Base_class::showdata();
		}
		~Derived_class()
		{
			cout<<"Derived_class Distrutor invoke"<<endl;
		}
};
int main()
{
	Derived_class obj1(2,3);
	obj1.showdata();
	return 0;
}
