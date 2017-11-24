#include<iostream>
float area(float);
float area(float,float);
using namespace std;
int main()
{
	float r,l,b;
	cout<<"Enter radius of a circle\n";
	cin>>r;
	cout<<"Area of circle is"<<area(r);
	cout<<endl<<"Enter length and breath of rectrangle";
	cin>>l>>b;
	cout<<"Area of rectramgle is"<<area(l,b)<<endl;
	return 0;
}
float area(float r)
{
	return (3.14*r*r);
}
float area(float l, float b)
{
	return (l*b);
}
