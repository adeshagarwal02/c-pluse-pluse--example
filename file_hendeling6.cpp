#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	ofstream fout;
	int pos;
	fout.open("my_file.txt");
	cout<< fout.tellp();
//	fout.seekp(-2,ios_base::end);
//	cout<< fout.tellp();
	fout.write("Hi",2);
	fout.close();
	return 0;
}
