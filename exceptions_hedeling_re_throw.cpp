#include<iostream>
using namespace std;
void disp()
{
	try
	{
		throw 10;
	}
	catch(int i)
	{
		throw;
	}
}
int main()
{
	try{
		disp();
	}
	catch(int n)
	{
		cout<<n<<endl;
	}
	return 0;
}

