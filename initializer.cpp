/*                   Initializer list
 * 
 */

#include<iostream>
using namespace std;
class dummy
{
	private:
		int a,b;
		const int x;
		int &y;
	public:
		dummy(int &n):a(5),b(6),x(8),y(n)
		{}
		void display()
		{
			cout<<"a ="<<a<<",b="<<b<<",x ="<<x<<",y="<<y<<endl;
		}
};
int main()
{
	int m =6;
	dummy d(m);
	d.display();
	return 0;
		
}
