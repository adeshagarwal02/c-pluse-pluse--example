/*
 *                          operator overloading
 *
 *  when operator symbol is used for more than one work (multiple jobs)
 *  It is way to implement the polymorphism 
 *  Any symbol can be used as fuction name , if it is valied operator in C language and  if it is proceded by operetor keyword
 *  Can't  overload sizeof and ?: operator
 * 
 */
#include<iostream>
using namespace std;
class comp
{
	int a,b;
	public:
		void setdata(int x, int y)
		{ a = x; b = y;}
		void showdata()
		{cout<<"a="<<a<<" "<<"b="<<b<<endl;}
 	comp operator +(comp x)
		{ 
			comp t;
			t.a = a + x.a;
			t.b = b + x.b;
			return t;
		}
		
};
int main()
{
	comp c1,c2,c3,c4;
	c1.setdata(3,4);
	c2.setdata(5,6);
	c3 = c1 + c2;// or can be writen as c1.operator +(c2);
	c4 = c3.operator +(c2);
	c3.showdata();
	c4.showdata();
	return 0;
}
