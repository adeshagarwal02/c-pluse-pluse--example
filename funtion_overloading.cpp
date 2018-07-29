/*
 * function overloading
 * defination of the functions with same name 
 * when one fuction name is overloaded with diffrent jobs is kown as function overloading
 * it is way to implement polymorphism
 * rule of function overloading name of function should be same and the argument should be diffrent  
 */
#include<iostream>
using namespace std;
int  area(int, int);
float area(int);
int main()
{
	int r;
	cout<<"enter radius of a circule"<<endl;
	cin>>r;
	float A = area(r);
	cout<<"Area of the circle"<<A<<endl;
	int l,b,a;
	cout<<"Enter length andbreath of rectangle"<<endl;
	cin>>l>>b;
	a = area(l,b);
	cout<<"Area of Rectrangle is"<<a<<endl;
	return 0;
}
float area(int r)
{
	return (3.14*r*r);
}
int area(int l,int b)
{
	return (l*b);
}

