/*                   Initializer list
 * 
 */

#include<iostream>
using namespace std;
class dummy
{
	private:
		int a,b;
		const int x;  //requred intilizer list
		int &y;//required initilizer list
	public:
		dummy(int &n):a(5),b(6),x(8),y(n)
		{}
		void display()
		{
			cout<<"a ="<<a<<",b="<<b<<",x ="<<x<<",y="<<y<<endl;
			cout <<"address of y = "<<&y<<endl;
		}
};
int main()
{
	int m =6;
	cout <<"address of m = "<<&m<<endl;
	dummy d(m);
	d.display();
	return 0;
		
}
