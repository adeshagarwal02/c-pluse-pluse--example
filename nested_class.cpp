#include <iostream>
#include <string.h>
using namespace std;

class student
{
	private:
		int rno;
		char name[20];
		class Address
		{
			private:
				int hno;
				char street[20];
				char city[10];
			       	char state[10];	
				char pincode[6];
			public:
				void setAddress(int h,char *s,char *c,char *st,char *p)
				{
					hno = h;
					strcpy(street,s);
					strcpy(city,c);
					strcpy(state,st);
					strcpy(pincode,p);
				}
				void showAddress(void)
				{
					cout<<hno<<", ";
					cout<<street<<", ";
					cout<<city<<", ";
					cout<<state<<", ";
					cout<<pincode<<endl;
				}
		};
	public:
		Address house;
		void setRoll(int no)
		{
			rno = no;
		}
		void setName(char *nam)
		{
			strcpy(name,nam);
		}
		void showIdentity(void)
		{
			cout<<name<<endl;
			cout<<rno<<endl;
			house.showAddress();

		}

};

int main(void)
{
	student s1;
	s1.setRoll(2);
	s1.setName("Adesh Agarwal");
	s1.house.setAddress(11,"jagjivan","Agra","U.P.","282006");
	s1.showIdentity();
	return 0;
}
