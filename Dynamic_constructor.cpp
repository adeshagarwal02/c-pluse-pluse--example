/*                   Dynamic constructor 
 * Costructor can allocate dynamically created memory to the object.
 * Thus, object is going to use memory region, which is dynamically created by constructor 
 *
 */
#include<iostream>
using namespace std;
class dynamic
{
	private:
		int a,b,*p;
	public:
		dynamic(int x, int y , int z)
		{
			a = x; b = y; 
			p = new int;
			*p = z;
		}
		dynamic()
		{
			a = 0;b = 0;
			p = new int;
			*p = 0;
		}
		void display()
		{
			cout<<"a ="<<a<<",b ="<<b<<",*p ="<<*p<<endl;
			cout << "address of p" << p <<endl;
		}
};
int main(void)
{
	dynamic d1,d2(2,3,4),d3 = d2;
	d1.display();
	d2.display();
	d3.display();
	return 0;
}
