/*                          Virtual function
 * The pointer to the object of a pearent class can also point to the child class (or Disendent classes)
 * but pointer to the object of child class cannot point to its pearent class.
 *
 *
 */
#include<iostream>
using namespace std;
class A
{
	public:
		virtual void f1()// doing late binding of a function 
		{cout<<"I am class A f1()\n";}
		void f2()
		{cout<<"I am class A f2()\n";}
};
class B: public A
{
	public:
		void f1()
		{cout<<"I am class B f1()\n";}
		void f2()
		{cout<<"I am class B f2()\n";}
};
int main()
{
	A *p,o1;
	B o2;
	p = &o2;// pointer is a A type containg address of B type 
	p->f1();//B         
	p->f2();//A
	return 0;
}
/*Due to early binding compiler will search the defination of f2 in class A 
 * Since we have put vartual keyword on function f1 in class A therefore there will be late binding due to which compiler will search the  function f1 defination in class of object to which pointer is pointing which is b 
 *
 */
