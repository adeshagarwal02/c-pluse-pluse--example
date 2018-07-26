#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("myfile.txt");
	fout<<"hello";
	fout.close();
	return 0;
}
