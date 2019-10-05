/*
 * SameFunctionInMultipleClasses.cpp
 *
 *  Created on: 08-Mar-2019
 *      Author: sunbeam
 */

#include<iostream>
using namespace std;

class A
{
private :
		int num1;
public:
		A(void)
		{
			this->num1=10;
		}
		friend void sum();
};

class B
{
private :
		int num2;
public:
		B(void)
		{
			this->num2=20;
		}
		friend void sum();
};

void sum()
{
	A a;B b;

	int result=a.num1 + b.num2;

	cout<<"Result is ::"<<result<<endl;

}

int main()
{
	sum();

	return 0;
}
