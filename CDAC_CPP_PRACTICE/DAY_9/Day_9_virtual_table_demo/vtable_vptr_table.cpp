/*
 * vtable_vptr_table.cpp
 *
 *  Created on: 13-Mar-2019
 *      Author: sunbeam
 */


/*
 * cout<<+++++++++++++++++++++++++++++++++
 * referr Day_9.4 code for details;
 */

#include<iostream>
using namespace std;
class Base
{
private:
	//v-ptr
	int num1;
	int num2;
public:
	Base( void )
	{
		this->num1 = 10;
		this->num2 = 20;
	}
	virtual void f1( void )
	{
		cout<<"Base::f1"<<endl;
	}
	virtual void f2( void )
	{
		cout<<"Base::f2"<<endl;
	}
	virtual void f3( void )
	{
		cout<<"Base::f3"<<endl;
	}
	void f4( void )
	{
		cout<<"Base::f4"<<endl;
	}
	void f5( void )
	{
		cout<<"Base::f5"<<endl;
	}
	virtual ~Base( )
	{	}
};
class Derived : public Base
{
private:
	int num3;
public:
	Derived( void )
	{
		this->num3 = 30;
	}
	virtual void f1( void )
	{
		cout<<"Derived::f1"<<endl;
	}
	void f2( void )
	{
		cout<<"Derived::f2"<<endl;
	}
	void f4( void )
	{
		cout<<"Derived::f4"<<endl;
	}
	virtual void f5( void )
	{
		cout<<"Derived::f5"<<endl;
	}
	virtual void f6( void )
	{
		cout<<"Derived::f6"<<endl;
	}
};

int main1()
{
	Base *ptr=new Derived();
	ptr->f1();//late binding
	ptr->f2();//late binding
	ptr->f3();//late binding
	ptr->f4();//early binding
	ptr->f5();//early binding
	return 0;
}

int main()
{
	Derived *ptr=new Derived();
	ptr->f1();//late binding
	ptr->f2();//late binding
	ptr->f3();//late binding
	ptr->f4();//early binding
	ptr->f5();//late binding
	ptr->f6();//late binding
	return 0;
}
