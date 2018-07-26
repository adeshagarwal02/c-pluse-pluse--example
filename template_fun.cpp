/*                              Templete 
 *
 * The keyword templete is used to define function template and class template 
 * it is a way to make your function or class generalize as far as data type is concern 
 * Templete is to make 
 * 1) class templete
 * 2) function templete 
 * syntex of function templete 
 * template<class type>type func_name(type arg1,...);
 */
#include<iostream>
using namespace std;
class gratest
{
	public:
		template <class x> // x is a place holder 
		void big (x a, x b)
		{
			if (a> b)
				cout<<a<<":is greater"<<endl;
			else 
				cout<<b<<":is greater"<<endl;

		}
};
int main()
{
	gratest O;
	O.big(4,3);
	O.big(4.2,3.2);
	return 0;
}
