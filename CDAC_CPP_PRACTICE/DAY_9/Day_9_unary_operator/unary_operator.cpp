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

	Complex operator++() //prefix
		{
			Complex temp;
			temp.real= ++this->real;
			temp.imag= ++this->imag;

			return temp;
		}

	Complex operator++(int) //postfix
			{
				Complex temp;
				temp.real=this->real++;
				temp.imag=this->imag++;

				return temp;
			}

	friend ostream& operator<<(ostream &out,Complex &c1);
	friend istream& operator>>(istream &in,Complex &c1);
};

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

	Complex c2= ++c1;// c2=opertor++(c1)

	Complex c3= c1++;// //c3=operator++(c1,0);
	cout<<c2;
	cout<<c3;
	return 0;
}



