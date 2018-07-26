/*                      Is a relationship
 * Banana is a fruit
 * Association 
 * -Aggregation 
 * -Composition
 * -Inheritance
 *  Is a relationship is always implemented as a public inheritance 
 *  
 */
#include<iostream>
using namespace std;
class Array 
{
	private:
		int a[10];
	public:
		void insert(int index, int value)
		{a[index] = value;}
		void show_data()
		{
			cout<<a[0]<<endl;
		}
};
class stack: private Array
{
	int top;
	public:
		void push(int value)
		{insert(top,value);
		 show_data();
		}
};
int main()
{
	stack s1;
	s1.push(34);
//	s1.insert(5,52);// not accesable
	return 0;
}
/*
class car
{
	private:
		int gear;
	public:
		void incrementgear()
		{
			if(gear<5)
				gear++;
		}

};
class sportscar:public car
{
	
};
*/
