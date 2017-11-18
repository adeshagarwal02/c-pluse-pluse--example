/*Refrence variable 
 int &y = x  should be intialised at time of making
y++; will incriment the value of x 
 */

/* 
 * Refrence varable is an internal pointer 
 * must be intialized during declriation
 * it can be intialized with already declered variables only 
 *Refrence variable cannot be updated
 */

#include<iostream>
using namespace std;
int x = 2;
int &y = x;
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
	r.setdata(y);
	r.showdata();
	return 0;
}
