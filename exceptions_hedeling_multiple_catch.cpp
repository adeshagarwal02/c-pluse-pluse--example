#include<iostream>
using namespace std;
void test(int x)
{
	try
	{
		if(x>0)
		{
			throw x;
		}
		else
		{
			throw 'x';
		}
	}
	catch(int x)
	{
		cout<<"cought a integer:"<<x<<endl;
	}
	catch(char x)
	{
		cout<<"cought a chareter:"<<x<<endl;
	}
}
int main()
{
	test(5);
	test(-3);
	return 0;
}
