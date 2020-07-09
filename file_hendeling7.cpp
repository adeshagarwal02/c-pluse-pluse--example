#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	ofstream fout;
	int pos;
	fout.open("my_file.txt",ios::app|ios::ate);
	cout<< fout.tellp();
//	fout.seekp(-1,ios_base::end);
	fout.seekp(3,ios_base::beg);
	cout<< fout.tellp();
	fout.write("efgh",4);
	fout.close();
	return 0;
}
