/*
 * Binary_operator_overloading.cpp
 *
 *  Created on: 13-Mar-2019
 *      Author: sunbeam
 */

#include<iostream>
using namespace std;


class Complex
{
private:
	int real;
	int imag;
public:
	Complex(void):real(0),imag(0)
	{
		cout<<"Complex(void):real(0),imag(0)"<<endl;
	}
	Complex(int real,int imag):real(real),imag(imag)
	{
		cout<<"	Complex(int real,int imag):real(real),imag(imag)"<<endl;
	}

	Complex operator+(Complex &c2)
	{	Complex temp;

		temp.real=this->real+c2.real;
		temp.imag=this->imag+c2.imag;

		return temp;
	}

	Complex operator-(Complex &c2)
		{	Complex temp;

			temp.real=this->real-c2.real;
			temp.imag=this->imag-c2.imag;

			return temp;
		}

		bool operator==(Complex &c1)
		{
			return this->real==c1.real && this->imag==c1.imag;

		}
	friend Complex operator+(int value,Complex &c1);
	friend Complex operator+(Complex &c1,int value);
	friend ostream& operator<<(ostream &out,Complex &c1);
	friend istream& operator>>(istream &in,Complex &c1);
};

Complex operator+(Complex &c1,int value)
{
	Complex temp;
	temp.real=c1.real+ value;
	temp.imag=c1.imag+ value;
	return temp;
}
Complex operator+(int value,Complex &c1)
{
	Complex temp;
	temp.real=c1.real+ value;
	temp.imag=c1.imag+ value;
	return temp;
}

istream& operator>>(istream &in,Complex &c1)
{
	cout<<"Real No	:	"<<endl;
	cin>>c1.real;

	cout<<"Imag No	:	"<<endl;
	cin>>c1.imag;

	return in;
}

ostream& operator<<(ostream &out,Complex &c1)
{
	cout<<"Real No	:	"<<c1.real<<endl;
	cout<<"Imag NO	:	"<<c1.imag<<endl;
	cout<<endl;

	return out;
}


int main()
{
	Complex c1;
	cin>>c1;

	Complex c2;
	cin>>c2;

	cout<<c1<<endl<<c2;

	Complex c3=c1+c2; //c3=c1.operator+(c2)
	Complex c4=c2-c1;// c4=c2.operator-(c1)
	cout<<c3;//will print addition
	cout<<c4;

	if(c3==c4)
		cout<<"Equal::"<<endl;
	else
		cout<<"Not equal::"<<endl;

	c3=c1+5; //c1.operator+(5);
	cout<<c3<<endl;

	c2=5+c1;
	cout<<c2<<endl;//
	return 0;
}
