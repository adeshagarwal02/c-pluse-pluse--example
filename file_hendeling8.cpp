#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	fstream fio;
	char ch;
	int pos;
	char buf[20];
	fio.open("rd_file.txt");
	fio.seekg(0,ios_base::end);
	pos = fio.tellg();
	fio.seekg(0,ios_base::beg);
	fio.read(buf,pos);
	cout<<buf<<endl;
	fio.seekg(-8,ios_base::end);
	fio.write("Adesh",5);
	fio.close();
	return 0;
}
