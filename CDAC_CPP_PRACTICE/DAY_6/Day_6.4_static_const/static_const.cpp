/*
 * static_const.cpp
 *
 *  Created on: 09-Mar-2019
 *      Author: sunbeam
 */

#include<iostream>

using namespace std;
class Test
{
private :
		int num1;
		int num2;
		static const int num3;
public:
		Test(void)
		{
			this->num1=12;
			this->num2=10;
			//Test::num3=20; dont assign here because then every object will get here only
		}

		void print()
		{
			cout<<"Values are ::"<<endl;
			cout<<"Num1	:	"<<num1<<endl;

			cout<<"Num2	:	"<<num2<<endl;
			cout<<"Num3	:	"<<Test::num3<<endl;
		}
};

const int Test::num3=20;

int main()
{
	Test t;

	cout<<"Size of Object	::	"<<sizeof(t)<<endl;
	t.print();

}




