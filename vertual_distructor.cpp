/*                             Virtual Distructor
 *                              
 */

#include <iostream>
using namespace std;
class A
{
	private:
		int a,b;
	public:
		A()
		{
			cout<<"construtor of A"<<endl;
		}
		virtual ~A()
		{
			cout<<"distrutor of A"<<endl;
		}
};

class B:public A
{
	private:
		int x,y;
		int *p;
	public:
		B()
		{
			cout<<"construtor of B"<<endl;
			p = new int;
		}
		~B()
		{
			cout<<"distrutor of B"<<endl;
			delete p;
		}
};

int main(void)
{
	A *p;
	p = new B;
	delete p;

	return 0;
}
