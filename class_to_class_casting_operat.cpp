/*
 * converstion through constructor
 * coverstion through casting operator 
 */
#include<iostream>
using namespace std;
class item
{
        private:
                int a,b;
        public:
                item()
                {}
                item(int x, int y):a(x),b(y)
		{}
	//	item(int x, int y)
	//	{
	//		a = x;b = y;
	//	}
                void showData()
                {cout<<"a="<<a<<",b="<<b<<endl;}
};
class product
{
        private:
                int m,n;
        public:
                void setData(int x,int y)
                { m = x; n= y;}
		operator item()
		{
			item temp(m,n);
			return temp;

		}
};
int main()
{
	item i1;
	product p1;
	p1.setData(3,4);
	i1 = p1;
	i1.showData();
	return 0;
}
