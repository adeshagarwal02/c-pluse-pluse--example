#include<iostream>
using namespace std;
class A
{
	public:
		void f1(){cout<<"f1 class A"<<endl;}
		virtual void f2(){cout<<"f2 class A"<<endl;}
		virtual void f3(){cout<<"f3 class A"<<endl;}
		virtual void f4(){cout<<"f4 class A"<<endl;}
};
class B:public A
{
	public:
		void f1(){cout<<"f1 class B"<<endl; }
		void f2(){cout<<"f2 class B"<<endl;}
		void f4(int x){cout<<"f4 class B"<<endl;}

};
int main()
{
	A *p;
	B o2;
	p =&o2;
	p->f1();//EB class A will run 
	p->f2();//LB class B will run
	p->f3();//LB class A will run
	p->f4();//LB class A will run
//	p->f4(5);//EB class A will run /error will come 
	return 0;
}
/*Rules 
 * if any class have a virtual function than the compiler create a variable pointer which is *vptr
 *but its child class will not have *vptr it will inherated from the parent 
 *Compile will also make a static array this array will contain pointer of the vertual function this array is called vtable. Dcendendent class will also have vtable 

 */
