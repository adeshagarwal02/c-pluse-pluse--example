/*
 *                         Friend function
 *                         
 *  Friend function can become a friend to more than one class.
 *  Friend fuction can be declered any where in public or private because it is not he member of the class
 */
#include<iostream>
using namespace std;
class B;// forward decleration 
class A
{
	private:
		int a;
	public:
		void setdata(int x)
		{ a = x;}
		void showData()
		{
			cout<<"Class A "<<a<<endl;
		}
		friend void fun(A,B);
};
class B
{
	private:
		int b;
	public:
		void setdata(int x)
		{ b = x;}
		void showData()
		{
			cout<<"Class B "<<b<<endl;
		}
		friend void fun(A,B);
};

void fun(A x, B y)
{
	cout<<x.a <<"+"<<y.b<<"="<<x.a+y.b<<endl;
	x.a = 10;
	y.b = 6;
}
int main()
{
	A obj1;
	B obj2;
	obj1.setdata(5);
	obj2.setdata(3);
	fun(obj1,obj2);
	obj1.showData();
	obj2.showData();
	return 0;
}
		
