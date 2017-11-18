/*                          Method overriding
 * if the method prototype of the prerent and child class is identical than it is called method overriding 
 * if only method prototype name of the parent and child class is same than it is called method hiding  
 *
 */
#include<iostream>
class a
{
	public:
		void f1(){}
		void f2(){}
};
class b:public a
{
	void f1(){}//Method Overriding
	void f2(int x){}//Metord Hiding
};
void main()
{
	b obj;
	obj.f1();//B
//	obj.f2();//error
	obj.f2(4);//B
}
/*
 *                        Early binding concept 
 * compile will search the function in class of the object if there is no function in that class than it will search in the parent class and bind it with object 
 * so compile will first method(function) in the object class than in the pearent class 
 */
