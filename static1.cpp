/*
 * static mamber variable declered inside the class they are also called class variable 
 * this variable will not get any memory inside the class 
 * They must be deffined autside the class
 * static member variable does not belong to any object, but to whole class.
 * there will be only one copy of static member variable
 * 
 * */
#include<iostream>
using namespace std;
class Account
{
	private:
		int balance;// instance member variable 
		static float roi;// static member variabe//class variable
	public:
		static float ab;
		void setBalance(int b)
		{balance = b;}
		static void setRoi(float r)//static member function//they can be called with and without object//this function can acess only static member variable 
		{roi = r;cout<<roi<<endl;}
		void setnew(float r)
		{roi =r; cout<<roi<<endl;}
};
float Account:: roi = 3.5;// by defult the value will be zero
float Account:: ab = 2.5;
int main()
{
	Account a1,a2;// roi variable is not there 
	Account::ab = 2;// static member variable declered in public 
	a1.setRoi(4.5);// calling wiith object
	a1.setnew(2.2);
	Account::setRoi(3.3);// calling stati member function without object 
	cout<<Account::ab<<endl;
	return 0;
}
