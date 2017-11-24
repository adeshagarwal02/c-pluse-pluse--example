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
		Time operator +(Time);
};
void Time::setTime(int x,int y, int z)
{
	HR = x;
	MIN = y;
	SEC = z;
}
void Time::showTime()
{
	cout<<HR<<":"<<MIN<<":"<<SEC<<endl;
}
Time Time:: operator+(Time t)
{
	Time time;
	time.HR = HR+t.HR;
	time.MIN = MIN + t.MIN;
	time.SEC = SEC + t.SEC;
	return time;
}
void Time::normalize()
{
	MIN+=SEC/60;
	SEC=SEC%60;
	HR+=MIN/60;
	MIN=MIN%60;
	HR = HR%12;
}
int main()
{
	Time t1,t2,t3;
	t1.setTime(4,35,26);
	t2.setTime(9,50,45);
	t1.showTime();
	t2.showTime();
	t3 = t1+t2+t2;
	t3.normalize();
	t3.showTime();
	return 0;
}
