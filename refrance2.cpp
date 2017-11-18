#include<iostream>
using namespace std;
int y;
class ref
{
	private:
		int a;
	public:
		void setdata(int &k)
		{
			a = k;
		}
		void showdata()
		{ cout<<a<<endl;}
};
int main()
{
	ref r;
	y = 2;
	r.setdata(y);
	r.showdata();
	return 0;
}
