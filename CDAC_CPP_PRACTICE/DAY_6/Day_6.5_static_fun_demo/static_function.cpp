/*
 * static_function.cpp
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
		static int num3;
public:
		Test(void)
		{
			this->num1=12;
			this->num2=10;
			//Test::num3=20; dont assign here because then every object will get here only
		}
		void setNum1( int num1 )
		{
			this->num1 = num1;
		}
		void setNum2( int num2 )
		{
			this->num2 = num2;
		}

		static void setNum3(int num3)
		{
			Test::num3=num3;
		}
		void print()
		{
			cout<<"Values are ::"<<endl;
			cout<<"Num1	:	"<<num1<<endl;

			cout<<"Num2	:	"<<num2<<endl;
			cout<<"Num3	:	"<<Test::num3<<endl;
		}
};

int Test::num3=20;

int main()
{
	Test t;

	Test::setNum3(200);

	cout<<"Size of Object	::	"<<sizeof(t)<<endl;

	t.print();

}

