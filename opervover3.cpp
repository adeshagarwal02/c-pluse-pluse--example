/*
 *               unary  opretor overloading
 *
 *
 */
#include<iostream>
using namespace std;
class integer
{
	private:
		int x;
	public:
		void setdata(int a)
		{
			x = a;
		}
		void showdata()
		{
			cout<<"x="<<x<<endl;
		}
		integer operator++()//pre-increment
		{
			integer i;
			i.x= ++x;
			return i;// this code is working without return also 
		}
		integer operator++(int)//post-increment 
		{
			integer i;
			i.x= x++;
			return i; // this code is working without return also 
		}
};
int main()
{
	integer i1,i2,i3;
	i1.setdata(3);
	i2 = ++i1;
	i1.showdata();
	i2.showdata();
	i3 = i1++;
	i1.showdata();
	i3.showdata();
	return 0;
}
