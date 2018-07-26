#include<iostream>
using namespace std;
class comp
{
	private:
		int a,b;// this are called instance member variable
	public:
		void set_data(int x,int y)// this are called instance member function
		{a=x;b=y;}
		void show_data()
		{
			cout<<"a="<<a<<",b="<<b<<endl;
		}
		comp add(comp c)
		{
			comp temp;
			temp.a = a+c.a;
			temp.b = b+c.b;
			return temp;
		}
};
int main()
{
	comp c1,c2,c3;
	c1.set_data(2,3);
	c2.set_data(5,6);
	c3 = c1.add(c2);
	c3.show_data();
	return 0;
}`
