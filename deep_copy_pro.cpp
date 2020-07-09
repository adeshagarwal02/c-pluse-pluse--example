#include <iostream>

using namespace std;

class dummy
{
	private:
		int a, b;
		int *p;
	public:

		dummy()
		{
			p = new int;
			cout <<"address of p= "<<p<<endl;
		}
		dummy (dummy &d)
		{
			a =d.a;
			b = d.b;
			p = new int;
			cout <<"copy cons address of p= "<<p<<endl;
			*p = *(d.p);
		}
		void showData()
		{
			cout << "a = "<<a<<" b = "<<b<<" *p="<<*p<<endl;
			cout <<"show data address of p= "<<p<<endl;
		}
		void setData(int x, int y, int z)
		{
			a = x;
			b = y;
			*p = z;
		}
};




int main(void)
{
	dummy d1,d2;
	d1.setData(2,3,4);
	d2 = d1;
	d2.showData();
	dummy d3 = d2;
	d3.showData();
	return 0;
}
