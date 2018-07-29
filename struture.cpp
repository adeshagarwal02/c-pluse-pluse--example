#include<iostream>
using namespace std;
struct book
{
	int bookid;
	char title[20];
	float price;
	void input()
	{
		cout<<"Enter bookid,title and price"<<endl;
		cin>>bookid>>title>>price;
	}
	void display()
	{
		cout<<bookid<<" "<<title<<" "<<price<<endl;
	}
};
int main()
{
	book b1;// it not requred to write struct keyword it is optional 
	b1.input();
	b1.display();
	return 0;
}
