/*
 * cin_overloading.cpp
 *
 *  Created on: 13-Mar-2019
 *      Author: sunbeam
 */




/*
 * cout_overloading.cpp
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
			cout<<"Complex(int real,int imag):real(real),imag(imag)"<<endl;
		}

		//Complex *const this=&c2
		//Complex &other=c1
		Complex(const Complex &other)
		{
			cout<<"Complex(const Complex &other)"<<endl;
			this->real=other.real;
			this->imag=other.imag;
		}
		void show()
		{
			cout<<"Real	:	"<<this->real<<endl;
			cout<<"Imag	:	"<<this->imag<<endl;

		}

		void operator=(Complex &c2)
		{
			cout<<"void operator=(Complex &c2)"<<endl;
			this->real=c2.real;
			this->imag=c2.imag;
		}
		friend istream& operator>>(istream& in ,Complex &c1);
		friend ostream& operator<<(ostream &out,Complex &c1);
};

//void operator=(Complex &c2)
//{

//}
istream& operator>>(istream &in ,Complex &c1)
{

	cout<<"Real No	:	"<<endl;
	cin>>c1.real;

	cout<<"Imag No	:	"<<endl;
	cin>>c1.imag;

	return in;
}

ostream& operator<<(ostream &out,Complex &c1)
{
	cout<<"Real No :	"<<c1.real<<endl;
	cout<<"Imag No :	"<<c1.imag<<endl;
	cout<<endl;
	return out;
}
int main()
{
Complex c1(10,20);

Complex c2;
cin>>c2;
//c1.show();
Complex c3;

c3=c2; // c3.operator=(c2)
//cout<<endl;
//Complex c2=c1; //Complex
cout<<c3;
}
