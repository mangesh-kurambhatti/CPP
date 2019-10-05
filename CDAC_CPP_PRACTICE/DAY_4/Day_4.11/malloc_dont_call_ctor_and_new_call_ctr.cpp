/*
 * malloc_dont_call_ctor_and_new_call_ctr.cpp
 *
 *  Created on: 07-Mar-2019
 *      Author: sunbeam
 */



#include<cstdlib>
#include<iostream>

using namespace std;

class Complex{

private:
		int real;
		int imag;
public:
		Complex()
		{
			cout<<"Inside Ctor"<<endl;
		}
		~Complex()
		{
			cout<<"Inside Dtor"<<endl;
		}
		void Hello()
		{
			cout<<"Hello World"<<endl;
		}
};
int main()
{
	Complex *ptr=new Complex();
	//Complex *ptr =(Complex *)malloc (sizeof(Complex));
//	ptr->Hello();
	delete ptr;
return 0;
}

int main1()
{
	Complex *ptr =(Complex *)malloc (sizeof(Complex));


return 0;
}
