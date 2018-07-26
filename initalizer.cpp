#include<iostream>
using namespace std;
class Dummy
{
	private:
		int a,b;
		const int x;
		int &y;
	public:
	Dummy(int &n):x(5),y(n)
	{}
};
void main()
{
	int m = 6;
	Dummy d1(m);
}
