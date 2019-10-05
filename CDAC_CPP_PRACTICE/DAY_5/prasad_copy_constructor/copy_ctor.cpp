/*
 * copy_ctor.cpp
 *
 *  Created on: 08-Mar-2019
 *      Author: sunbeam
 */




#include<iostream>
using namespace std;
class complex
 {
 private :
	int real;
	int imag;
public:
	complex (int x=0, int y=0):real(x),imag(y)
{

}
	complex( const complex &z1)
	{
		this->real=z1.real;
		this->imag=z1.imag;
	}
void print (void)
{
	cout<<" real=  "<<this->real<<endl;
	cout<<"imag=   "<<this->imag<<endl;
}

complex sum(complex c2)
{
 complex result;
 result.real=this->real+c2.real;
 result.imag=this->imag+c2.imag;
 return result;
}



 };


int main( void )
{
	complex b1(10,20);
	b1.print();
	complex c1(100,200);
	c1.print();
	complex c2=c1;
	//c2.print();
	complex c3 =c1.sum(c2);
	cout<<"Sum of real and imag is:::"<<endl;
	c3.print();
}
