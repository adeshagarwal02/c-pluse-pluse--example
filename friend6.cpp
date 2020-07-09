/*                       Friend function
 * Member function of one class can become friend to another class
 */
#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int a;
	public:
		void fun(B,A);
		A()
		{a = 2;}
};
class B
{
	private: 
		int b;
	public:
//	friend class A;
	B()
	{b = 5;}
	friend void A::fun(B,A);
	// friend class A // all funtion present in class A will be friend of Class B
};
void A::fun(B x,A y)
{
	cout << x.b+y.a<<endl;
}
int main(void)
{
	B obj1;
	A obj2,obj3;
	obj3.fun(obj1,obj2);

	return 0;
}
