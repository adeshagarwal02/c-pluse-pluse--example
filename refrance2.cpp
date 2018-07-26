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
			k++;
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
	cout << y<<endl;
	y = 4;
	cout << y<<endl;

	return 0;
}
