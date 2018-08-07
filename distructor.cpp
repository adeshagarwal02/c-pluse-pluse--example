#include<iostream>
using namespace std;
class comp
{
	private:
		int a,b;
	public:
		comp()
		{
			cout<<"constructor invoke"<<endl;
		}
		~comp()
		{
			cout<<"Distructor invoke"<<endl;
		}
};
int main(void)
{
	comp c1;

	return 0;
}
