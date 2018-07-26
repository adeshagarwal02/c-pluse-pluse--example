/*
 *             Friend Function unary operator 
 */
#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		void showdata()
		{cout<<a<<endl;}
		void setdata(int x)
		{ a = x;}
		friend A operator-(A);
};
A operator-(A x)
{
	A temp;
	temp.a = -x.a;
	return temp;
}
int main()
{
	A obj1,obj2;
	obj1.setdata(2);
	obj1.showdata();
	obj2 =-obj1;// - operator is called with argument obj1//operator -(obj1)
	obj2.showdata();
	return 0;
}
		
