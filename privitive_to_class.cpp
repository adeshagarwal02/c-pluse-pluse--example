/*                         primitive to class
 * Primitiive type to class type can be implemented through constructor.
 * constructor can alsobe called while when we are going to assigne another type value to an object.
 */
#include<iostream>
using namespace std;
class comp
{
	private:
		int a,b;
	public:
		comp(int k)
		{a = k; b = 0; cout << "construtor"<<endl;}
		void setData(int x,int y)
		{a = x;b =y;}
		void showData()
		{cout<<"a="<<a<<" ,b="<<b<<endl;}
};
int main()
{
	comp c1(4);
	int x = 5;
	c1.showData();
	c1 = x;
	c1.showData();
	c1 = 6;
	c1.showData();
	return 0;
}
