#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	char ch;
	fin.open("myfile.txt");
	ch = fin.get();
	while(!fin.eof())
	{	
		cout<<ch;
		ch = fin.get();
	}
	cout<<endl;
	fin.close();
	return 0;
}
