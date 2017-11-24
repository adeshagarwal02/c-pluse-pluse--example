/*                        ADT = Abstract Data Type
 * 1) Data structure 
 * 2) set of operation
 *
 * 				Array ADT
 * 1) Data Structure 
 * capacity -> information of size of array.
 * lastIndex -> last filled block. (-1 for empty).
 * ptr -> will point to array(array is created outside the object).
 * 2) Set of operation
 * createArray()
 * setItem()
 * getItem()
 * removeItem()
 * editItem()
 * countItem()
 * sort()
 * search()
 * constructor()
 * copy constructor()
 * Distructor()
 * insertion operator overloading
 *
 */
#include<iostream>
using namespace std;
class ArrayADT
{
	private:
		int capacity,lastIndex;
		int *ptr;
	public:
		ArrayADT()
		{
			capacity = 0;
			lastIndex = -1;
			ptr = NULL;
		}
		void createArray(int capacity);
		int getItem(int Index);
		void setItem(int Index,int Value);
		void editItem(int Index, int Value);
		int countItems();
		void removeItem(int Index);
		int searchItem(int Value);
		void sortArray();
		friend ostream& operator<<(ostream&,ArrayADT);
		~ArrayADT()
		{
			delete []ptr;
		}
		ArrayADT(ArrayADT &list)
		{
			capacity = list.capacity;
			lastIndex = list.lastIndex;
			ptr = new int[capacity];
			for(int i = 0 ;i<=list.lastIndex;i++)
			{
				ptr[i] = list.ptr[i];
			}

		}
};
ostream& operator<<(ostream &dout, ArrayADT l)
{
	int i;
	if(l.lastIndex == -1)   ////////////////
		cout<<"list is empty"<<endl;
	for(i=0;i<l.countItems();i++)
	{
		cout<<" "<<l.getItem(i)<<endl;
	}
	return dout;
}
void ArrayADT::sortArray()
{
	int i,j,t;
	for(i=0;i<countItems();i++)
	{
		for(j=i+1;j<countItems();j++)
		{
			if(ptr[i]>ptr[j])
			{
				t = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = t;
			}

		}
	}
}
int ArrayADT::searchItem(int Value)
{
	int i;
	if(lastIndex == -1)
		cout<<"List is empty"<<endl;
	else
		for(i=0;i<=lastIndex;i++)
		{
			if(ptr[i] == Value)
				return i;
		}
	cout<<"There is no such value in Array"<<endl;
	return -1;
}
void ArrayADT::removeItem(int Index)
{
	int i;
	if(Index<0||Index>lastIndex)
		cout<<"Invalid Index"<<endl;
	else if(Index < lastIndex)
	{
		i = Index;
		while(i != lastIndex)
		{
			ptr[i] = ptr[i+1];
			i++;
		}
		lastIndex--;
	}
	else
		lastIndex--;

}
int ArrayADT::countItems()
{
	return lastIndex+1;
}
void ArrayADT::editItem(int Index,int Value)
{
	if(Index<0||Index>lastIndex)
	{
		cout<<"Invalid Index"<<endl;
	}
	else
		ptr[Index] = Value; 
}
void ArrayADT::setItem(int Index,int Value)
{
	int i;
	if(lastIndex == capacity-1)
		cout<<"Overflow"<<endl;
	else if(Index<0 || Index>=capacity)
		cout<<"Invalid index"<<endl;
	else if(Index>lastIndex+1)
		cout<<"you can't put value int this Index"<<endl; 
	else if(Index<=lastIndex)
	{
		i = ++lastIndex;
		for(;i>Index;i--)
		{
			ptr[i] = ptr[i-1];
		}
		ptr[Index] = Value;
	}
	else if(Index == lastIndex+1)
	{
		lastIndex++;
		ptr[Index]=Value;
	}
}
int ArrayADT::getItem(int Index)
{
	if(lastIndex == -1)
	{
		cout<<"Array is empty"<<endl;
		return -1;
	}
	if(Index>lastIndex||Index<0)
	{
		cout<<"Invalid Index"<<endl;
		return -1;
	}
	return (ptr[Index]);
}
void ArrayADT::createArray(int capacity)
{
	this->capacity = capacity;
	lastIndex = -1;
	ptr = new int [capacity];
}
int main()
{
	ArrayADT l1;
	l1.createArray(5);
	l1.setItem(0,10);
	l1.setItem(1,20);
	l1.setItem(2,30);
	cout<<l1;
	return 0;
}
