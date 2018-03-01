#include<iostream>
#include<array>
using namespace std;
int main(void)
{
	int i;
	array<int,4> data_array={11,22,33,44};
	array<int,4> data_array1={1,2,3,4};
	cout<< data_array.at(2)<<endl;
//	cout<< data_array.at(5)<<endl;
	cout<< data_array[3]<<endl;
	cout<< data_array.back()<<endl;
	cout<< data_array.front()<<endl;
	//data_array.fill(2);
	data_array.swap(data_array1);
	for(i=0;i<4;i++){
		cout<< data_array[i]<<endl;
	}
	for(i=0;i<4;i++){
		cout<< data_array1[i]<<endl;
	}
	cout<<data_array.size()<<endl;
	return 0;
}
