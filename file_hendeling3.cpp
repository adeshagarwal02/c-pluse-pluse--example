/*                   File opening modes
 * ios::in      input/read
 * ios::out     output/write
 * ios::app     append
 * ios::ate     update
 * ios::binary  binary
 *
 */
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("file.txt",ios::binary);
	fout<<"my name is\nAdesh";
	fout.close();	
	return 0;
}
