/*

 * Friend_fun_can't_be_outside_namespace.cpp
 *
 *  Created on: 08-Mar-2019
 *      Author: sunbeam

#include<iostream>

using namespace std;

namespace feb19
		{
		void print();
		class A
		{
		private:
				int no;
		public:
				A(void)
				{
						this->no=10;
				}
				friend void print();
		};//end of class

		}//end of namespace

void feb19::print(void)
{
	A a;
	cout<<"Number ::"<<a.no<<endl;
}
int main()
{
feb19::print();
	return 0;
}



*/



#include<iostream>
using namespace std;

namespace feb19
{
void print();
	class Test
	{
	private:
		int number;
	public:
		Test( void )
		{
			this->number = 10;
		}
		friend void print( void );
	};//end of class
}//end of namespace
void feb19::print( void )
{
	Test t;
	cout<<"Number	:	"<<t.number<<endl;
}
int main( void )
{
	feb19::print();
	return 0;
}
