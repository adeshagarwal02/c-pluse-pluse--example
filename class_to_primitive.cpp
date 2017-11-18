/*                      class to  primitive 
 *
 */
#include<iostream>
using namespace std;
class comp
{
	private:
		int a,b;
	public:
		void setData(int x,int y)
		{
			a = x; b= y;
		}
		void showData()
		{cout<<"a="<<a<<",b="<<b<<endl;}
		operator int()
		{
			return(b);
		}
};
int main()
{
	comp c1;
	c1.setData(3,4);
	c1.showData();
	int x;
	x = c1;
	cout<<"x="<<x<<endl;
	return 0;
}

