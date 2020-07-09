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
		~A()
		{
			cout<<"Distructor of A"<<endl;
		}
};

class B:public A
{
	private:
		int a,b;
	public:
		B()
		{
			cout<<"construtor of B"<<endl;
		}
		~B()
		{
			cout<<"Distructor of B"<<endl;
		}
};

int main(void)
{
	A *p;
	p = new B;
	delete p;
	return 0;

}
