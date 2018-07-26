/*
 *       Pure virtual fuction 
 * A do nothing function called pure virtual function, declearing a function in a class but not defining it anyawere.
 * if any class contain Pure virtual function than object of that class can't be made
 */
#include<iostream>
using namespace std;
class person
{
	public:
		virtual void fun()=0;// do nothing function// pure virtual fuction 
};
class Student:public person
{
	public:
		void fun()
		{cout<<"student class"<<endl;}
}
/*
 *                      Abstract Class 
 *  Class containg pure virtule function,Object can,t be made for abstract class 
 * 
 */
