/*
 *              operator overloading for unary operator
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
		comp operator-()
		{ 
			comp t;
			t.a = -a;
			t.b = -b;
			return t;
		}
		
};
int main()
{
	comp c1,c2;
	c1.setdata(3,4);
	c2 = -c1;// unary operator overloading // c1 call - operator and no argument is passed // c1.operator -();
	c2.showdata();
	return 0;
}
