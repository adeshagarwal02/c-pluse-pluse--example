#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	ofstream fout;
	fout.open("New_file.txt");
//	fout.seekp(2);
	fout.write("Hi this is ade",14);
	fout.close();
	fout.open("New_file.txt",ios::app);
	fout.seekp(-1,ios::end);
	cout<<fout.tellp();
	fout.write("sh",2);
	fout.close();
	return 0;
}
