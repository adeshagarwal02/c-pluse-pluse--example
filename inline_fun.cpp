/*
 * inline function 
 * in this whole function will copy on the place from were it is called 
 * it is not necceary that fuction with inline will become inline function mostly in the case of recurtion, loop,switch and goto statements since it will consume more memory 
 * once the funtion is defined inline in the deffintion than it is not necessory to write inline in decleration
 * Advantage of inline function is that they reduce funtion over heads 
 * inline function should be small in size or else it will consume more memory 
 */
#include<iostream>
using namespace std;
inline void func();
int main()
{
	cout << "you are main"<<endl;
	func();
	return 0;
}
void func()
{
	cout<<"you are in_fun"<<endl;
}
