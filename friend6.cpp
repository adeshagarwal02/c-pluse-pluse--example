/*                       Friend function
 * Member function of one class can become friend to another class
 */
#include<iostream>
using namespace std;
class A
{
	public:
		void fun()
		{
			cout<<"class A"<<endl;
		}
};
class B
{
	friend void A::fun();
};
int main()
{
	B obj1;
	return 0;
}
/*
 * This program is not working find the solution for it 
 */
