#include<iostream>
using namespace std;
class comp
{
	private:
		int a,b;
	public:
		comp(){a=0;b=0;}
		void setdata(int x,int y)
		{a = x; b = y;}
		friend comp add(comp, comp);
		void showdata()
		{cout<<a<<"+j"<<b;}
};
comp add(comp x,comp y)
{
	comp o;
	o.a = x.a + y.a;
	o.b = y.b + y.b;
	return o;
	
}
int main()
{
	comp obj1,obj2,obj3;
	obj1.setdata(5,6);
	obj2.setdata(6,7);
	obj3 = add(obj1,obj2);
	obj3.showdata();
	return 0;
}
