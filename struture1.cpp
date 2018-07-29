/*
 * we can use private and public inside the structure in c++ it will give data sicurity 
 * incapsulation 
 */
#include<iostream>
using namespace std;
struct book
{
	private:
		int bookid;
		char title[20];
		float price;
	public:
		void input()
		{
			cout<<"Enter bookid,title and price"<<endl;
			cin>>bookid>>title>>price;
			if(bookid<0)
			{
				bookid = -bookid;
			}
		}
		void display()
		{
			cout<<bookid<<" "<<title<<" "<<price<<endl;
		}
};
int main()
{
	book b1;
	b1.input();
	b1.display();
	return 0;
}
