/************************************************************************************************************************************************************
 * namepace is a group of decleration
 * can be writen on both source and header
 * namespace is a conteiner of identifier.
 * it puts the names of its member in the distinct space so that they don't confilit with the name in other namespaces or global namespace
 *
 * namespace Myspace{
 *   //decleration
 * }
 * Does not terminate with ;
 * The namespace defination must be done at globalscope or nested inside another namespace.
 * alias name can also be used   -->  namespace ms = Myspace;
 *
 * There can be unnamed namespace.
 * namespace canbe extended --> A namespace defination can be continued and extednde over mulutiple files, they are not redefined or overridden
 *
 * namespace ms
 * {
 * 	int a
 * 	void f1();                          ---------------------
 * }								|							
 *								|
 *								|
 * namespace ms							|------->  namespace ms   
 * {								|	   {
 * 	int x;							|             int a,x;
 * 	void f2();                        ----------------------	      void f1();
 * }									      void f2();
 * 									   }
 * "using" keyword allows you toimport an entire namespace into your program with a global scope, it can be used to import anamespace into another namespace or any prog
 *
 * namespace Mynewspace{
 * 	using namespace Myspace;
 * 	int z;
 * 	class A;
 * }
 *
 * **********************************************************************************************************************************************************/

#include <iostream>
namespace Myspace{

	int a;
	int f1(void);
	class A
	{
		public:
			void fun(void);
			/*{
				std::cout << "this is class A fun()"<<std::endl;
			}*/
	};

}

int Myspace::f1(void)    // using namespace Myspace if written than also we have to write Myspace:: during defintion
{
	std::cout<<"Hello f1"<<std::endl;
	return 0;
}
void Myspace::A::fun(void)
{
	std::cout<<"this is class A fun()"<<std::endl;
}
int main(void)
{
	Myspace::A obj1;
	Myspace::a = 5;
	std::cout<<"Value of a = "<<Myspace::a<<std::endl;
	obj1.fun();
	Myspace::f1();
	return 0;
}
