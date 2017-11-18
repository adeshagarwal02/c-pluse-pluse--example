/*
 *               Friend Function and operator overloading 
 *  
 *
 */
#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int a,b;
	public:
		void showdata()
		{cout<<a<<"+j"<<b<<endl;}
		void setdata(int x, int y)
		{ a = x;b = y;}
		friend A operator+(A,B);
};
class B
{
	private:
		int a,b;
	public:
		void setdata(int x,int y)
		{ a = x;b = y;}
		friend A operator+(A,B);
};
A operator+(A x, B y)
{
	A temp;
	temp.a = x.a + y.a;
	temp.b = x.b + y.b;
	return temp;
}
int main()
{
	A obj1,obj3;
	B obj2;
	obj1.setdata(3,4);
	obj2.setdata(5,6);
	obj3 = obj1 + obj2;// + operator is called and c1 and c2 is passed 
	obj3.showdata();
	return 0;
}
		
