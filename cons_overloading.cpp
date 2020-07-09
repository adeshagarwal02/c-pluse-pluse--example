/*                               constructor
 *
 * if there is no constructor complier makes two constructor which is defult constructor and copy constructor 
 * if we make one constructor but not copy constructor than compiler will make the copy constructor 
 * if we make copy costructor compiler will not make any constructor.
 *
 *                                 Distructor 
 * districtor cant be static 
 * distrctor cant return 
 * distructor can't take argument
 * distructor invoke when object destroyed.
 * distructor cant be overloaded
 * distructor is defined to release resources allocated to an object. 
 *
*/
#include<iostream>
using namespace std;
class com
{
	private:
		int a,b;
		
	public:
		com(int x, int y)  //peramitarized 
		{
	//		cout<<"C1"<<endl;
			a = x;
			b = y;
		}
		com(int x)// peramitrized 
		{
	//		cout<<"C2"<<endl;
			a = x;b = 0;
		}
		com()
		{// defaut 
	//		cout<<"C3"<<endl;
		}
/*		com(com &c)// copy constractor 
		{
			a = c.a;
			b = c.b;
		}
*/		~com()
		{
			a = 0; b = 0;
			cout<<"distructor invoke "<<a<<","<<b<<endl;
		}
		void print()
		{
			cout<<a<<","<<b<<endl;
		}
};
int main()
{
	com c1(2,3),c2(2),c3,c4 = 4,c6=com(2);
	com c5 = c1;//it can also be written as c5(c1)
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	c5.print();
	return 0;
}
