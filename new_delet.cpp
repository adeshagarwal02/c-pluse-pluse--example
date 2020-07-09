/*
 *                                       New and delete
 * SMA: Static memory Allocation 
 * DMA: Dynamic memory Allocation
 * new 
 * int *p = new int;
 * float *q = new float;
 * comp *ptr = new comp;
 * float *qt = new float[5];
 *
 * delete
 * delete p;// will not delete p but will delete the address which contains 
 * delete q;
 * delete ptr;
 * delete []qt;
 */


#include <iostream>

using namespace std;

int main(void)
{
	int *p;
	p = new int;
	*p= 10;
	cout <<*p<<endl;
	delete p;
	p = new int;
	*p= 23;
	cout <<*p<<endl;
	delete p;
	p = new int [5];
	*(p+5) = 30;
	cout << *(p+5)<<endl;
	delete p;
	return 0;
}
