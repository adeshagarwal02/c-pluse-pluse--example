/*                                Exceptions headling
 *
 * Exception is any abnormal behaviour, run time error.
 * c++ provides a built in error handling mechanism that is called exception handling 
 * using exception handiling, you can more easily manage and respond to runtime error.
 * Keywords 
 * try,catch, throw
 * program statement that you want to monitor for exception are contained in try block
 * if any exeption occurs within the try block,it is thrown(using throw)
 * The exception is caught, using catch, and processed.
 *
 */ 
#include<iostream>
using namespace std;

int main()
{
	int a,b,x;
	cout<<"Enter value of a and b"<<endl;
	cin>>a>>b;
	try
	{
		if((a-b)!= 0)
		{
			x = a/(a-b);
			cout<<"x ="<<x<<endl;
		}
		else
		{
			throw (a-b);
		}
	}
	catch(int x)
	{
		cout<<a<<"-"<<b<<"="<<a-b<<endl;
		cout<<"Devision by zero output will be indetermined"<<endl; 
	}
	return 0;
}
