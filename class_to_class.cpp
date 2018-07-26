/*
 * converstion through constructor
 * coverstion through casting operator 
 */
#include<iostream>
using namespace std;
class product
{
        private:
                int m,n;
        public:
                void setData(int x,int y)
                { m = x; n= y;}
                int getM()
                {return m;}
                int getN()
                {return n;}
};
class item
{
	private:
		int a,b;
	public:
		item()
		{}
		void showData()
		{cout<<"a="<<a<<",b="<<b<<endl;}
		item(product p)
		{
			a = p.getM();
			b = p.getN();
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
