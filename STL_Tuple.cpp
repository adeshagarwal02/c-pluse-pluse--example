#include<iostream>
#include<tuple>
using namespace std;
int main()
{
	tuple <string,int,int> t1;
	t1 = make_tuple("Adesh",29,2);
	cout<<get<0>(t1)<<endl;
	cout<<get<1>(t1)<<endl;
	cout<<get<2>(t1)<<endl;
	return 0;
}
