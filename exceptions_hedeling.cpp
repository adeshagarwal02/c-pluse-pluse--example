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
	cout<<"welcome"<<endl;
	try{
		throw 10;
		//throw;
		cout<<"In try"<<endl;
	}
	catch(int e){
		cout<<"Exception no:"<<e<<endl;
	}
	cout<<"last Line"<<endl;
	return 0;
}
