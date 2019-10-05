
/*
 * virtual_class.cpp
 *
 *  Created on: 12-Mar-2019
 *      Author: sunbeam
 */
#pragma pack(1)
#include<iostream>
using namespace std;

class A
{
private:
		int num1;

public:
		A(void)
		{
			this->num1=10;
		}

		A(int num1 )
				{
					cout<<"A(int num1 )"<<endl;
					this->num1=num1;
				}

		void PrintRecord(void)
		{
			cout<<"Num 1	:	"<<this->num1<<endl;
		}

		void ShowRecord(void)
		{
			cout<<"Num 1	:	"<<this->num1<<endl;
		}
};

class B : virtual public A
{
private:
		int num2;
public:
		B(void)
		{
			this->num2=20;
		}
		B(int num2)
		{
			cout<<"B(int num2)"<<endl;
			this->num2=num2;
		}
		B(int num1,int num2 ):A(num1)
				{
					cout<<"	B(int num1,int num2 ):A(num1)"<<endl;
					this->num2=num2;
				}

		void PrintRecord(void)
		{
			//A::PrintRecord();
			cout<<"Num 2	:	"<<this->num2<<endl;
		}
		void ShowRecord(void)
		{
			cout<<"Num 2	:	"<<this->num2<<endl;
		}
};

class C : virtual public A
{
private:
		int num3;

public:
		C(void)
		{
			this->num3=30;
		}

		C(int num3)
		{
			cout<<"C(int num3)"<<endl;
			this->num3=num3;
		}
		C(int num1 ,int num3):A(num1)
				{
					cout<<"	C(int num1 ,int num3):A(num1)"<<endl;
					this->num3=num3;
				}

		void PrintRecord(void)
		{
			//A::PrintRecord();
			this->ShowRecord();
		}
		void ShowRecord(void)
		{
			cout<<"Num 3	:	"<<this->num3<<endl;
		}
};

class D: public B,public C
{
private:
		int num4;

public:
		D(void)
		{
			this->num4=40;
		}

		D(int num1,int num2,int num3,int num4 ):A(num1),B(num2),C(num3)
		{
			cout<<"D(int num1,int num2,int num3,int num4 ):A(num1),B(num2),C(num3)"<<endl;
					this->num4=num4;
		}

		void PrintRecord(void)
		{
			A::ShowRecord();
			B::ShowRecord();
			C::ShowRecord();

			this->ShowRecord();
		}
		void ShowRecord(void)
		{
			cout<<"Num 4	:	"<<this->num4<<endl;
		}
};

int main()
{
	//D obj;
	D obj(100,200,300,400);
	cout<<"Size of Object::"<<sizeof(obj)<<endl;
	obj.PrintRecord();
}
