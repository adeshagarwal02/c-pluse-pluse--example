#include<iostream>
using namespace std;
class Time
{
	private:
		int HR,MIN,SEC;
	public:
		void setTime(int,int,int);
		void showTime();
		void normalize();
}
