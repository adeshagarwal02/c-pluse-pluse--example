/*
 *                     friend function
 * Friend function is not a memeber of the class to which it is friend. 
 * Friend fuction declared in the class with friend keyword.
 * It must be define outside the class to which it is friend.
 * friend function can acess any member of the class to which it is friend
 * Friend function cannot access member of the class directly
 * It has no caller object
 * It should not be defined with membership label
 *
 */
#include<iostream>
using namespace std;
class comp
{
	private:
		int x,y;
	public:
		void setdata(int a, int b)
		{x = a; y = b;}
		void showdata()
		{cout<<"x="<<x<<"y="<<y<<endl;}
		friend void func(comp);
};
void func(comp c)
{
	cout<<"sum="<<c.x+c.y<<endl;
	c.x = c.x +1;
	c.y = c.y +1;
}
int main()
{
	comp c1;
	c1.setdata(2,3);
	func(c1);
	c1.showdata();
	return 0;
}
