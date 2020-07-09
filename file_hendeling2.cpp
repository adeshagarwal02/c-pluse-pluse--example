#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	char ch;
	fin.open("myfile.txt");
	ch = fin.get(); //fin >> ch;
	while(!fin.eof())
	{	
		cout<<ch;
		ch = fin.get();  // fin >>ch;
	}
	cout<<endl;
	fin.close();
	return 0;
}


// extraction oprator ">>"  will consider space,Tab,/n as an delimiter operator it will not read it  
