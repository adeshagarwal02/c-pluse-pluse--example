/*
 *             Friend Function insertion<< and extraction >>
 */
#include<iostream>
using namespace std;
class comp
{
	private:
		int a,b;
	public:
		void showdata()
		{cout<<a<<endl;}
		void setdata(int x,int y)
		{ a = x;b = y;}
	friend ostream& operator<<(ostream&,comp);
	friend istream& operator>>(istream&,comp&);
};
ostream& operator<<(ostream &dout,comp c)
{
	cout<<c.a<<"+j"<<c.b<<endl;
	return dout;
}
istream& operator>>(istream &din,comp &c)
{
	cin>>c.a>>c.b;
	return din;
}

int main(void)
{
	comp c1;
	cout<<"Enter a complex number";
	cin>>c1;
	cout<<"complex number:";
	cout<<c1;//operator<<(cout,c1);
	return 0;
}
		
