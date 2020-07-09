#include<iostream>
using namespace std;

class car
{
	public:
		void shiftGear(){}
		void f2(){}
};
class SportsCar:public car
{
	//void gareChange(){}
	void shiftGear(){}   //Method Overriding
	void f2(int x){}     //Metord Hiding
};
void main()
{
	SportCar obj;
	obj.shiftGear();//SportsCar 
//	obj.gareChange();//SportsCar
	obj.f2();//error
	obj.f2(4);//B
}

