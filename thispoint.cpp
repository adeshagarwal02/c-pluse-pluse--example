/*
 *                       Object Pointer and this pointer 
 *
 * The pointer which contains the address of the object is known as object pointer
 * this is a keyword  
 * this pointer is a local object pointer in every instance member function containing address of the caller object
 * this can not be modify.
 * it is used to refer caller object in member function
 *
 */

#include<iostream>
using namespace std;
class Box
{
	private:
		int l,b,h;
	public:
		void getdem(int l,int b,int h)
		{
			this->l = l;// solving the problem of name conflict which is one of uses of this pointer 
			this->b = b;//name conflict solved 
			this->h = h;//name conflict solved
		}
		void showdem()
		{
			cout<<"l="<<l<<endl<<"b="<<b<<endl<<"h="<<h<<endl;
		}
};
int main()	
{
	Box b1;
	b1.getdem(2,3,4);
	b1.showdem();
	return 0;
}
