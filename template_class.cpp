/*                         Class  Template 
 * 
 * will create the genric class 
 * syntex is template<class x> 
 *
 */
#include<iostream>
using namespace std;
template <class x>
class ArrayList
{
	private:
		struct ControlBlock
		{
			int capacity;
			x *arr_ptr;
		};
		ControlBlock *s;
	public:
		ArrayList(int capacity)
		{
			s = new ControlBlock;
			s->capacity = capacity;
			s->arr_ptr = new x(s->capacity);
		}
		void addElement(int index, x data)
		{
			if(index>=0 && index<= s->capacity -1)
				s->arr_ptr[index] = data;
			else
				cout<<"\nArray index is not valid"<<endl;
		}
		void viewElement(int index,x &data)
		{
			if(index>=0 && index <= s->capacity -1)
				data = s->arr_ptr[index];
			else
				cout<<"\nArray index is not valid"<<endl;
		}
		void viewList()
		{
			int i;
			for(i=0;i<s->capacity;i++)
				cout<<" "<<s->arr_ptr[i]<<endl;
		}
};
int main()
{
	float data;
	ArrayList <float>list1(4);// telling x will be float type
	list1.addElement(0,32);
	list1.addElement(1,44);
	list1.addElement(2,22.22);
	list1.addElement(3,34);
//	list1.viewElement(0,data);
	list1.viewList();
//	cout<<"Value int the array is"<<data<<endl;
	return 0;
}
