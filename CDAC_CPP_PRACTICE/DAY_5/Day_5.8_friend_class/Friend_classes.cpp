/*
 * Friend_classes.cpp
 *
 *  Created on: 08-Mar-2019
 *      Author: sunbeam
 */


#include<iostream>
using namespace std;
class A
{
public:
	void add();
	void sub();
	void mul();

};

class B
{
private :
	int num1;
	int num2;
public:
	B(void)
	{
		this->num1=10;
		this->num2=20;

	}
	friend class A;
};


void A::add()
{
	B obj;
	int result=obj.num1 + obj.num2;
	cout<<"Sum of "<<result<<endl;
}

void A::sub()
{
	B obj;
	int result=obj.num1 - obj.num2;
	cout<<"Sum of "<<result<<endl;
}

void A::mul()
{
	B obj;
	int result=obj.num1 * obj.num2;
	cout<<"Sum of "<<result<<endl;
}

int  main()
{
	A a;

	a.add();
	a.mul();
	a.sub();
}
